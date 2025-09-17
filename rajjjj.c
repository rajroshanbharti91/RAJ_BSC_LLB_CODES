//program to print till 10th table of n
#include<stdio.h>
void main ()
{
    int n;
    printf("Enter the value of n\n" );
    scanf("%d",&n);
    for( int i=1;i<=n;)
    {
    printf("%d X %d =%d\n",n,i,n*i);
    i++;
}
}
