#include<stdio.h>
#include<math.h>

int main() {
    int a=10;
    int b= a++;
    int c=++a;
    printf("%i\n",a);
    printf("%i\n",b);
    printf("%i",c);

    return 0;
}