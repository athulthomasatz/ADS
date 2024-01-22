#include<stdio.h>
#define max 20
void main()
{
  int arr[max],i,n,j,t;
  printf("Enter the size of the array ");
  scanf("%d",&n);
  printf("Enter the elemets to the array ");
  for(i=0;i<n;i++)
  { 
    scanf("%d",&arr[i]);
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j]<=arr[j+1])
      {
       t=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=t;
      }
    }
  }
  //comment 
  /* multi line i guess */
  
  printf("The sorted array is : ");
  for(i=0;i<n;i++)
  { 
    printf("%d\t",arr[i]);
  }
  
}

  
