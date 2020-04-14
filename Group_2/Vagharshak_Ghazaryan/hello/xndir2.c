#include <cs50.h>
#include <stdio.h>

int main(void)
{
   
    int x;
    for(int i = 2; i <= 100; i++){
        int Parz = 1;
        for(x = 2; x < i; x++){
           if(i % x == 0){
               Parz = 0;
           }
        }
              if(Parz == 1 ){
                  printf("%i\n", i);
              }      
                        
                  
    
    }
}
