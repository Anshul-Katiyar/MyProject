#include<stdio.h>
#include<stdlib.h>
#define size 10

int main()
{
  int stack1[size],stack2[size],top1,top2;
  top1=-1;top2=-1;

  // entering the stacks
  int n1,n2,i;
  printf("NAME: Monis Khan");
  printf("SAP ID: 1000013933");
  printf("Enter the size of stack 1: ");
  scanf("%d",&n1);
  printf("Enter the stack: ");
  for(i=0;i<n1;i++)
    scanf("%d",&stack1[i]);
  top1=n1-1;

  printf("Enter the size of stack 2: ");
  scanf("%d",&n2);
  printf("Enter the stack: ");
  for(i=0;i<n2;i++)
    scanf("%d",&stack2[i]);
  top2=n2-1;
  
  // checking for duplicate elements in the stack

  int j,k;
  //removing duplicate elements from stack 1
  for(i=0;i<n1;i++)
  {
    for(j=i+1;j<n1;j++)
    {
      if(stack1[i]==stack1[j])
      {
        for(k=j;k<n1;k++)
          stack1[k]=stack1[k+1];
        j--;
        n1--;
        top1--;
      }
    }
  }

  // removing duplicate elements from stack2
  for(i=0;i<n2;i++)
  {
    for(j=i+1;j<n2;j++)
    {
      if(stack2[i]==stack2[j])
      {
        for(k=j;k<n2;k++)
          stack2[k]=stack2[k+1];
        j--;
        n2--;
        top2--;
      }
    }
  }

  printf("Stack 1 after removing any duplicate elements is: ");
  for(i=0;i<n1;i++)
    printf("%d\t",stack1[i]);
  
  printf("\nStack 2 after removing any duplicate elements is: ");
  for(i=0;i<n2;i++)
    printf("%d\t",stack2[i]);

  // checking wheather the stacks are similiar or not
  
    int ele1,ele2;
    while(1)
    {
      ele1=stack1[top1];
      ele2=stack2[top2];
      if(ele1!=ele2)
      {
        printf("\nStack not similiar");
        exit(0);
      }
      top1--;
      top2--;
      if(top1==-1)
      {
        printf("\nStack are similiar");
		      }

    }
  
}
