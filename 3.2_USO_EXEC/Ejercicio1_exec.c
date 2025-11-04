#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int ejecutarNuevoProc(char *programa, char *arg1, char *arg2);

int main() {
    char *programa = "/bin/ls";  
    char *arg1 = "ls";
    char *arg2 = "-l";

  
    int pid = ejecutarNuevoProc(programa, arg1, arg2);


    wait(NULL);

    fprintf(stdout, "El proceso hijo con PID %d ha terminado.\n", pid);
    return 0;
}

int ejecutarNuevoProc(char *programa, char *arg1, char *arg2) {
    int pid = fork();

    switch (pid) {
        case -1:
            fprintf(stderr, "Error: no se pudo crear el proceso.\n");
            exit(EXIT_FAILURE);

        case 0:  
           
            execl(programa, arg1, arg2, (char *)NULL);

            
            fprintf(stderr, "Error al ejecutar execl.\n");
            exit(EXIT_FAILURE);

        default: 
            return pid;
    }
}
