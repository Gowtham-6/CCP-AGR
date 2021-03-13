#include<stdio.h>
#include<conio.h>
void sum(int *a,int *b,int *t);
void diff(int *a,int *b,int *d);
void prod(int *a,int *b,int *p);
void div(int *a,int *b,int *q);
int main()
{
   int x,y,total,differ,product,quo;
   printf("\nEnter any two values");
   scanf("%d %d",&x,&y);
   sum(&x, &y, &total);
   diff(&x, &y, &differ);
   prod(&x, &y, &product);
   div(&x, &y, &quo);

   printf("\nAddition=%d",total);

   printf("\nSubtraction=%d",differ);

   printf("\nMultiplication=%d",product);

   printf("\nDivision=%d",quo);
}
void sum(int *a,int *b,int *t)
{
    *t=*a+ *b;
}
void diff(int *a,int *b,int *d)
{
  *d=*a-*b;
}
void prod(int *a,int *b,int *p)
{
    *p=(*a) * (*b);
}
void div(int *a,int *b,int *q)
{
    *q=*a/ *b;
}
