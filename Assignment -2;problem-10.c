#include <stdio.h>
int main (){
           int n;
           scanf ("%d",&n);
           if(n<2)
           {
               printf("neither prime nor composite ");
               return 0;
           }
           int isprime =1;
           for (int i=2;i<n;i++)
           {
               if(n%i==0){
                isprime=0;
                break;
               }
           }

           if (isprime==1)
           {
               printf ("prime");
           }
           else
           {
               printf ("composite");
           }
           return 0;
           }
