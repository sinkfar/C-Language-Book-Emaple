
#include "function warehouse.h"

/*
	ģ�壺

	/*
		1.��Ŀ(01101)�����������������ֱ�������ǵĺ͡�������̡�

		������int Book1(void)

	*/
/*
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
	
	printf("3.��Ŀ(02701)��\n");
	printf("  (1)x+a%3  (int)(x+y)%2/4\n");
	printf("     ��x=2.5,a=7,y=4.7\n");
	printf("  (2)(float)(a+b)/2+(int)x%(int)y\n");
	printf("     ��a=2,b=3,x=3.5,y=2.5\n");
	printf("\n");

	printf("4.��Ŀ(02702)���Ӽ����������������������������������\n");
	printf("\n");

	printf("5.��Ŀ(02703)����China���Glmre(�����������)\n");
	printf("\n");

	printf("6.��Ŀ(04701)�����볤���εĳ��Ϳ��󳤷����ܳ�\n");
	printf("\n");

	printf("7.��Ŀ(04702)�����������ַ������ݣ�����ת������Ӧ�������������ǵ�ƽ��ֵ���\n");
	printf("\n");

	printf("8.��Ŀ(04703)����ax2+bx+c=0�ķ��̵ĸ���a��b��c���ɼ������룬��b2-4ab>0\n");
	printf("\n");

	printf("9.��Ŀ(04704)���Ӽ�������һ����λ�����������������˳��\n");
	printf("\n");

	printf("10.��Ŀ(06301)�������ĸ�����a��b��c��d�������ĸ�����С�������\n");
	printf("\n");

	printf("11.��Ŀ(06302)�����������ֱ��ʾ���ӳ������ߵ�����ֵ���жϲ�����������������廹�ǳ�����\n");
	printf("\n");

	printf("12.��Ŀ(06303)������ĳһ���£�������µ�����\n");
	printf("\n");

	printf("13.��Ŀ(06304)��  \n");
	printf("				   x      x < 1\n");
	printf("				y= 2x-1  1<=x<10\n");
	printf("				   3x-11  X>=10\n");
	printf("        ����xֵ�����yֵ\n");
	printf("\n");

	printf("14.��Ŀ(06305)������һ���ַ���������ַ�ΪСд����д������������ת��Ϊ��д��Сд�����䣩\n");
	printf("\n");

	printf("15.��Ŀ(06306)������һ��ѧ���Ŀ��Գɼ������������Ͷ�Ӧ�ĵȼ�\n");
	printf("\n");

	printf("16.��Ŀ(09301)������1��+2��+3��+��������n����ֵ��nֵ�ɼ�������\n");
	printf("\n");

	printf("17.��Ŀ(09302)����ӡˮ�ɻ���\n");
	printf("\n");

	printf("18.��Ŀ(09302)���ж�����ĳ�����Ƿ�Ϊ���������ǣ����yes���������no\n");
	printf("\n");

	printf("20.��Ŀ(09306)�����һ��ͼ��\n");
	printf("\n");

	printf("21.��Ŀ(093707)�����飡��\n");
	printf("\n");

	printf("22.��Ŀ(093708)�����飡��\n");
	printf("\n");

	printf("23.��Ŀ(093709)�����飡��\n");
	printf("\n");

	printf("24.��Ŀ(11201)������ʮ��������һά�����У������С�������±�\n");
	printf("\n");

	printf("25.��Ŀ(11202)����һ�������������\n");
	printf("\n");

	printf("26.��Ŀ(13301)����s=m!+n!+k!,m��n��k���Ӽ������루ֵ��С��7��\n");
	printf("\n");

	printf("27.��Ŀ(11302)���������������������Լ������С������\n");
	printf("\n");

	printf("28.��Ŀ(15401)������3������������ָ�룬����ָ�뷽������С�����˳�����\n");
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

/*
	3.��Ŀ(02701)��
				(1)x+a%3  (int)(x+y)%2/4
				   ��x=2.5,a=7,y=4.7
				(2)(float)(a+b)/2+(int)x%(int)y
				   ��a=2,b=3,x=3.5,y=2.5

	������int Book3(void)

*/
int Book3(void)
{
	printf("3.��Ŀ(02701)��\n");
	printf("  (1)x+a%3  (int)(x+y)%2/4\n");
	printf("     ��x=2.5,a=7,y=4.7\n");
	printf("  (2)(float)(a+b)/2+(int)x%(int)y\n");
	printf("     ��a=2,b=3,x=3.5,y=2.5\n");
	printf("\n");

	double x = 2.5, y = 4.7;
	int a = 7, b = 3;
	int result, result1, result2;

	result = (int)x + a % 3;
	printf("x+a%3=%d\n", result);

	result1 = (int)(x + y) % 2 / 4;
	printf("(int)(x+y)%2/4=%d\n", result1);

	a = 2, x = 3.5, y = 2.5;

	result2 = (int)(x + y) % 2 / 4;
	printf("(float)(a+b)/2+(int)x%(int)y=%d\n", result2);

	system("pause");
	system("cls");

	return 0;
}

/*
	4.��Ŀ(02702)���Ӽ����������������������������������

	������int Book4(void)

*/
int Book4(void)
{
	printf("4.��Ŀ(02702)���Ӽ����������������������������������\n");
	printf("\n");

	int input[3];
	int i, j, temporary;

	for (i = 0; i < 3; i++)
	{
		printf("������������\n");
		scanf("%d", &input[i]);
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (input[i] > input[i + 1])
			{
				temporary = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temporary;
			}
		}
	}
	printf("������Ϊ��%d\n",input[2]);

	system("pause");
	system("cls");

	return 0;
}

/*
	5.��Ŀ(02703)����China���Glmre(�����������)

	������int Book5(void)

*/
int Book5(void)
{
	printf("5.��Ŀ(02703)����China���Glmre(�����������)\n");
	printf("\n");

	char c1='C'+8,c2='h'+8,c3='i'+8,c4='n'+8,c5='a'+8;
	printf("�����%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	

	system("pause");
	system("cls");

	return 0;
}

/*
	6.��Ŀ(04701)�����볤���εĳ��Ϳ��󳤷����ܳ�

	������int Book6(void)

*/
int Book6(void)
{
	printf("6.��Ŀ(04701)�����볤���εĳ��Ϳ��󳤷����ܳ�\n");
	printf("\n");

	int long1,wide;
	int perimeter;

	printf("�����볤���εĳ���\n");
	scanf("%d", &long1);
	printf("�����볤���εĿ�\n");
	scanf("%d", &wide);

	perimeter = long1 * 2 + wide * 2;
	printf("�����ε��ܳ���%d\n",perimeter);

	system("pause");
	system("cls");

	return 0;
}

/*
	7.��Ŀ(04702)�����������ַ������ݣ�����ת������Ӧ�������������ǵ�ƽ��ֵ���

	������int Book7(void)

*/
int Book7(void)
{
	printf("7.��Ŀ(04702)�����������ַ������ݣ�����ת������Ӧ�������������ǵ�ƽ��ֵ���\n");
	printf("\n");

	char date[3];
	int result;
	
	printf("�������ַ���\n");
	scanf("%s", &date);

	result = ((int)date[0] + (int)date[1] + (int)date[2]) / 3;
	printf("ƽ��ֵΪ��%d\n",result);


	system("pause");
	system("cls");

	return 0;
}

/*
	8.��Ŀ(04703)����ax2+bx+c=0�ķ��̵ĸ���a��b��c���ɼ������룬��b2-4ab>0

	������int Book8(void)

*/
int Book8(void)
{
	printf("8.��Ŀ(04703)����ax2+bx+c=0�ķ��̵ĸ���a��b��c���ɼ������룬��b2-4ab>0\n");
	printf("\n");

	int a, b, c;
	int result, result1;

	printf("������a��\n");
	scanf("%d", &a);
	printf("������b��\n");
	scanf("%d", &b);
	printf("������c��\n");
	scanf("%d", &c);

	if (b * b - 4 * a * c > 0)
	{
		result = -(b / a);
		result1 = c / a;
		printf("x1=%d,x2%d\n", result, result1);
	}
	else
	{
		printf("b2-4ab>0������������������\n");
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	9.��Ŀ(04704)���Ӽ�������һ����λ�����������������˳��

	������int Book9(void)

*/
int Book9(void)
{
	printf("9.��Ŀ(04704)���Ӽ�������һ����λ�����������������˳��\n");
	printf("\n");

	int input[3];

	printf("�����룺\n");
	scanf("%d%d%d", &input[0], &input[1], &input[2]);

	printf("����%d%d%d\n", input[2], input[1], input[0]);

	system("pause");
	system("cls");

	return 0;
}

/*
	10.��Ŀ(06301)�������ĸ�����a��b��c��d�������ĸ�����С�������

	������int Book10(void)

*/
int Book10(void)
{
	printf("10.��Ŀ(06301)�������ĸ�����a��b��c��d�������ĸ�����С�������\n");
	printf("\n");

	int input[4];
	int i, j, temporary;

	for (i = 0; i < 4; i++)
	{
		printf("������������\n");
		scanf("%d", &input[i]);
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			if (input[i] > input[i + 1])
			{
				temporary = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temporary;
			}
		}
	}
	printf("a=%d,b=%d,c=%d,d=%d\n", input[0], input[1], input[2], input[3]);

	system("pause");
	system("cls");

	return 0;
}

/*
	11.��Ŀ(06302)�����������ֱ��ʾ���ӳ������ߵ�����ֵ���жϲ�����������������廹�ǳ�����

	������int Book11(void)

*/
int Book11(void)
{
	printf("11.��Ŀ(06302)�����������ֱ��ʾ���ӳ������ߵ�����ֵ���жϲ�����������������廹�ǳ�����\n");
	printf("\n");

	int wide, long1, high;

	printf("���������Ӹߣ�\n");
	scanf("%d", &high);
	printf("���������ӿ�\n");
	scanf("%d", &wide);
	printf("���������Ӹߣ�\n");
	scanf("%d", &long1);

	if (wide = long1 = high)
	{
		printf("������������\n");
	}
	else
	{
		printf("�����ǳ�����\n");
	}

	system("pause");
	system("cls");

	return 0;
}

/*
	12.��Ŀ(06303)������ĳһ���£�������µ�����

	������int Book12(void)

*/
int Book12(void)
{
	printf("12.��Ŀ(06303)������ĳһ���£�������µ�����\n");
	printf("\n");

	int input,input1;
	int DigMonth[7] = { 1,3,5,7,8,10,12 };
	int LittleMonth[4] = { 4,6,9,11 };

	printf("��������\n");
	scanf("%d", &input);
	printf("��������\n");
	scanf("%d", &input1);


	if (((0 == input % 4) && (0 != input % 100)) || (0 == input % 400))
	{
		if (input1 == 2)
		{
			printf("����Ϊ29��\n");
		}
	}
	else
	{
		if (input1 == DigMonth[7])
		{
			printf("����Ϊ31��\n");

		}
		else if (input1 == LittleMonth[4])
		{
			printf("����Ϊ30��\n");

		}
		else if(input1 == 2)
		{
			printf("����Ϊ28��\n");

		}
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	13.��Ŀ(06304)��  
					   x      x < 1
					y= 2x-1  1<=x<10
					   3x-11  X>=10
			����xֵ�����yֵ

	������int Book13(void)

*/
int Book13(void)
{
	printf("13.��Ŀ(06304)��  \n");
	printf("				   x      x < 1\n");
	printf("				y= 2x-1  1<=x<10\n"); 
	printf("				   3x-11  X>=10\n");
	printf("        ����xֵ�����yֵ\n");
	printf("\n");

	int InputX;
	int open1;
	printf("������X:\n");
	scanf("%d", &InputX);

	if (InputX < 1)
	{
		open1 = InputX;
	}
	else if (1 <= InputX < 10)
	{
		open1 = 2*InputX-1;
	}	
	else if (InputX >= 10)
	{
		open1 = 3*InputX-11;
	}
	printf("y=\n", open1);


	system("pause");
	system("cls");

	return 0;
}

/*
	14.��Ŀ(06305)������һ���ַ���������ַ�ΪСд����д������������ת��Ϊ��д��Сд�����䣩

	������int Book14(void)

*/
int Book14(void)
{
	printf("14.��Ŀ(06305)������һ���ַ���������ַ�ΪСд����д������������ת��Ϊ��д��Сд�����䣩\n");
	printf("\n");

	char Input;

	printf("������һ���ַ�\n");
	scanf("%s", &Input);

	if (65 <= (int)Input <= 90)
	{
		Input -= 32;
		printf("���%c\n", Input);
	}
	else if (97 <= (int)Input <= 122)
	{
		Input += 32;
		printf("���%c\n", Input);
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	15.��Ŀ(06306)������һ��ѧ���Ŀ��Գɼ������������Ͷ�Ӧ�ĵȼ�

	������int Book15(void)

*/
int Book15(void)
{
	printf("15.��Ŀ(06306)������һ��ѧ���Ŀ��Գɼ������������Ͷ�Ӧ�ĵȼ�\n");
	printf("\n");

	int Input;

	printf("������ѧ���ĳɼ���");
	scanf("%d", &Input);

	if (90 <= Input <= 100)printf("�ɼ�Ϊ��%d , �ȼ�ΪA\n", Input);
	if (90 < Input <= 80)printf("�ɼ�Ϊ��%d , �ȼ�ΪB\n", Input);
	if (80 < Input <= 70)printf("�ɼ�Ϊ��%d , �ȼ�ΪC\n", Input);
	if (70 < Input <= 60)printf("�ɼ�Ϊ��%d , �ȼ�ΪD\n", Input);
	if (0 < Input < 60)printf("�ɼ�Ϊ��%d , �ȼ�ΪF\n", Input);

	system("pause");
	system("cls");

	return 0;
}

/*
	16.��Ŀ(09301)������1��+2��+3��+��������n����ֵ��nֵ�ɼ�������

	������int Book16(void)

*/
int Book16(void)
{
	printf("16.��Ŀ(09301)������1��+2��+3��+��������n����ֵ��nֵ�ɼ�������\n");
	printf("\n");

	int n,open=0,open2;
	int i,j,m=1;

	printf("������nֵ\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; i <= m; j++)
		{
			open2 = m * m;
		}
		open = open + n;
		m++;
	}
	printf("���Ϊ��\n",open);


	system("pause");
	system("cls");

	return 0;
}

/*
	17.��Ŀ(09302)����ӡˮ�ɻ���

	������int Book17(void)

*/
int Book17(void)
{
	printf("17.��Ŀ(09302)����ӡˮ�ɻ���\n");
	printf("\n");

	int open, open1, open2, open3;
	int q, a, z;

	for (q = 1 ; q < 9; q++)
	{
		open = q * q * q;
		for (a = 1; a < 9; a++)
		{
			open1 = a * a * a;
			for (z = 1; z < 9; z++)
			{
				open2 = z * z * z;
				open3 = open + open1 + open2;
				printf("%d\n", open3);
			}
		}
	}

	system("pause");
	system("cls");

	return 0;
}

/*
	18.��Ŀ(09302)���ж�����ĳ�����Ƿ�Ϊ���������ǣ����yes���������no

	������int Book18(void)

*/
int Book18(void)
{
	printf("18.��Ŀ(09302)���ж�����ĳ�����Ƿ�Ϊ���������ǣ����yes���������no\n");
	printf("\n");

	int Input;
	int i;

	printf("������һ������\n");
	scanf("%d", &Input);

	for (i = 2; i <= Input; i++)
	{
		if (Input / Input - 1 == 0)
		{
			printf("NO\n");
			break;
		}
	}

	system("pause");
	system("cls");

	return 0;
}

/*
	19.��Ŀ(09305)���������ڼ��ĵ�һ��Ӣ����ĸ���ж�һ�����ڼ��������һ����ĸһ����������жϵڶ���Ӣ����ĸ

	������int Book19(void)

*/
int Book19(void)
{
	printf("19.��Ŀ(09305)���������ڼ��ĵ�һ��Ӣ����ĸ���ж�һ�����ڼ��������һ����ĸһ����������жϵڶ���Ӣ����ĸ\n");
	printf("\n");

	system("pause");
	system("cls");

	return 0;
}

/*
	20.��Ŀ(09306)�����һ��ͼ��

	������int Book20(void)

*/
int Book20(void)
{
	printf("20.��Ŀ(09306)�����һ��ͼ��\n");
	printf("\n");


	int q,j, w,a=6;
	

	for (j = 0; j <= 6; j++)
	{
		for (w = 0; w < j + 1; w++)
		{
			printf(" ");
		}
		
		for (q=1;q<=a;q++)
		{
			printf("*");	
			if (q == a )
			{
				printf("\n");
			}
		}
		a--;
	}
	


	system("pause");
	system("cls");

	return 0;
}

/*
	21.��Ŀ(093707)�����飡��

	������int Book21(void)

*/
int Book21(void)
{
	printf("21.��Ŀ(093707)�����飡��\n");
	printf("\n");

	int repeat;
	double open;

	printf("������һ������\n");
	scanf("%d", &repeat);

	if(0<repeat<10)open = 1 + 1 / 2 + 1 / 3 + 1 / (double)repeat;

	printf("�����%lf\n",open);


	system("pause");
	system("cls");

	return 0;
}

/*
	22.��Ŀ(093708)�����飡��

	������int Book22(void)

*/
int Book22(void)
{
	printf("22.��Ŀ(093708)�����飡��\n");
	printf("\n");

	int Input;
	int i;

	printf("������һ������\n");
	scanf("%d", &Input);

	for (i = 2; i <= Input; i++)
	{
		if (Input / Input - 1 == 0)
		{
			printf("NO\n");
			break;
		}
	}

	system("pause");
	system("cls");

	return 0;
}

/*
	23.��Ŀ(093709)�����飡��

	������int Book23(void)

*/
int Book23(void)
{
	printf("23.��Ŀ(093709)�����飡��\n");
	printf("\n");
	
	int q, a, z;
	
	int e = 5,e1=5, d = 6, d1 = 6, c = 7,c1 = 7;
	int w = 0, s = 0, x = 0;

	for (q = 0; q <= 105; q++)
	{
		
		if (q == e * 6)e+=5;
		else if (q == e1 * 7)e1+=5;
		else w++;
	}

	for (a = 0; a <= 105; a++)
	{
		if (a == d * 5&&q<=105)d += 6;
		else if (q == d1 * 7)d1 += 6;
		else s++;
	}

	for (z = 0; z <= 147; z++)
	{
		if (z == c * 5 && q <= 105)c += 7;
		else if (q == c1 * 6)c1 += 7;
		else x++;
	}

	int open;
	open = w / 5 + s / 6 + x / 7;

	printf("һ����%d\n", open);


	system("pause");
	system("cls");

	return 0;
}

/*
	24.��Ŀ(11201)������ʮ��������һά�����У������С�������±�

	������int Book24(void)

*/
int Book24(void)
{
	printf("24.��Ŀ(11201)������ʮ��������һά�����У������С�������±�\n");
	printf("\n");

	int Input[10],j,i;

	printf("������ʮ����\n");
	for (j = 0; j <= 9; j++)
	{
		scanf("%d", &Input[j]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			if (Input[i] < Input[i + 1])
			{
				printf("%d %d", Input[i], i);
			}
		}
	}
	
	system("pause");
	system("cls");

	return 0;
}

/*
	25.��Ŀ(11202)����һ�������������

	������int Book25(void)

*/
int Book25(void)
{
	printf("25.��Ŀ(11202)����һ�������������\n");
	printf("\n");

	int Input[10] = { 1,2,3,4,5,6,7,8,9,10 },i;

	for (i = 9; i <= 0; i++)printf("%d ", Input[i]);

	system("pause");
	system("cls");

	return 0;
}

/*
	26.��Ŀ(13301)����s=m!+n!+k!,m��n��k���Ӽ������루ֵ��С��7��

	������int Book26(void)

*/
int Book26(void)
{
	printf("26.��Ŀ(13301)����s=m!+n!+k!,m��n��k���Ӽ������루ֵ��С��7��\n");
	printf("\n");

	int s, m, n, k;
	int w;
	int open[4] = {};

	printf("������m:\n");
	scanf("%d", &m);
	printf("������n:\n");
	scanf("%d", &n);
	printf("������m:\n");
	scanf("%d", &k);

	for (w = 1; w <= m; w++)
	{
		open[0] = w * w;
	}
	for (w = 1; w <= n; w++)
	{
		open[1] = w * w;
	}
	for (w = 1; w <= k; w++)
	{
		open[2] = w * w;
	}

	s = open[0] + open[1] + open[2];
	printf("���=%d\n", s);

	system("pause");
	system("cls");

	return 0;
}

/*
	27.��Ŀ(11302)���������������������Լ������С������

	������int Book27(void)

*/
int Book27(void)
{
	printf("27.��Ŀ(11302)���������������������Լ������С������\n");
	printf("\n");

	int Input1, Input2;
	int open1,open2;

	printf("�������һ����\n");
	scanf("%d", &Input1);
	printf("������ڶ�����\n");
	scanf("%d", &Input2);

	open1 = Input1 % Input2;
	while (open1)
	{
		Input1 = Input2;
		Input2 = open1;
		open1 = Input1 % Input2;
	}
	printf("���Լ��Ϊ��%d\n", open1);

	open2= Input1* Input2;
	while (Input1 != Input2)
	{
		if (Input1 > Input2)Input1 = Input1 - Input2;
		if (Input1 < Input2)Input2 = Input2 - Input1;
	}

	printf("��С������Ϊ��%d\n", open2);


	system("pause");
	system("cls");

	return 0;
}

/*
	28.��Ŀ(15401)������3������������ָ�룬����ָ�뷽������С�����˳�����

	������int Book28(void)

*/
int Book28(void)
{
	printf("28.��Ŀ(15401)������3������������ָ�룬����ָ�뷽������С�����˳�����\n");
	printf("\n");

	int q, a, z,i;
	int* w, * s, * x;

	printf("����������\n"); scanf("%d", &q);
	printf("����������\n"); scanf("%d", &a);
	printf("����������\n"); scanf("%d", &z);

	w=&q, s=&a, x=&z;

	if (*w > *s)
	{
		i = *w;
		*w = *s;
		*s = i;
	}
	if (*w > *x)
	{
		i = *w;
		*w = *x;
		*x = i;
	}
	if (*s > *x)
	{
		i = *s;
		*s = *x;
		*x = i;
	}

	printf("˳��Ϊ��%d %d %d \n", *w, *s, *x);

	system("pause");
	system("cls");

	return 0;
}

/*
	29.��Ŀ(15402)�����飡����

	������int Book29(void)

*/
int Book29(void)
{
	printf("29.��Ŀ(15402)�����飡����\n");
	printf("\n");

	int Input[10];
	int* open[10];
	int i,q;

	for (i = 0; i < 9; i++)
	{
		printf("����������\n");
		scanf("%d", &Input[i]);
		open[i] = &Input[i];
	}

	for (i = 0; i < 9; i++)
	{
		if(i==Input[10])


	}



	system("pause");
	system("cls");

	return 0;
}
