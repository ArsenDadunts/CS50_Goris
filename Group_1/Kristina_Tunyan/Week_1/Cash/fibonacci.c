#include<stdio.h>
 int main(void)
     int n = 10
     int a = 1, b = 2, c = 1 + 2, i
     printf("Enter number"\n;)
  	for (i = 3; i <= n; i++) {
		c = a + b;
		printf("%i ", c);
		a = b;
		b = c;
	}
	return 0;
}