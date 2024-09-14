#include <stdio.h>
int i,j;
int main() {
   
    char array[5][2] = {
        {'H', 'W'},
        {'E', 'O'},
        {'L', 'R'},
        {'L', 'L'},
        {'O', 'D'}
    };

  
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
