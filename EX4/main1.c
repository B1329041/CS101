#include <stdio.h>

int main() {
    int n=7;
    int spc=n;
    for (int i=1;i<=7;++i) {
        for (int k=1;k<=n+1;++k) {
            if (k<=spc) {
                printf(" ");
            }
            else {
                printf("%d ",i);
            }
        }
        printf("\n");
        --spc;
    }
    return 0;
}
