#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
int infinito =1;
void signalHandler(int signalNumber){
    printf("signal received %d\n", signalNumber);
    infinito=0;

}

int main(){
    int pid;
    pid = fork();
    if (pid==0){
        printf("soy el hijo\n");
        signal(10,signalHandler);
        while(infinito){
            printf("estoy en el ciclo");
            sleep(1);
        }
        printf("ya salí");
    }else{
        sleep(2);
        printf("soy el padre\n");
        kill(pid,10);
        for(;;);
    }
}
