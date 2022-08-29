#include <stdio.h>
int addnum(int a, int b);
int subnum(int a, int b);
int mulnum(int a, int b);
int divnum(int a, int b);
int modnum(int a, int b);
int main()
{
int a, b;
printf("Anshul Katiyar\n");
printf("SAP ID - 1000014221\n");
printf("Enter two Number \n");
printf("Enter Value of a : ");
scanf("%d", &a);
printf("Enter Value of b : ");
scanf("%d", &b);
int operation;
printf("Enter Operaton you want to perform : \n");
printf("Press 1 to add \n");
printf("Press 2 to subtract \n");
printf("Press 3 to multiply \n");
printf("Press 4 to divide \n");
printf("Press 5 to find remainder \n->\t");
scanf("%d", &operation);
switch (operation)
{
case 1:
printf("a + b is %d", addnum(a, b));
break;
case 2:
printf("a - b is %d", subnum(a, b));
break;
case 3:
printf("a x b is %d", mulnum(a, b));
break;
case 4:
printf("a / b is %d", divnum(a, b));
break;
case 5:
printf("a mod b is %d", modnum(a, b));
break;
default:
printf("Error !\nPlease Enter Valid Operation !!");
break;
}
return 0;
}
int addnum(int a, int b)
{
return a + b;
}
int subnum(int a, int b)
{
return a - b;
}
int mulnum(int a, int b)
{
return a * b;
}
int divnum(int a, int b)
{
return a / b;
}
int modnum(int a, int b)
{
return a % b;
}

