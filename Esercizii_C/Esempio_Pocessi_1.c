#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int pid = fork(); // Crea un nuovo processo

    if (pid > 0)
    {

        printf("Sono il processo padre con PID: %d\n", getpid());
        printf("il pid del figlio è %d\n", pid);
    }
    else if (pid == 0)
    {
        printf("Questo codice è eseguito dal processo figlio con pid %d.\n", getpid());
        printf("Il processo padre ha pid %d\n", getppid());
    }

    return 0;
}