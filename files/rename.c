#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char *file1 = argv[1];
    char *newName = argv[2];
    char *pwd = getcwd(NULL, 0);
    char path1[strlen(file1)+strlen(pwd)+2];


    sprintf(path1, "%s/%s", pwd, file1);

    printf("deleted -> %s\n", path1);
    link(path1,newName);
    unlink(path1);

    
}