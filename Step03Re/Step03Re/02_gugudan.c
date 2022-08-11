#include <stdio.h>

int main(void) {
	int dan, i=1;
	
	printf("╢э ют╥б : ");
	scanf("%d", &dan);

	while (i < 10) {
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}