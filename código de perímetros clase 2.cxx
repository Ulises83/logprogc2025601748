#include <stdio.h> 
#include <math.h>
int main()
{
    float a,b,c,d,pt,at;
    a=7;
    b=7;
    c=7;
    d=7;
    pt= a+b+c+d+ sqrt(pow(b,2)+ pow (a,2) +pow (c,2) + pow (d,2) ) ;
    at= b*a/4;
    printf("el area total es %f\n", at); 
    printf("el perimetro total es %f\n",pt);
    return 0;
}

	




