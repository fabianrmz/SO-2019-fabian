#include <stdio.h>
<<<<<<< HEAD
int main(){
    printf("hola mundo!");
=======
#include "./libhello.h"
int main(int argc, char **argv){
    int i = 0;
    for(i = 1; i < argc; i++){
        printHello(argv[i]);
    }
>>>>>>> 4053514a85000e82698de4571c475ffd0770105e
    return 0;
}