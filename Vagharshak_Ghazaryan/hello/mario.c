#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int k;
    int x;
    do{
       x = get_int("Height: ");
        }
           while(x > 8 || x < 1);
for (int i = 1; i <= x; i++){
  for (k = x - 1; k >= i; k--){
  printf(" ");   
    }
  for (int j = x - k; j <= x; j++)
      {
 printf("#");
          
   }
printf("  ");
 for(int l = x - i; l < x; l++){
           printf("#");
          }
    
  printf("\n");
  }
}

