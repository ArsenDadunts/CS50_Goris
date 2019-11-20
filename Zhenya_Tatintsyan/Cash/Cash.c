#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int coins=0;
    float f;
      do {
        f = get_float("Change owed: ");
    } while (f < 0);

    int change = round(f * 100);
    while (change >= 25){
        change = change - 25;
        coins++;
    }
    while (change >= 10){
        change = change - 10;
        coins++;
    } while (change >= 5){
        change -= 5;
        coins++;
    }
    while (change >= 1){
        change -= 1;
        coins++;
    }
    printf("%i\n", coins);
}
