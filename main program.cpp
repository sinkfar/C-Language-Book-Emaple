
#include "function warehouse.h"

int main(void)
{
	while (1)
	{
		int choose;
		BookTopicProgramme();
		printf("输入题号，查看答案\n");
		scanf("%d", &choose);

		int data[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };//31
		int q, a;                                     //31

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
		case 3:
			system("cls");
			Book3();
			break;
		case 4:
			system("cls");
			Book4();
			break;
		case 5:
			system("cls");
			Book5();
			break;
		case 6:
			system("cls");
			Book6();
			break;
		case 7:
			system("cls");
			Book7();
			break;
		case 8:
			system("cls");
			Book8();
			break;
		case 9:
			system("cls");
			Book9();
			break;
		case 10:
			system("cls");
			Book10();
			break;
		case 11:
			system("cls");
			Book11();
			break;
		case 12:
			system("cls");
			Book12();
			break;
		case 13:
			system("cls");
			Book13();
			break;
		case 14:
			system("cls");
			Book14();
			break;
		case 15:
			system("cls");
			Book15();
			break;
		case 16:
			system("cls");
			Book16();
			break;
		case 17:
			system("cls");
			Book17();
			break;
		case 18:
			system("cls");
			Book18();
			break;
		case 19:
			system("cls");
			Book19();
			break;
		case 20:
			system("cls");
			Book20();
			break;
		case 21:
			system("cls");
			Book21();
			break;
		case 22:
			system("cls");
			Book22();
			break;
		case 23:
			system("cls");
			Book23();
			break;
		case 24:
			system("cls");
			Book24();
			break;
		case 25:
			system("cls");
			Book25();
			break;
		case 26:
			system("cls");
			Book26();
			break;
		case 27:
			system("cls");
			Book27();
			break;
		case 28:
			system("cls");
			Book28();
			break;
		case 29:
			system("cls");
			Book29();
			break;
		case 30:
			system("cls");
			Book30();
			break;

		case 31:
			system("cls");

			printf("31.题目(15401)：看书！！\n");
			printf("\n");

			for (q = 0; q < 3; q++)
			{
				for (a = 0; a < 3; a++)
				{
					printf("%3d", data[q][a]);
				}
				printf("\n");
			}

			Book31(data);

			for (q = 0; q < 3; q++)
			{
				for (a = 0; a < 3; a++)
				{
					printf("%3d", data[q][a]);
				}
				printf("\n");
			}

			system("pause");
			system("cls");

			break;

		case 32:
			system("cls");
			Book32();
			break;
		case 33:
			system("cls");
			Book33();
			break;
		case 34:
			system("cls");
			Book34();
			break;
		case 35:
			system("cls");
			Book35();
			break;
		case 36:
			system("cls");
			Book36();
			break;
		case 37:
			system("cls");
			Book37();
			break;
			break;
		}

	}
	system("pause");
	system("cls");

	
}