#include <stdio.h>
 
int main() { 
    double raio, area;
    scanf("%lf\n", &raio);

    area = 3.14159 * raio * raio;

    printf("A=%4.f\n", area);   
 
    return 0;
}
