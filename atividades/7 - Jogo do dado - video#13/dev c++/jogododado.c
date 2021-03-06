#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
   Jogo do Dado
   @author Thiago Caramigo
*/

int main(int argc, char *argv[]) {
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face: %d\n", rand()%6 + 1);
	system("pause");
	return 0;
}
