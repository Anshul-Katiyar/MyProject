#include<stdio.h>
 int main()
{

printf("NAME: Anshul Katiyar\tSAP ID: 1000014221\n"); int i,n,s,c=0;
printf("Enter the size of array:\n"); scanf("%d",&n);
int a[n];
printf("Enter the elements of array:\n"); for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}

printf("Enter the number you want to search:\n"); scanf("%d",&s);
for(i=0;i<n;i++)
{

if(a[i]==s)
{
c++;break;
}
}

if(c==1)
 
printf("Search successful\n"); else
printf("Search unsuccessful\n");
}

