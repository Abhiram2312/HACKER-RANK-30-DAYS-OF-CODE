#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int x;
    double y;
    char z[100];
    scanf("%i",&x);
    scanf("%lf",&y);
    scanf("\n");
    scanf("%[^\n]%*c",z);
    printf("%i\n",x+i);
    printf("%0.1lf\n",y+d);
    printf("%s%s",s,z);
    return 0;
}