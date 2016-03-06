#include<stdio.h>
#include<string.h>
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
void info(struct Books *book);
int main(){
	struct Books book1;
	struct Books book2;
	
	strcpy(book1.title, "C programming for beginners");
	strcpy(book1.author, "Courage");
	strcpy(book1.subject, "Programming");
	book1.book_id=719315290;
	
	strcpy(book2.title, "C in 21 days");
	strcpy(book2.author, "Angeh");
	strcpy(book2.subject, "Programming");
	book2.book_id=702167182;
	
	info(&book1);
	
	info(&book2);
	return 0;
}
void info(struct Books *book){
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book-> author);
	printf("Book subject : %s\n", book->subject);
	printf("Book_id : %d\n", book->book_id);
}
