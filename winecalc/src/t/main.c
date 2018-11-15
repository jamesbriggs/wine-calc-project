#include <stdio.h>
#include <float.h>
#include <math.h>

int main(int argc, char **argv)
{
 long double ld;
 double d;
 float f;
 long int l;
 int i;
 char n;
 double ee = 1.0;

 printf("Long double max: %.32Lg\n", LDBL_MAX );
 printf("Double max: %.32g\n",       DBL_MAX);
 printf("Float max: %.32e\n",        FLT_MAX);
 printf("Long double max: %.*Lg\n",  LDBL_DIG,LDBL_MAX );
 printf("Double max: %.*g\n",        DBL_DIG, DBL_MAX);
 printf("Float max: %.*e\n",         FLT_DIG, FLT_MAX);
 printf("e %.64g\n", exp(ee));

 printf("sizeof(long double) = %d\n",sizeof(ld));
 printf("sizeof(double)      = %d\n",sizeof(d));
 printf("sizeof(float)       = %d\n",sizeof(f));
 printf("sizeof(long)        = %d\n",sizeof(l));
 printf("sizeof(int)         = %d\n",sizeof(i));
 printf("sizeof(char)        = %d\n",sizeof(n));

 return 0;
}
