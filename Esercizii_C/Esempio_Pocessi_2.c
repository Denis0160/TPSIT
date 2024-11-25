#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int p1=fork();
    if (p1==0)
    {
        printf("Sono il processo figlio con PID: %d\n",getpid());
        printf("\nMio padre ha PID %d \n",getppid());
        

        /* code */
    }
    


    return 0;
}