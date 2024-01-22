#include<stdio.h>
#include<stdlib.h>
#define max 20
int n,st[max],top=-1,i;
//PUSH
void push(){
 if(top==n-1)
 {
   printf("Stack overflow \n");
 }
 else{
  printf("Enter the elemets to insert : ");
  top+=1;
  scanf("%d",&st[top]);
  }
  }
//POP
 void pop(){
  if(top==-1)
  {
   printf("Stack underflow \n");
  }
  else{
   printf("The deleted element is %d \n",st[top]);
   top--;
  }
  }
//Search
  void search(){
  int key,flag=0;
   printf("Enter the elemets to search : ");
   scanf("%d",&key);
   for(i=top;i>=0;i--)
   {
    if(key==st[i])
    {
     flag=1;
     break;
    }
    }
    if(flag==1){
    printf("Elemet is founded \n" );
    }
    else{
    printf("Element is not founded\n");
   }
  
  }
    //Display
  void display(){
  if(top==-1)
  {
   printf("The stack is empty \n");
  }
  else
  {
   for(i=top;i>-1;i--)
   {
     printf("%d\n",st[i]);
   }
  }
  }
void main()
{ 
 int ch;
 printf("Enter the size of the stack : ");
 scanf("%d",&n);
 do{
 
   printf("1)PUSH\n 2)POP]\n 3)Search \n 4)Display \n 5)Exit\n");
   printf("Enter the choice from the below list : " );
   scanf("%d",&ch);
   switch(ch){
       case 1 : push();
                break;
       case 2 : pop();
                break;
       case 3 : search();
                break;
       case 4 : display();
               break;         
       case 5 : exit(0);
               break;
       default: printf("Invzlid");
      }
      }while(1);
      
 }
 
 
    
        
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
