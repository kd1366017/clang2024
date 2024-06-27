#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, npc,player;
	printf("何を出しますか?\n1: グー 2: チョキ 3: パー");
	scanf("%d", &player);

	switch (player) {
	case 2: printf("プレイヤーはチョキです\n");
		break;
	case 3: printf("プレイヤーはパーです\n");
		break;
	case 1:printf("プレイヤーはグーです\n");
}
	srand(time(0));
	rand();
	npc = rand() % 3 ;
	switch (npc) {
	case 1:printf("コンピューターはチョキです\n");
		break;
	case 2:printf("コンピューターはパーです\n");
		break;
	case 0:printf("コンピューターはグーです\n");
	}
	switch (((player - 1) - npc + 3) % 3) {
	case 0:printf("あいこです\n");
		break;
	case 1:printf("コンピューターの勝ちです\n");
		break;
	case 2:printf("プレイヤーの勝ちです\n");
		break;
	}

}