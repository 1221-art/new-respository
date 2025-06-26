Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers
1 of 982
Fwd:
Inbox

NITESH SANTOSH JHA
Attachments
12:37 (0 minutes ago)
to me


---------- Forwarded message ---------
From: KALPATARU KAILASCHANDRA DASH <2403031050058@paruluniversity.ac.in>
Date: Mon, Jun 23, 2025, 8:25 AM
Subject:
To: <2403031050039@paruluniversity.ac.in>, <2403031050035@paruluniversity.ac.in>, <2403031050040@paruluniversity.ac.in>, <2403031050414@paruluniversity.ac.in>, <2403031050291@paruluniversity.ac.in>, <2403031050139@paruluniversity.ac.in>, <2403031050096@paruluniversity.ac.in>, <2403031050393@paruluniversity.ac.in>, <2403031050209@paruluniversity.ac.in>, <2403031050468@paruluniversity.ac.in>, <2403031050342@paruluniversity.ac.in>, <2403031050135@paruluniversity.ac.in>, <2403031050256@paruluniversity.ac.in>, <2403031050171@paruluniversity.ac.in>, <2403031050174@paruluniversity.ac.in>, <2403031050439@paruluniversity.ac.in>, <2403031050055@paruluniversity.ac.in>, <2403031050081@paruluniversity.ac.in>, <2403031050330@paruluniversity.ac.in>, <2403031050323@paruluniversity.ac.in>, <2403031050267@paruluniversity.ac.in>, <2403031050376@paruluniversity.ac.in>, <2403031050022@paruluniversity.ac.in>, <2403031050116@paruluniversity.ac.in>, <2403031050140@paruluniversity.ac.in>, <2403031050133@paruluniversity.ac.in>, <2403031050212@paruluniversity.ac.in>, <2403031050293@paruluniversity.ac.in>, <2403031050347@paruluniversity.ac.in>, <2403031050044@paruluniversity.ac.in>, <2403031050331@paruluniversity.ac.in>, <2403031050085@paruluniversity.ac.in>, <2403031050251@paruluniversity.ac.in>, <2403031050052@paruluniversity.ac.in>, <2403031050083@paruluniversity.ac.in>




 5 attachments
  • Scanned by Gmail
// operations on a stack   (Using arrays)
#include <stdio.h>
#define SIZE 10    // defining constant
int stack[SIZE], limit=SIZE-1, top=-1;
void push();
void pop();
void display();
void swap(int pos1, int pos2);
void change(int pos, int val);  // change the value at a valid given index

void main()
{
	int choice, ind1, ind2;
	do
	{
		printf("\n 1 Push \n 2 Pop \n 3 Display \n 4 Swap \n 5 Exit");
		printf("\n Enter your choice (1-5): ");
		scanf("%d",&choice);
		if (choice==1)
			push();
		else if (choice==2)
			pop();
		else if (choice==3)
			display();
		else if (choice==4)
		{
			if (top==-1)
				printf("Stack Underflow...No elements to swap");
			else
			{
				printf("Enter the index1 and index2 positions to swap");
				scanf("%d%d",&ind1,&ind2);
				swap(ind1,ind2);
			}
		}
		else if (choice==5)
			printf("\n * * * END OF PROGRAM * * *");
		else
			printf("\n Invalid input...please type 1 to 4 only");
	}while(choice!=5);
}
void push()
{
	top++;
	if (top>limit)		// checking for overflow
	{
		printf("\n Stack Overflow...No space for new elements");
		top--;
	}
	else
	{
		printf("Enter a value to push: ");
		scanf("%d",&stack[top]);
	}
}
void pop()
{
	if (top==-1)   // checking for underflow
	{
		printf("\n Stack Underflow...No elements to pop");
	}
	else
	{
		printf("\n This element will be removed %d",stack[top]);
		top--;
	}
}
void display()
{
	int index;
	if (top==-1)   // checking for underflow
	{
		printf("\n Stack Underflow...No elements to display");
	}
	else
	{
		printf("\n The stack elements are");
		for(index=0;index<=top;index++)
			printf("\n %d",stack[index]);
	}
}

void swap(int pos1, int pos2)
{
	int temp;
	if (pos1>=0 && pos1<=top && pos2>=0 && pos2<=top && pos1<pos2)
	{
		// using 3rd variable
		temp=stack[pos1];
		stack[pos1]=stack[pos2];
		stack[pos2]=temp;
		// without using 3rd variable
		stack[pos1] = stack[pos1] + stack[pos2];
		stack[pos2] = stack[pos1] - stack[pos2];
		stack[pos1] = stack[pos1] - stack[pos2];	
	}
	else
		printf("Invalid index positions to swap");
}
Stack.c
Displaying Stack.c.
