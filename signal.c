#include <signal.h>
#include <stdio.h>
#include <unistd.h>


void processSignal(int n){
    printf("recibi señal %d\n", n);
}

void newProcessSignal(int n){
    printf("No me puedes matar\n");
}

int main(){
    signal(10, processSignal);
    signal(15, newProcessSignal);
    while(1){
        sleep(3);
        printf("trabajando\n");
    }
    return 1;
}