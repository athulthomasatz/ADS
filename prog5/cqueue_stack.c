#include<stdio.h>
#include<stdlib.h>
#define max 20
int cque[max],front=-1,n,rear=-1;
void enque(){
   if(front == (rear+1)%n)
   {
    	printf("queue overflow\n");
   }
   else{
   	if(front ==-1)
   	
   		front=0;
   	rear=(rear+1)%n;
   	printf("Enter element  : ");
   	scanf("%d",&cque[rear]);
   	}
   }
   
void deque(){
   if(front==-1)
   {
   	printf("Queue undeflow\n");
   }
   else{
   	printf("REmoved item =%d \n",cque[front]);
   	if(front==rear)
   	{
   		front=rear=-1;
   	}
   	else{
   	front=(front+1)%n;
   	     }
   	}
   }
   	
void search(){
	int i,item,flag=0;
	printf("Enter the element to search : ");
	scanf("%d",&item);
	for(i=front;i!=(rear+1)%n;i=(i+1)%n)
	{
		if(cque[i]==item)
		{
		 flag=1;
		 break;
		 }
	}
	if(flag==1)
	 printf("Element is founded\n");
	else
	 printf("Not founded\n");
	}
void display(){
int i;
if(front ==-1){
 printf("Queue Empty\n");
 }
else{
 printf("The elements in circular queue are :\n");
 for(i=front;i!=(rear+1)%n;i=(i+1)%n){
 	printf("%d \n",cque[i]);
       }
       
   }
}

int main(){
  int ch;
  printf("Enter the size of the queue: ");
  scanf("%d",&n);
  do{
    printf("Enter choice from given options : \n 1.Enque\n2.Dequeue\n3.Search\n4.Display\n5.exit\n");
    scanf("%d",&ch);
    switch(ch){
     case 1:enque();
     	    break;
     case 2:deque();
     	    break;
     case 3:search();
     	    break;
     case 4:display();
     	    break;
     case 5:exit(0);
     	    
     default : 
     		printf("invalid state\n");
     	}
     
}
while(1);
return 0;
}


 
	
   	
  
 

