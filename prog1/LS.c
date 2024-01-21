#include<stdio.h>
#define max 10
void main()
 	{
 	 int arr[max];
 	 int i,n,flag=0,key;
 	 printf("Enter the Array size : ");
 	 scanf("%d",&n);
 	 printf("Enter the %d elements to insert into the arrray : ",n);
 	 for(i=0;i<n;i++)
 	 {
 	   scanf("%d",&arr[i]);
 	 }
 	 printf("Enter the element to search : ");
	 scanf("%d",&key);
	 for(i=0;i<n;i++)
	 {
	   if(arr[i]==key)
	   {
	     printf("The element is founded "); 
	     flag=1;
	     break;
	   }
	 }	 
	 if(flag==0)
	 printf("Not Founded");
}
	
