#include <stdio.h> 
#include <string.h>

int main()
{
printf("Name: Anshul Katiyar\tSAP ID: 1000014221\n"); char string1[20];
int i, length; int flag = 0;

printf("Enter a string:\n"); scanf("%s", string1);

length = strlen(string1);


for(i=0;i < length ;i++){
if(string1[i] != string1[length-i-1]){ flag = 1;
break;
}
}


if (flag==1) {
printf("%s is not a palindrome", string1);
}
else {
printf("%s is a palindrome", string1);
}
return 0;
}

