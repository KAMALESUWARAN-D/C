#include<stdio.h>
void main()
{
  int key,a[50],n,c=0;
  printf("***LINEAR SEARCH***");
  printf("/nEnter the no.of elements:");
  scanf("%d",&n);
  printf("/nEnter the elements");
  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Enter the number to search");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      c=1;
      printf("The element is found at position %d",i+1);
      break;
    }
  }
  if(c==0)
    printf("The element is not found");
  }


