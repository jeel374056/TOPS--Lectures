// write a program to find the elements of given position from the array.
int main()
{
    int i,n,pos=0,elements;
    int a[5];
    printf("enter the array size :");
    scanf("%d",&n);
    printf("enter the array elemets :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter elements to serch :");
    scanf("%d",&elements);
    for(i=0;i<n;i++)
    {
        if(a[i]==elements)
        {
            printf("%d found at position %d\n",elements,i+1);
        }
    }
    return 0;
}