#include <stdio.h> 
#include <math.h>
int main() 
{ 
float l,at,pt,h; 
l=7;
h = sqrt (pow(l,2)+ pow(l,2));
pt=8*l +3*h; 
at= 3*l*l/2 + l*l + 2*l*l; 
printf("el area total es: %.0f\n", at); 
printf("el perimetro total es: %.0f\n", pt); 
return 0;
 }
 