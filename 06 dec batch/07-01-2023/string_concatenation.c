#include <stdio.h>
#include <string.h>
int main()
{
    char name[20] = "Rajat ";
    char surname[20] = "Sharma";
    // strcat(name, surname);
    strcat(surname, name);
    printf("name=%s\nsurname=%s", name, surname);

    return 0;
}
/*
strcat(jissme jodna hai,jisse jodna hai)


*/