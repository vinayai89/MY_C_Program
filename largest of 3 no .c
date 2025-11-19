#include <stdio.h>
    int largest (int a,int b,int c) {
        if(a>=b && a>=c){
            printf("a is largest");
             }
        else if (b>=a && a>=c){
         printf("b is a largest");}
         
         else  { printf ("c is a largest");
         }
    }
     int main()    {
   largest(2,3,4);
        
     }
