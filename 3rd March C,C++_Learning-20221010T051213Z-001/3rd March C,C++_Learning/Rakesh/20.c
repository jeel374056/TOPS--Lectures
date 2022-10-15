/* write a program to enter a ten elements using array and find out the to count
 the total number of odd and even numbers */
 #include<stdio.h>
 int main()
 {
     int n,i,odd=0,even=0,a[n];
    printf("enter the number of array : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         if(a[i] %2 == 1)
             odd++;
         else
             even++;
         printf("odd : %d\n",odd);
         printf("even : %d\n",even);
     } 
     return 0;
 }