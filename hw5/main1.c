#include <stdio.h>

int main() {
    int n=7;
    
    for (int i=1;i<=n;i++) {
        int j=1;
        while (j<=n+i-1) {
            if (j<=n-i) {
                printf(" ");
            } else if (j<=n-i+i){
                printf("%d ",i);
            }
            j++;
        }
        printf("\n");
    }
    
    return 0;
}
