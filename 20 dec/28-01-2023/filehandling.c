#include<stdio.h>
int main()
{
FILE *fp;
int a=50;
fp=fopen("Demo.txt","a");
fprintf(fp,"WOW %d\n",a);
printf("Successful");
fclose(fp);
return 0;
}
/*
FILE *pointername
FILE *fp;


file open
pointername=fopen("FIlename","Mode");
fp=fopen("demo.txt","r")

read mode(r)- if file exist then i will open it for reading purpose
if file not exist then i will give error.

write mode(w)-if file exist then it will open it for writing purpose but delete all old content ,if file not exist then it will not give error but it will create a new file.

append mode(a)-if file exist then it will open it for append purpose but i will not delete old content , if file not exist then i will also not give error but i will create a new one.

file work


file close
fclose(pointername);
fclose(fp);

*/