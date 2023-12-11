#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node*next;
};
struct node*head;
void insertfirst();
void insertlast();
void insertlocation();
void deletefirst();
void deletelast();
void deletelocation();
void display();
void main()
{
int ch=0;
while(ch!=8)
{
printf("\n 1.insertfirst\n 2.insertlast\n 3.insertlocation\n 4.deletefirst\n 5.deletelast\n 6.deletelocation\n 7.display\n 8.exit");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insertfirst();
break;
case 2:
insertlast();
break;
case 3:
insertlocation();
break;
case 4:
deletefirst();
break;
case 5:
deletelast();
break;
case 6:
deletelocation();
break;
case 7:
display();
break;
case 8:
printf("exit point");
break;
default:
printf("enter a valid choice(1/2/3/4/5/6/7/8)");
}
}
}

void insertfirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node*));
printf("enter element to be inserted:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("%d inserted into list",newnode->data);
}
void insertlast()
{
struct node*newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
printf("empty\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
temp=newnode;
}
printf("%d inserted into list",newnode->data);
}
void insertlocation()
{
int key,flag=0;
struct node*newnode;
struct node*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the key");
scanf("%d",&key);
printf("enter the data");
scanf("%d",&newnode->data);
if(head==NULL)
{
printf("empty\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
if(temp->data==key)
{
flag=1;
newnode->next=temp->next;
temp->next=newnode;
break;
}
else
{
flag=0;
temp=temp->next;
}
if(flag==0)
printf("%d is not found\n",key);
}
}
}
void deletefirst()
{
struct node*temp;
temp=head;
head=temp->next;
printf("%d deleted\n",temp->data);
free(temp);
}
void deletelast()
{
struct node* temp,*p;
temp=head;
while(temp->next!=NULL)
{
p=temp;
temp=temp->next;
}
printf("\n %d deleted\n",temp->data);
free(temp);
p->next=NULL;
}
void deletelocation()
{
struct node*nextnode,*temp;
int pos,i;
printf("enter the position to be deleted:");
scanf("%d",&pos);
temp=head;
for(i=1;i<pos-1;i++)
temp=temp->next;
nextnode=temp->next;
temp->next=nextnode->next;
printf("removed element list %d",nextnode->data);
free(nextnode);
}
void display()
{
struct node*temp;
temp=head;
while(temp->next!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}





