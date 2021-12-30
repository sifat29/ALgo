#include<stdio.h>
#include<stdlib.h>
 void activity(int a[],int b[],int n)
{
    int i=0,j;
    printf("THE  activities are \nA %d\n",i);
    for (j=0 ; j<=n; j++)
    {
        if (a[j]>=b[i])
        {
            printf("A %d\n",j+1);
            i=j;
        }

    }

}

int main ()
{
    int a[] = { 1, 3, 0, 5, 8, 5 };
    int b[] = { 2, 4, 6, 7, 9, 9 };
    int n;
    n= sizeof (a)/sizeof a[0];
    activity(a,b,n);
    return 0;

}
