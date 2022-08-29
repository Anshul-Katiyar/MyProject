#include <stdio.h>
 int main()
{
int i,j;
printf("NAME: Anshul Katiyar \tSAP ID: 1000014221\n"); printf("All Prime Number's between 100 and 200 are : \n");
for (i = 100; i <= 200; i++)
{

int check = 0;
for (j = 2; j < i; j++)
{

if (i % j == 0)
{

check++; break;
}
}

if (check == 0) printf("%d\t", i);
}

return 0;
}

