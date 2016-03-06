/*	       ##############################
	       # MAIN HEADER FILES INCLUDED #
	       ##############################
*/
  #include<conio.h>
  #include<stdio.h>
  #include<stdlib.h>
  #include<graphics.h>
  #include<string.h>
  #include<dos.h>
  #include<ctype.h>

/*	       ##############################
	       # USER DEFINED FUNCTIOS USED #
	       ##############################
*/
  void add_rec (void); //FUNCTION TO ADD NEW RECORC
  void disp_by_name(void);//FUNCTION SEARCH THE RECORD USING NAME
  void disp_by_clas(void);//FUNCTION SEARCH THE RECORD USING CLASS
  void edit_rec (void);//FUNCTION TO EDIT RECORC
  void delete_rec (void);//FUNCTION TO DELETE RECORC
  void display_all_rec (void);//FUNCTION TO DISPLALY ALL RECORDS AT ONCE
  void display_single_rec (void);//FUNCTION TO DISPLAY RECORDS ONE BY ONE
  int Pass (void);        //CHCKS FOR THE ADMINISTRATOR PASSWORD
  void splash (void);//FUNCTION SHOWS THE INTRODUCTION SCREEN
  void search(void); //FUNCTION TO SEARCH THE RECORDS
  void end_splash (void);//SHOWS THE CREDIT SCREEN
  int check_user(void);    //CHECKS FOR THE GENERAL USER PASSWORD
  void administrator(void);// THE FUNCTION CALLED WHEN ADMINSTRATOR LOGS IN
  void user_menu(void);   //THE FUNCTION CALLED WHEN GENERAL USER LOGS IN
  void add_user(void);//FUNCTION TO ADD NEW USER BY ADMINSTRATIOR
  void delete_user(void);//FUNCTION TO DELETE EXISTING USER
  void display_user(void);//FUNCTION DISPLAYS THE EXISTING USER

/*	       ##############################
	       # FUNCTION TO CONTROLL MOUSE #
	       ##############################
*/

  int initmouse();//FUNTTION INITIALISE THE MOUSE
  void showmouseptr();//FUNTTION SHOWS THE MOUSE POINTER ON SCREEN
  int restrictmouseptr(int x1,int y1,int x2,int y2);//FUNCTION KEEPS THE MOUSER POINTER ON THE VISIBLE SCREEN
  void getmousepos(int *button,int *x,int *y);//FUNTTION STATES THE MOUSE POINTER POSITION

/*	       ###############################################
	       # THE STRUCTURES AND FILE POINTER DEFINITIONS #
	       ###############################################
*/

  union REGS i,o;

   struct user //STRUCTURE FOR USERNAME AND PASSWORD
   {
     char username[12],userpswd[12];
   };

   FILE *usrptr; //USER FILE POINTER
   struct user usrrec;

 struct student //STRUCTURE FOR STUDENT INFORMATION
  {
     int rno;
     char name[50],clas[50],f_name[50],ph[8],adrs[50],date[15];
     char gender;
  };

  student rec;                           //Global variable of student rec
  FILE *fptr;                            //Global variable for file
  int x,y,button;
  char name[12];

/*
#################################################################################
# THE MAIN FUNCTION THAT HANDLES ALL THE USER FUNCTIONS THE EXUTION STARTSHERE #
#################################################################################
*/

  void main(void)
  {

	fptr=fopen("student.dat","rb+");
	if (fptr==NULL)
	{
		fptr=fopen("student.dat","wb+");
		if (fptr==NULL)
		{
			printf("
 Can't create file");
			getch();
			exit(1);
		}
  }

      if (initmouse()==0)
	{
	closegraph();
	restorecrtmode();
	printf("
Mouse driver not loaded");
	exit(1);
	}
      usrptr=fopen("userfile.dat","rb+");
     if(usrptr==NULL)
      {
       usrptr=fopen("userfile.dat","wb+");
       if(usrptr==NULL)
       {
	printf("SORRY CANNOT CREATE USER FILE");
	return;
       }// end if
      }// end if
	splash();
	int gd=DETECT,gm,errorcode,xc,yc;
	initgraph(&gd,&gm,"");//Switch to Graphic mode
	errorcode = graphresult();
if (errorcode != grOk)//Returns error if Graphic mode note started with error no.
	{
	printf("Graphics error: %s
", grapherrormsg(errorcode));
	printf("Press any key to halt:");
	getch();
	exit(1);
	}
   setbkcolor(4);
   int menu=13;
   char op;
   while(menu==13)
   {
   cleardevice();
   showmouseptr();
   rectangle(1,1,630,470);
   rectangle(6,6,626,466);
   rectangle(70,55,280,80);
	gotoxy(10,5);
	printf("1-->LOGIN AS ADMINISTRATOR");
   rectangle(70,90,280,115);
	gotoxy(10,7);
	printf("2-->LOGIN AS USER");
	rectangle(70,125,280,150);
	gotoxy(10,9);
	printf("3-->EXIT");
while(!kbhit())
	{
	showmouseptr();
	getmousepos(&button,&xc,&yc);
	if (((button & 1)==1)&&(xc>70&&xc<280)&&(yc>55&&yc<80))
	{
	administrator();
	cleardevice();
	}
	if (((button & 1)==1)&&(xc>70&&xc<280)&&(yc>90&&yc<115))
	{
	user_menu();
	cleardevice();
	}
	if (((button & 1)==1)&&(xc>70&&xc<280)&&(yc>125&&yc<150))
	{ end_splash();cleardevice();exit(0);
	}
	}
   gotoxy(10,11);
   printf("ENTER YOUR CHOICE (1 TO 3) : ");
   fflush(stdin);
   op=getch();
   switch(op)
   {
     case '1': administrator(); break;
     case '2': user_menu();     break;
     case '3': end_splash();    break;
     default: printf("Plesae Enter Only Listed Options");
   }
   }//end while
  }

/*       ###########################################################
	 # THE FUNCTION THAT HANDLES ADMINISTRATIOR LOGIN PASSWORD #
	 ###########################################################
*/

  void administrator(void)
  {
	char ch;
	int c=Pass(),xc,yc;
	if(c==0)
	return;
	int menu=13;
	while (menu==13)
		{
			cleardevice();
			for (x=68,y=3;x<=40,y<=31;x--,y++)
			{
			gotoxy(y,3);printf("  DISPLAY ");
			gotoxy(x,3);printf(" MAIN MENU ");
			delay(15);
			}
	showmouseptr();
	rectangle(1,1,630,470);
	rectangle(6,6,626,466);
	rectangle(160,55,400,80);gotoxy(22,5);printf("1-->ADD RECORD");
	rectangle(160,90,400,115);gotoxy(22,7);printf("2-->EDIT RECORD");
	rectangle(160,120,400,145);gotoxy(22,9);printf("3-->DISPLAY SINGLE RECORD");
	rectangle(160,155,400,180);gotoxy(22,11);printf("4-->DISPLAY ALL RECORDS");
	rectangle(160,185,400,210);gotoxy(22,13);printf("5-->DELETE RECORD");
	rectangle(160,215,400,240);gotoxy(22,15);printf("6-->ADD USER");
	rectangle(160,245,400,280);gotoxy(22,17);printf("7-->DISPLAY ALL USERS");
	rectangle(160,285,400,310);gotoxy(22,19);printf("8-->DELETE USER");
	rectangle(160,315,400,345);gotoxy(22,21);printf("9-->SEARCH");
	rectangle(160,350,400,380);gotoxy(22,23);printf("0-->LOG OFF ADMINISTRATOR");
	gotoxy(20,25);printf(" Enter your Choice <0 TO 9> : ");
		  while (!kbhit())
		  {
		  showmouseptr();
		  getmousepos(&button,&xc,&yc);
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>55&&yc<80))
		  {
		  add_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>90&&yc<115))
		  {
		  edit_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>120&&yc<145))
		  {
		  display_single_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>155&&yc<180))
		  {
		  display_all_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>185&&yc<210))
		  {
		  delete_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>215&&yc<240))
		  {
		  add_user();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>245&&yc<280))
		  {
		  display_user();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>285&&yc<310))
		  {
		  delete_user();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>315&&yc<345))
		  {
		  search();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>350&&yc<380))
		  {
		  return;
		  }
		  }
		  ch=getch();
		  switch(ch)
		  {
			case '1':add_rec(); break;
			case '2':edit_rec(); break;
			case '3':display_single_rec(); break;
			case '4':display_all_rec(); break;
			case '5':delete_rec(); break;
			case '6':add_user(); break;
			case '7':display_user(); break;
			case '8':delete_user(); break;
			case '9':search();break;
			case '0':return;
			default:printf("Enter A Valid Options");
		  }   // end switches

		}// end while

  }// end body of administrator

/*       #########################################################
	 # 	  THE FUNCTION THAT HANDLES ALL SEARCHINGS	 #
	 #########################################################
*/

void search(void)
  {
	char ch;
	int xc,yc;
	int menu=13;
	while (menu==13)
		{
			cleardevice();
			for (x=68,y=3;x<=40,y<=31;x--,y++)
			{
			gotoxy(y,3);printf("  DISPLAY ");
			gotoxy(x,3);printf(" MAIN MENU ");
			delay(15);
			}
	showmouseptr();
	rectangle(160,55,400,80);gotoxy(22,5);printf("1-->SEARCH BY NAME");
	rectangle(160,90,400,115);gotoxy(22,7);printf("2-->SEARCH BY CLASS");
	rectangle(160,120,400,145);gotoxy(22,9);printf("3-->SEARCH BY G.R.NO.");
	rectangle(160,155,400,180);gotoxy(22,11);printf("4-->EXIT");
	gotoxy(22,23);printf(" Enter your Choice <1 TO 4> : ");
		  while (!kbhit())
		  {
		  showmouseptr();
		  getmousepos(&button,&xc,&yc);
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>55&&yc<80))
		  {
		  disp_by_name();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>90&&yc<115))
		  {
		  disp_by_clas();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>120&&yc<145))
		  {
		  display_single_rec();break;
		  }
		  if (((button & 1)==1)&&(xc>160&&xc<400)&&(yc>155&&yc<180))
		  {
		  return;
		  }
		  }
		  ch=getch();
		  switch(ch)
		  {
			case '1':disp_by_name(); break;
			case '2':disp_by_clas(); break;
			case '3':display_single_rec(); break;
			case '4':return;

		  }   // end switches

		}// end while

  }// end body of administrator

/*       #########################################################
	 # THE FUNCTION THAT SEARCHES USING THE STUDENT NAME     #
	 #########################################################
*/

void disp_by_name(void)
  {
  int found=0;
  char t[10];
  cleardevice();
  for (x=60,y=3;x<=30,y<=31;x--,y++)
	{
	gotoxy(y,3);printf(" DISPLAY ");
	gotoxy(x,3);printf(" SINGLE RECORD MENU ");
	delay(15);
	}

  gotoxy(20,6);printf("ENTER NAME FOR SEARCHINMG > ");
  gets(t);
  rewind(fptr);

  while (fread(&rec,sizeof(rec),1,fptr)==1)
  {
	if (strcmp(rec.name,t)==0)
	{
		cleardevice();
		for (x=60,y=3;x<=30,y<=31;x--,y++)
		{
		gotoxy(y,3);printf(" DISPLAYING RECORDS ");
		gotoxy(x,3);printf(" USING NAME ");
		delay(15);
		}
		found=1;
		gotoxy(10,7); printf(" NAME : %s ",rec.name);
		gotoxy(50,7); printf(" G.R.NO. : %d",rec.rno);
		gotoxy(10,9); printf(" FATHER'S NAME : %s",rec.f_name);
		gotoxy(10,11);printf(" CLASS : %s",rec.clas);
		gotoxy(50,11);printf(" GENDER : %c",rec.gender);
		gotoxy(10,13);printf(" RESIDENTIAL ADDRESS : %s",rec.adrs);
		gotoxy(10,15);printf(" PHONE : %s",rec.ph);
		gotoxy(10,17);printf(" DATE OF ADMISSION : %s",rec.date);
		gotoxy(17,22);printf("P
