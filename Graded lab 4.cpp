#include <stdio.h>
#include <string.h>
int main() 
{
   int i,n,c=0;
   char line[150];
    printf("Name- Anshul Katiyar  SAP-1000014221");
   
   printf("\n\nEnter a string: ");
   fgets(line, sizeof(line), stdin); 
 
   for (int i = 0, j; line[i] != '\0'; ++i) {

      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
  
  for(int i=0; line[i]!='\0'; i++)
    {
        if(line[i]>='A' && line[i]<='Z')
        {
            line[i] = line[i] + 32;
        }
    }
  n=strlen(line)-1;
  while (n > c) 
    { 
        if (line[c++] != line[n--]) 
        { 
            printf("String is Not Palindrome"); 
            return 0; 
        } 
    } 
    printf("String is palindrome"); 
  
  return 0;
}
