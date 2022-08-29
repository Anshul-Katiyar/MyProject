#include<stdio.h> 
#include<stdlib.h> 
 
int a[10], pos, elem; 
 
int n = 0; 
 
void create(); 
 
void display(); 
 
void insert(); 
 
void del(); 
 
void search(); 
int main() 
 
{ 
 	printf("Name: Monis Khan\tSAP ID: 1000013933\n"); 
             int choice; 
 
            while(1) 
 
            { 
 
             printf("\n\n~~~~MENU~~~~"); 
 
            printf("\n=>1. Create an array of N integers\n"); 
 
            printf("\n=>2. Display of array elements\n"); 
 
            printf("\n=>3. Insert Element at a given Position\n");            printf("\n=>4. Delete an element at a given Position\n"); 
 
           printf("\n=>5. Search an element\n"); 
 	 	    
 	 	   printf("\n=>6. Exit\n"); 
 
           printf("\nEnter your choice: \n"); 
 
           scanf("%d", &choice); 
 
           switch(choice) 
 
           { 
 
             case 1: create(); 
                   break; 
 
            case 2: display(); 
                  break; 
 
           case 3: insert(); 
                   break; 
 
           case 4:del(); 
                   break;                   case 5: search();                   break; 
 
           case 6:exit(1); 
                   break; 
 
        default:printf("\nPlease enter a valid choice:"); 
 
                        } 
            } 
 
} 
 
void create() 
 
{ 
             int i; 
 
            printf("\nEnter the number of elements:\n "); 
 
            scanf("%d", &n); 
 
            printf("\nEnter the elements: \n"); 
 
            for(i=0; i<n; i++) 
 
            { 
                        scanf("%d", &a[i]); 
 
            } 
 
} void search() 
{  	int i,e,c=0,b;  	printf("Enter the element to search\n");  	scanf("%d",&e);  	for(i=0;i<n;i++) 
 	{ 
 	 	if(a[i]==e) 
 	 	c++;  	 	b=i; 
 	 	if(c==1)  	 	break; 
 	} 
 	if(c==1) 
printf("Search is successful\nElement found at %d",b+1);  	else 
 	printf("search is unsuccessful\n"); 
} 
 
void display() 
 
{ 
             int i; 
             if(n == 0) 
 
            { 
 
                        printf("\nNo elements to display"); 
                         return; 
 
            } 
            printf("\nArray elements are: "); 
 
            for(i=0; i<n;i++) 
                         printf("%d\t ", a[i]); 
 
} 
 
void insert() 
 
{ 
             int i; 
             if(n == 5) 
 
            { 
 
        printf("\nArray is full. Insertion is not possible");                         return; 
 
            } 
             do 
 
            { 
 
printf("\nEnter a valid position where element to be inserted:    "); 
 
scanf("%d", &pos); 
 
            }while(pos > n); 
 
            printf("\nEnter the value to be inserted:   "); 
 
            scanf("%d", &elem); 
 
            for(i=n-1; i>=pos ; i--) 
 
            {                          a[i+1] = a[i]; 
 
            } 
 
            a[pos] = elem; 
 
            n = n+1; 
             display(); 
 
} 
 
void del() 
 
{ 
 
            int i; 
 
            
             if(n == 0) 
 
            { 
 
                        printf("\nArray is empty and no elements to delete"); 
                         return; 
 
            } 
             do 
 
            { 
 
                        printf("\nEnter a valid position from where element to be deleted:    "); 
 
                        scanf("%d", &pos); 
 
            }while(pos>=n); 
 
            elem = a[pos]; 
 
            printf("\nDeleted element is : %d \n", elem); 
 
            for( i = pos; i< n-1; i++) 
 
            { 
                         a[i] = a[i+1]; 
 
            } 
n = n-1; display(); 
} 
 

