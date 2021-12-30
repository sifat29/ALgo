#include<stdio.h>
#define SIZE 1000
#include<time.h>
void insertionsort(int a[],int n)
{
    int i,j,key;
    for (i=1;i<=n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void printArray(int a[],int n)
{
   int i;
   for (i=0;i<n;i++)
       printf("%d ", a[i]);
   printf("\n");
}
int main()
{
    clock_t begin, end;
    int a[SIZE],n,i;
    printf("Enter the array size you want\n");
    scanf("%d",&n);
    printf("the input number are\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  begin = clock();
     insertionsort(a,n);
  end = clock();
     printArray(a,n);
      printf ("the execution time is %f",(double)(end - begin) * 1000.0 / CLOCKS_PER_SEC );
     return 0;
}
