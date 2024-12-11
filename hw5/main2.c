#include <stdio.h>
#include <math.h>

int main() {
    double pi=0.0;
    double term;
    int x=0;
    
    for (x=0;;x++) {
        term=4.0/(2*x+1);
        if (x%2==0) {
            pi+=term;
        } else {
            pi-=term;
        }
        
        if (fabs(pi-3.14159)<0.00001) {
            break;
        }
    }
    
    printf("PI=%.5f\n",pi);
    printf("需要的最小x=%d\n",x);
    
    return 0;
}
