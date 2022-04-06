#include <stdio.h>

int main () {

    int y, x;

    for(y = 2; y <=10;){

        for (x=1;x <=10;x++){

            printf("%ix%i=%i\n", y, x, y*x);
        }

        y += 2;
    }



return 0;
}
