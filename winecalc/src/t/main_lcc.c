#include <math.h>
#include <stdio.h>
#include <qfloat.h>
int main(void)
{
        printf("%.100qe\n",erfcq(20/sqrtq(2.0q)));
        return 0;
}