#include <stdio.h>
#include<stdlib.h>
int main()
{

    char command[100];
    #ifdef _WIN32
    snprintf(command,sizeof(command),"print %s","Demo.txt");
    #endif
    system(command);
    printf("done");
    return 0;
}
