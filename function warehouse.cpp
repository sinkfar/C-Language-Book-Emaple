
#include "function warehouse.h"

/*
	ģ�壺

	int Book(void)
	{
		printf("2.��Ŀ(01102)������һ��Բ�İ뾶����Բ���ܳ�������С�������λ��\n");
		printf("\n");

		system("pause");
		system("cls");

		return 0;
	}

*/


/*
	������void BookTopicProgramme
	���ܣ���Ŀ��

*/
void BookTopicProgramme()
{
	printf("1.��Ŀ��01101��:���������������ֱ�������ǵĺ͡��������\n");
	printf("\n");
	printf("2.��Ŀ(01102)������һ��Բ�İ뾶����Բ���ܳ�������С�������λ��\n");
	printf("\n");
}


/*
	1.��Ŀ(01101)�����������������ֱ�������ǵĺ͡�������̡�
	
	������int Book1(void)
 
*/
int Book1(void)
{

	int integerbank[4];
	int integer1, integer2;

	printf("1.��Ŀ��01101��:���������������ֱ�������ǵĺ͡��������\n");
	printf("\n");

	printf("�����һ������\n");
	scanf("%d", &integer1);
	printf("����ڶ�������\n");
	scanf("%d", &integer2);

	integerbank[0] = integer1 + integer2;
	integerbank[1] = integer1 - integer2;
	integerbank[2] = integer1 * integer2;
	integerbank[3] = integer1 / integer2;

	printf("�ͣ�%d  �%d  ����%d  �̣�%d\n", integerbank[0], integerbank[1], integerbank[2], integerbank[3]);

	system("pause");
	system("cls");

	return 0;
} 


/*
	2.��Ŀ(01102)������һ��Բ�İ뾶����Բ���ܳ�������С�������λ��

	������int Book2(void)

*/
int Book2(void)
{
	double InputRadius;
	double perimeter;

	printf("2.��Ŀ(01102)������һ��Բ�İ뾶����Բ���ܳ�������С�������λ��\n");
	printf("\n");

	printf("����Բ���ܳ�\n");
	scanf("%lf", &InputRadius);

	perimeter = InputRadius * 3.14;

	printf("�ܳ���%lf\n", perimeter);

	system("pause");
	system("cls");

	return 0;
}

