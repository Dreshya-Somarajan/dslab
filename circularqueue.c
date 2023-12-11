#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void enqueue();
void dequeue();
void display();
int cq[SIZE],rear=-1,front=-1;
void main()
{
int ch;
do{
printf("\nchoice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid");
}
}
while(1);
}
void enqueue()
{
int item;
if(front==(rear+1)%SIZE)
printf("overflow");
else
{
if(front==-1)
{
front=0;
}
rear=(rear+1)%SIZE;
printf("enter element:");
scanf("%d",&item);
cq[rear]=item;
}
}

void dequeue()
{
int item;
if(front==-1)
{
printf("underflow");
}
else
{
printf("removed %d",cq[front]);
if(front==rear==-1)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%SIZE;
}
}
}
void display()
{
int i=front;
if(front==rear==-1)
{
printf("underflow");
}
else
{
printf("queue is:\n");
for(int i=front;i!=rear;i=(i+1)%SIZE)
{
printf("%d\t",cq[i]);
}
printf("%d",cq[i]);
}
}


