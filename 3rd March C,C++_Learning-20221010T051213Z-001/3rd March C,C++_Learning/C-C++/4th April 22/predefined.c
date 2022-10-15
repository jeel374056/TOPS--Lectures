#include <stdio.h>

int main()
{
    printf("Number of current line is %d\n", __LINE__);
    printf("Name of the current file is %s\n", __FILE__);
    printf("Time of the current file is %s\n", __TIME__);
    printf("Date of the current file is %s\n", __DATE__);
  
    return 0;
}