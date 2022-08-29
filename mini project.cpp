#include <stdio.h>
#include <windows.h>
void out();
int main()
{
    //round robin scheduling
    system("cls"); //To Clear Previous Output
    printf("Name - Anshul Katiyar\n");
    printf("SAP ID: 1000014221\n\n" );

    int no_of_process, i, count = 0, sum = 0, quant, wt = 0, tat = 0, at[100], bt[100], temp[100];
    float avg_wt, avg_tat;
    char choice;
    printf("Total number of process in the system: ");
    scanf("%d", &no_of_process);
    int y = no_of_process;

    // Use for loop to enter the details of the process like Arrival time and the Burst Time
    for (i = 0; i < no_of_process; i++)
    {
        printf("\n\nEnter the Arrival Time of Process[%d]:", i + 1); // Accepting the arrival time
        scanf("%d", &at[i]);
        printf("Enter the Burst Time of Process[%d]:", i + 1); // Accepting the Burst time
        scanf("%d", &bt[i]);
        temp[i] = bt[i]; // store the burst time in temp array
    }
    printf("\nEnter the Time Quantum for the process:");
    scanf("%d", &quant);
    printf("\nProcess No \t\tArrival Time\t\t Burst Time \t\t TAT \t\t Waiting Time\t\tCompletion Time \n");
    for (sum = 0, i = 0; y != 0;)
    {
        if (temp[i] <= quant && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if (temp[i] == 0 && count == 1)
        {
            y--; //decrementing the process no.
            printf("\n  P[%d] \t\t\t%d\t\t\t %d\t\t\t %d\t\t\t %d\t\t  %d\n\n", i + 1, at[i], bt[i], sum - at[i], sum - at[i] - bt[i], (sum));
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == no_of_process - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    avg_wt = (wt * 1.0) / no_of_process;   //calculating average waiting time
    avg_tat = (tat * 1.0) / no_of_process; //calculating average turn around time
    printf("\n Average Turn Around Time: %0.2f", avg_wt);
    printf("\n Average Waiting Time: %0.2f", avg_tat);

    printf("\n\nDo You Want To Restart?[Y/n]  ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("\nRestarting This Program Will Clear All It's Previous Data\nDO You Want To Proced?[Y/n] ");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            main(); //calling the main function
            out();  //exit
        }
    }
    out(); //exit
    return 0;
}
void out()
{                  //to print following msg when user choose to exit
    system("cls"); //To clear previous output
    printf("\nThank You For Using This Program\n\n");
    printf("This Program Was Made By ");
    printf("Anshul Katiyar\n\n"); 
    printf("Hit Enter To Exit......");
    fflush(stdin); //To clear buffer
    getchar();     //To hold screen
    system("cls"); //To clear all the previous outputs by this program before exiting
    exit(0);
   
}
