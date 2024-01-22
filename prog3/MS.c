#include<stdio.h>
#define max 20
void main()
{
 int arr1[max],arr2[max],i,j,m,n,mer[max],k=0;
 //first array 
 printf("Enter the limit for first array : ");
 scanf("%d",&n);
 printf("Enter the first sorted array : ");
 for(i=0;i<n;i++)
 { 
   scanf("%d",&arr1[i]);
 }
 //second array
  printf("Enter the limit for Second array : ");
 scanf("%d",&m);
 printf("Enter the Second sorted array : ");
 for(j=0;j<m;j++)
 { 
   scanf("%d",&arr2[j]);
 }


i=0;
j=0;
while(i<n && j<m)
{
 if(arr1[i]<arr2[j])
 {
   mer[k]=arr1[i];
   i++;
 }
 else
 {
  mer[k]=arr2[j];
  j++;
 }
k++;
}
while(i<n)
{
  mer[k]=arr1[i];
  i++;
  k++;
}
while(j<m)
{
 mer[k]=arr2[j];
 j++;
 k++;
}

printf("The sorted array ");
for(i=0;i<m+n;i++)
{
 printf("%d\n",mer[i]);
}

}



  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   
