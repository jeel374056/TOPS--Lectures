#include<stdio.h>

// To check whether the given character is vowel or not

int main()
{
    char c;
    printf("Enter the character ");
    scanf("%c",&c);
    if(c=='A' || c=='I' || c=='O' ||c=='U' ||c=='a' ||c=='e' ||c=='E' ||c=='i' ||c=='o' ||c=='u'){
        printf("Given character is vowel");
    }
    else{
        printf("Given character is not vowel");
    }
return 0;
}