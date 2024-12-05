#include <stdio.h>
int main() {
    int i = 16;
    if (i % 15 == 0){
        printf("Love IU");
    }
    else if (i % 3 == 0) {
        printf("Love");
    }
    else if (i % 5 == 0) {
        printf("Love");
    }
    else {
        printf("%d\n", i);
    }
    return 0;
}
