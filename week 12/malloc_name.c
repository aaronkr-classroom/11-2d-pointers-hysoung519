//malloc_name.c
#include <stdio.h>
#include <malloc.h>

int main()
{
	char* p_name;

	//20 바이트의 메모리를 동적 할당
	p_name = (char*)malloc(20);
	if (p_name != NULL) {//메모리 할당 실패
		while (1) {
			printf("Enter your name: >>");

			gets(p_name);

			if (p_name == "Quit" || p_name == "Q") break;
		

				printf("Hi ~~ %s~\n", p_name);

		}
	}
	else{ //메모리 할당에 실패 ㅜㅜ
		printf("Error: Memory allocafion error!");

		//포인터 변수 p_name에 동적 할당된 메모리를 해제!!!
		free(p_name);
	}
}