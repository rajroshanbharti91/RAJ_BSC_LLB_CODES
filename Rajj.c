//program to print first n natural number
#include<stdio.h>
void main ()
{
    int n,sum=0;
    printf("Enter the value of n\n" );
    scanf("%d",&n);
    for( int i=1;i<=n;)
    {
        sum=sum+i;
        i++;
    }
        printf("%d\n",sum);



}
