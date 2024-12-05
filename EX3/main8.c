#include <stdio.h>
int main() {
    int x = -9;
    int y = 8;
    int z = 2;
    if (x < 0) {
        int sum = (x*-1)*100 + y*10 + z;
        printf("%d", sum*-1);
    ｝
    else {
        printf("%d", x*100 + y*10 + z);
    }
    return 0;
｝
