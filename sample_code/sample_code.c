// sample_code.c : アプリケーションのエントリ ポイントを定義します。
//

#include <stdio.h>

int main()
{
	int i1;
	int ans_xst, ans_yst;
	char c;


	for (i1 = 1; i1 < 10; i1++)					//楯列
	{
		ans_xst = (int)((i1 - 1) % 3) * 3 + 1;
		ans_yst = (int)((i1 - 1) / 3) * 3 + 1;

		printf("i1 = %d , ans xst = %d , ans_yst=%d \n", i1, ans_xst, ans_yst);
	}
	printf("type Key Quit");

	scanf_s("%c", &c);



}

