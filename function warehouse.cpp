
#include "function warehouse.h"

/*
	模板：

	int Book(void)
	{
		printf("2.题目(01102)：输入一个圆的半径，求圆的周长（保留小数点后两位）\n");
		printf("\n");

		system("pause");
		system("cls");

		return 0;
	}

*/


/*
	函数：void BookTopicProgramme
	功能：题目表单

*/
void BookTopicProgramme()
{
	printf("1.题目（01101）:输入两个整数，分别计算它们的和、差、积、商\n");
	printf("\n");
	printf("2.题目(01102)：输入一个圆的半径，求圆的周长（保留小数点后两位）\n");
	printf("\n");
}


/*
	1.题目(01101)：输入两个整数，分别计算它们的和、差、积、商。
	
	函数：int Book1(void)
 
*/
int Book1(void)
{

	int integerbank[4];
	int integer1, integer2;

	printf("1.题目（01101）:输入两个整数，分别计算它们的和、差、积、商\n");
	printf("\n");

	printf("输入第一个整数\n");
	scanf("%d", &integer1);
	printf("输入第二个整数\n");
	scanf("%d", &integer2);

	integerbank[0] = integer1 + integer2;
	integerbank[1] = integer1 - integer2;
	integerbank[2] = integer1 * integer2;
	integerbank[3] = integer1 / integer2;

	printf("和：%d  差：%d  积：%d  商：%d\n", integerbank[0], integerbank[1], integerbank[2], integerbank[3]);

	system("pause");
	system("cls");

	return 0;
} 


/*
	2.题目(01102)：输入一个圆的半径，求圆的周长（保留小数点后两位）

	函数：int Book2(void)

*/
int Book2(void)
{
	double InputRadius;
	double perimeter;

	printf("2.题目(01102)：输入一个圆的半径，求圆的周长（保留小数点后两位）\n");
	printf("\n");

	printf("输入圆的周长\n");
	scanf("%lf", &InputRadius);

	perimeter = InputRadius * 3.14;

	printf("周长：%lf\n", perimeter);

	system("pause");
	system("cls");

	return 0;
}

