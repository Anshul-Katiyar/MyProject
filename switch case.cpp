#include<stdio.h>
int main()
{
	int s=0,a,b,c;
	printf("Name: Anshul Katiyar\tSAP ID: 1000014221\n");
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Press:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder\n");
	printf("Enter your choice\n\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		s=a+b;
		printf("a+b=%d",s);
		break;
		case 2:
		s=a-b;
		printf("a-b=%d",s);
		break;
		case 3:
		s=a*b;
		printf("aXb=%d",s);
		break;
		case 4:
		s=a/b;
		printf("a/b=%d",s);
		break;
		case 5:
		s=a%b;
		printf("a remainder b=%d",s);
		break;
		default:
		printf("Invalid option");	
	}
}
