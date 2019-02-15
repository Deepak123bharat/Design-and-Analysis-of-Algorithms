#include<stdio.h>
#include<stdio.h>
int a[1000];
int max, min;

void max_min(int f, int l)
{
 int max1, min1, mid;
 
 if(f==l)
 {
  max = min = a[f];
 }


else if(f == l-1)
  {
   if(a[f] <a[l])
   {
    max = a[l];
    min = a[f];
   }
   else
   {
    max = a[f];
    min = a[l];
   }
  } 
  
  else
  {
   mid = (f+l)/2;
   max_min(f, mid);
   max1 = max; min1 = min;
   max_min(mid+1, l);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }
  
 }

int main ()
{
 int  n,i;
 printf ("enter the lenght of array ");
 scanf ("%d",&n);
 printf ("\nenter array elements\n");
 for (i=1;i<=n;i++)
  scanf ("%d",&a[i]);

 max = a[0];
 min = a[0];
 max_min(1, n);
 printf ("min =  %d\n", min);
 printf ("max = %d\n", max);
 return 0;
}
