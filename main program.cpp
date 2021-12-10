
#include "function warehouse.h"

int main(void)
{
	int choose;
	BookTopicProgramme();
	printf("输入题号，查看答案\n");
	scanf("%d", &choose);
	switch (choose)
	{
	case 1:
		system("cls");
		Book1();
		break;
	case 2:
		system("cls");
		Book2();
		break;
	}
}