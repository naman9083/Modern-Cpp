#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
    int id = fork();
    if(id==0){
        printf("Child thread\n");
    }
    
    return 0;
}