#include<stdio.h>

struct Address{
    char city[20];
    char state[20];
    int pincode;
};
union Add{
    char city[20];
    char state[20];
    int pincode;
};

struct Student{
    int no;
    char name[20];
    struct Address adr;
};

int main()
{
    s1;
    scanf("%d %s %s %s %d",&s1.no,&s1.name,&s1.adr.city,&s1.adr.state,&s1.adr.pincode);
    printf("%d %s %s %s %d",s1.no,s1.name,s1.adr.city,s1.adr.state,s1.adr.pincode);

    printf("Sizeof union is %d\n",sizeof(union Add));
    printf("Sizeof structure is %d\n",sizeof(struct Address));

return 0;
}