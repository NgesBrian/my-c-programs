#include <stdio.h>
#include <stdlib.h>

/*
	FIND_PART: look up for the part number in the inventory list. 
				return a pointer to the the part node containing the part number
				 if the part number is not found,return NULL.

*/

struct  part *part_find(int number)
{
	struct  part *p;

		for(p=inventory; p!=NULL && number > p->number;p=p->next);

		if (p!=NULL && number == p->number)
			return p;
			return NULL;	
};

/*
	INSERT: PROMPT INFORMATION ABOUT A NODE AND INSERT IT TO THE INVENTORY LIST.
			the list remain sorted.
			prints and error message.

*/

struct insert(void)
{
	struct part *cur ,*prev, *new_node;
	new_node=malloc(sizeof(struct part)); 
	if (new_node==NULL)
	{
		printf("database is full and can not more take parts.\n");
		return;
	}

	printf("enter part number \n");
	scanf("%d"&new_node->number);

	for (cur=inventory,prev =NULL; cur!=NULL && new_node->number>cur->number;prev=cur,cur=cur->next)
		
};