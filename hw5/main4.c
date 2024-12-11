#include <stdio.h>

int main() {
    int i = 12345;
    
    int len = 0, num = i;
    while (num > 0) {
        num /= 10;
        len++;
    }

    if (len >= 4) {
        int thousand = (i / 1000) % 10;
        int ones = i % 10;

        int middle = (i % 1000) / 10;

        int new_number = ones * 1000 + middle * 10 + thousand;
        printf("%d\n", new_number);
    } 
      
    else if (len == 3) {
        int hundred = (i / 100) % 10;
        int ones = i % 10;
        int tens = (i / 10) % 10;

        int new_number = ones * 1000 + hundred * 100 + tens * 10;
        printf("%d\n", new_number);
    }
      
    else if (len == 2) {
        int tens = i / 10;
        int ones = i % 10;

        int new_number = ones * 1000 + tens * 100;
        printf("%d\n", new_number);
    }
      
    else if (len == 1) {
        int ones = i;
        int new_number = ones * 1000;
        printf("%d\n", new_number);
    }

    return 0;
}
