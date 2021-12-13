
#include "function warehouse.h"

/*
	模板：

	/*
		1.题目(01101)：输入两个整数，分别计算它们的和、差、积、商。

		函数：int Book1(void)

	*/
/*
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
	
	printf("3.题目(02701)：\n");
	printf("  (1)x+a%3  (int)(x+y)%2/4\n");
	printf("     设x=2.5,a=7,y=4.7\n");
	printf("  (2)(float)(a+b)/2+(int)x%(int)y\n");
	printf("     设a=2,b=3,x=3.5,y=2.5\n");
	printf("\n");

	printf("4.题目(02702)：从键盘输入三个整数，输出这三个数最大的数\n");
	printf("\n");

	printf("5.题目(02703)：将China译成Glmre(利用五个变量)\n");
	printf("\n");

	printf("6.题目(04701)：输入长方形的长和宽，求长方形周长\n");
	printf("\n");

	printf("7.题目(04702)：输入三个字符型数据，将其转换成相应的整数后，求它们的平均值输出\n");
	printf("\n");

	printf("8.题目(04703)：求ax2+bx+c=0的方程的根，a、b、c、由键盘输入，设b2-4ab>0\n");
	printf("\n");

	printf("9.题目(04704)：从键盘输入一个三位整数，输出该数的逆顺序\n");
	printf("\n");

	printf("10.题目(06301)：输入四个整数a、b、c、d，把这四个数由小到大输出\n");
	printf("\n");

	printf("11.题目(06302)：读入三个分别表示箱子长、宽、高的整数值，判断并输出该箱子是立方体还是长方体\n");
	printf("\n");

	printf("12.题目(06303)：输入某一年月，输出该月的天数\n");
	printf("\n");

	printf("13.题目(06304)：  \n");
	printf("				   x      x < 1\n");
	printf("				y= 2x-1  1<=x<10\n");
	printf("				   3x-11  X>=10\n");
	printf("        输入x值，输出y值\n");
	printf("\n");

	printf("14.题目(06305)：输入一个字符，如果该字符为小写（大写、其他），这转换为大写（小写、不变）\n");
	printf("\n");

	printf("15.题目(06306)：输入一个学生的考试成绩，输出其分数和对应的等级\n");
	printf("\n");

	printf("16.题目(09301)：计算1！+2！+3！+····n！的值，n值由键盘输入\n");
	printf("\n");

	printf("17.题目(09302)：打印水仙花数\n");
	printf("\n");

	printf("18.题目(09302)：判断输入某个数是否为素数。若是，输出yes，否则输出no\n");
	printf("\n");

	printf("20.题目(09306)：输出一个图案\n");
	printf("\n");

	printf("21.题目(093707)：看书！！\n");
	printf("\n");

	printf("22.题目(093708)：看书！！\n");
	printf("\n");

	printf("23.题目(093709)：看书！！\n");
	printf("\n");

	printf("24.题目(11201)：输入十个数放在一维数组中，输出最小数及其下表\n");
	printf("\n");

	printf("25.题目(11202)：将一个数组逆序输出\n");
	printf("\n");

	printf("26.题目(13301)：求s=m!+n!+k!,m、n、k、从键盘输入（值均小余7）\n");
	printf("\n");

	printf("27.题目(11302)：输入两个整数，求最大公约数和最小公倍数\n");
	printf("\n");

	printf("28.题目(15401)：定义3个整数及整数指针，仅用指针方法按由小到大的顺序输出\n");
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

/*
	3.题目(02701)：
				(1)x+a%3  (int)(x+y)%2/4
				   设x=2.5,a=7,y=4.7
				(2)(float)(a+b)/2+(int)x%(int)y
				   设a=2,b=3,x=3.5,y=2.5

	函数：int Book3(void)

*/
int Book3(void)
{
	printf("3.题目(02701)：\n");
	printf("  (1)x+a%3  (int)(x+y)%2/4\n");
	printf("     设x=2.5,a=7,y=4.7\n");
	printf("  (2)(float)(a+b)/2+(int)x%(int)y\n");
	printf("     设a=2,b=3,x=3.5,y=2.5\n");
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
	4.题目(02702)：从键盘输入三个整数，输出这三个数最大的数

	函数：int Book4(void)

*/
int Book4(void)
{
	printf("4.题目(02702)：从键盘输入三个整数，输出这三个数最大的数\n");
	printf("\n");

	int input[3];
	int i, j, temporary;

	for (i = 0; i < 3; i++)
	{
		printf("请输入整数：\n");
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
	printf("最大的数为：%d\n",input[2]);

	system("pause");
	system("cls");

	return 0;
}

/*
	5.题目(02703)：将China译成Glmre(利用五个变量)

	函数：int Book5(void)

*/
int Book5(void)
{
	printf("5.题目(02703)：将China译成Glmre(利用五个变量)\n");
	printf("\n");

	char c1='C'+8,c2='h'+8,c3='i'+8,c4='n'+8,c5='a'+8;
	printf("结果：%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	

	system("pause");
	system("cls");

	return 0;
}

/*
	6.题目(04701)：输入长方形的长和宽，求长方形周长

	函数：int Book6(void)

*/
int Book6(void)
{
	printf("6.题目(04701)：输入长方形的长和宽，求长方形周长\n");
	printf("\n");

	int long1,wide;
	int perimeter;

	printf("请输入长方形的长：\n");
	scanf("%d", &long1);
	printf("请输入长方形的宽：\n");
	scanf("%d", &wide);

	perimeter = long1 * 2 + wide * 2;
	printf("长方形的周长：%d\n",perimeter);

	system("pause");
	system("cls");

	return 0;
}

/*
	7.题目(04702)：输入三个字符型数据，将其转换成相应的整数后，求它们的平均值输出

	函数：int Book7(void)

*/
int Book7(void)
{
	printf("7.题目(04702)：输入三个字符型数据，将其转换成相应的整数后，求它们的平均值输出\n");
	printf("\n");

	char date[3];
	int result;
	
	printf("请输入字符：\n");
	scanf("%s", &date);

	result = ((int)date[0] + (int)date[1] + (int)date[2]) / 3;
	printf("平均值为：%d\n",result);


	system("pause");
	system("cls");

	return 0;
}

/*
	8.题目(04703)：求ax2+bx+c=0的方程的根，a、b、c、由键盘输入，设b2-4ab>0

	函数：int Book8(void)

*/
int Book8(void)
{
	printf("8.题目(04703)：求ax2+bx+c=0的方程的根，a、b、c、由键盘输入，设b2-4ab>0\n");
	printf("\n");

	int a, b, c;
	int result, result1;

	printf("请输入a：\n");
	scanf("%d", &a);
	printf("请输入b：\n");
	scanf("%d", &b);
	printf("请输入c：\n");
	scanf("%d", &c);

	if (b * b - 4 * a * c > 0)
	{
		result = -(b / a);
		result1 = c / a;
		printf("x1=%d,x2%d\n", result, result1);
	}
	else
	{
		printf("b2-4ab>0不成立，请重新输入\n");
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	9.题目(04704)：从键盘输入一个三位整数，输出该数的逆顺序

	函数：int Book9(void)

*/
int Book9(void)
{
	printf("9.题目(04704)：从键盘输入一个三位整数，输出该数的逆顺序\n");
	printf("\n");

	int input[3];

	printf("请输入：\n");
	scanf("%d%d%d", &input[0], &input[1], &input[2]);

	printf("逆序：%d%d%d\n", input[2], input[1], input[0]);

	system("pause");
	system("cls");

	return 0;
}

/*
	10.题目(06301)：输入四个整数a、b、c、d，把这四个数由小到大输出

	函数：int Book10(void)

*/
int Book10(void)
{
	printf("10.题目(06301)：输入四个整数a、b、c、d，把这四个数由小到大输出\n");
	printf("\n");

	int input[4];
	int i, j, temporary;

	for (i = 0; i < 4; i++)
	{
		printf("请输入整数：\n");
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
	11.题目(06302)：读入三个分别表示箱子长、宽、高的整数值，判断并输出该箱子是立方体还是长方体

	函数：int Book11(void)

*/
int Book11(void)
{
	printf("11.题目(06302)：读入三个分别表示箱子长、宽、高的整数值，判断并输出该箱子是立方体还是长方体\n");
	printf("\n");

	int wide, long1, high;

	printf("请输入箱子高：\n");
	scanf("%d", &high);
	printf("请输入箱子宽：\n");
	scanf("%d", &wide);
	printf("请输入箱子高：\n");
	scanf("%d", &long1);

	if (wide = long1 = high)
	{
		printf("箱子是立方体\n");
	}
	else
	{
		printf("箱子是长方体\n");
	}

	system("pause");
	system("cls");

	return 0;
}

/*
	12.题目(06303)：输入某一年月，输出该月的天数

	函数：int Book12(void)

*/
int Book12(void)
{
	printf("12.题目(06303)：输入某一年月，输出该月的天数\n");
	printf("\n");

	int input,input1;
	int DigMonth[7] = { 1,3,5,7,8,10,12 };
	int LittleMonth[4] = { 4,6,9,11 };

	printf("请输入年\n");
	scanf("%d", &input);
	printf("请输入月\n");
	scanf("%d", &input1);


	if (((0 == input % 4) && (0 != input % 100)) || (0 == input % 400))
	{
		if (input1 == 2)
		{
			printf("该月为29天\n");
		}
	}
	else
	{
		if (input1 == DigMonth[7])
		{
			printf("该月为31天\n");

		}
		else if (input1 == LittleMonth[4])
		{
			printf("该月为30天\n");

		}
		else if(input1 == 2)
		{
			printf("该月为28天\n");

		}
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	13.题目(06304)：  
					   x      x < 1
					y= 2x-1  1<=x<10
					   3x-11  X>=10
			输入x值，输出y值

	函数：int Book13(void)

*/
int Book13(void)
{
	printf("13.题目(06304)：  \n");
	printf("				   x      x < 1\n");
	printf("				y= 2x-1  1<=x<10\n"); 
	printf("				   3x-11  X>=10\n");
	printf("        输入x值，输出y值\n");
	printf("\n");

	int InputX;
	int open1;
	printf("请输入X:\n");
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
	14.题目(06305)：输入一个字符，如果该字符为小写（大写、其他），这转换为大写（小写、不变）

	函数：int Book14(void)

*/
int Book14(void)
{
	printf("14.题目(06305)：输入一个字符，如果该字符为小写（大写、其他），这转换为大写（小写、不变）\n");
	printf("\n");

	char Input;

	printf("请输入一个字符\n");
	scanf("%s", &Input);

	if (65 <= (int)Input <= 90)
	{
		Input -= 32;
		printf("输出%c\n", Input);
	}
	else if (97 <= (int)Input <= 122)
	{
		Input += 32;
		printf("输出%c\n", Input);
	}


	system("pause");
	system("cls");

	return 0;
}

/*
	15.题目(06306)：输入一个学生的考试成绩，输出其分数和对应的等级

	函数：int Book15(void)

*/
int Book15(void)
{
	printf("15.题目(06306)：输入一个学生的考试成绩，输出其分数和对应的等级\n");
	printf("\n");

	int Input;

	printf("请输入学生的成绩：");
	scanf("%d", &Input);

	if (90 <= Input <= 100)printf("成绩为：%d , 等级为A\n", Input);
	if (90 < Input <= 80)printf("成绩为：%d , 等级为B\n", Input);
	if (80 < Input <= 70)printf("成绩为：%d , 等级为C\n", Input);
	if (70 < Input <= 60)printf("成绩为：%d , 等级为D\n", Input);
	if (0 < Input < 60)printf("成绩为：%d , 等级为F\n", Input);

	system("pause");
	system("cls");

	return 0;
}

/*
	16.题目(09301)：计算1！+2！+3！+····n！的值，n值由键盘输入

	函数：int Book16(void)

*/
int Book16(void)
{
	printf("16.题目(09301)：计算1！+2！+3！+····n！的值，n值由键盘输入\n");
	printf("\n");

	int n,open=0,open2;
	int i,j,m=1;

	printf("请输入n值\n");
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
	printf("结果为：\n",open);


	system("pause");
	system("cls");

	return 0;
}

/*
	17.题目(09302)：打印水仙花数

	函数：int Book17(void)

*/
int Book17(void)
{
	printf("17.题目(09302)：打印水仙花数\n");
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
	18.题目(09302)：判断输入某个数是否为素数。若是，输出yes，否则输出no

	函数：int Book18(void)

*/
int Book18(void)
{
	printf("18.题目(09302)：判断输入某个数是否为素数。若是，输出yes，否则输出no\n");
	printf("\n");

	int Input;
	int i;

	printf("请输入一个数：\n");
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
	19.题目(09305)：输入星期几的第一个英文字母来判断一下星期几，如果第一个字母一样，则继续判断第二个英文字母

	函数：int Book19(void)

*/
int Book19(void)
{
	printf("19.题目(09305)：输入星期几的第一个英文字母来判断一下星期几，如果第一个字母一样，则继续判断第二个英文字母\n");
	printf("\n");

	system("pause");
	system("cls");

	return 0;
}

/*
	20.题目(09306)：输出一个图案

	函数：int Book20(void)

*/
int Book20(void)
{
	printf("20.题目(09306)：输出一个图案\n");
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
	21.题目(093707)：看书！！

	函数：int Book21(void)

*/
int Book21(void)
{
	printf("21.题目(093707)：看书！！\n");
	printf("\n");

	int repeat;
	double open;

	printf("请输入一个整数\n");
	scanf("%d", &repeat);

	if(0<repeat<10)open = 1 + 1 / 2 + 1 / 3 + 1 / (double)repeat;

	printf("输出：%lf\n",open);


	system("pause");
	system("cls");

	return 0;
}

/*
	22.题目(093708)：看书！！

	函数：int Book22(void)

*/
int Book22(void)
{
	printf("22.题目(093708)：看书！！\n");
	printf("\n");

	int Input;
	int i;

	printf("请输入一个数：\n");
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
	23.题目(093709)：看书！！

	函数：int Book23(void)

*/
int Book23(void)
{
	printf("23.题目(093709)：看书！！\n");
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

	printf("一共向：%d\n", open);


	system("pause");
	system("cls");

	return 0;
}

/*
	24.题目(11201)：输入十个数放在一维数组中，输出最小数及其下表

	函数：int Book24(void)

*/
int Book24(void)
{
	printf("24.题目(11201)：输入十个数放在一维数组中，输出最小数及其下表\n");
	printf("\n");

	int Input[10],j,i;

	printf("请输入十个数\n");
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
	25.题目(11202)：将一个数组逆序输出

	函数：int Book25(void)

*/
int Book25(void)
{
	printf("25.题目(11202)：将一个数组逆序输出\n");
	printf("\n");

	int Input[10] = { 1,2,3,4,5,6,7,8,9,10 },i;

	for (i = 9; i <= 0; i++)printf("%d ", Input[i]);

	system("pause");
	system("cls");

	return 0;
}

/*
	26.题目(13301)：求s=m!+n!+k!,m、n、k、从键盘输入（值均小余7）

	函数：int Book26(void)

*/
int Book26(void)
{
	printf("26.题目(13301)：求s=m!+n!+k!,m、n、k、从键盘输入（值均小余7）\n");
	printf("\n");

	int s, m, n, k;
	int w;
	int open[4] = {};

	printf("请输入m:\n");
	scanf("%d", &m);
	printf("请输入n:\n");
	scanf("%d", &n);
	printf("请输入m:\n");
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
	printf("结果=%d\n", s);

	system("pause");
	system("cls");

	return 0;
}

/*
	27.题目(11302)：输入两个整数，求最大公约数和最小公倍数

	函数：int Book27(void)

*/
int Book27(void)
{
	printf("27.题目(11302)：输入两个整数，求最大公约数和最小公倍数\n");
	printf("\n");

	int Input1, Input2;
	int open1,open2;

	printf("请输入第一个数\n");
	scanf("%d", &Input1);
	printf("请输入第二个数\n");
	scanf("%d", &Input2);

	open1 = Input1 % Input2;
	while (open1)
	{
		Input1 = Input2;
		Input2 = open1;
		open1 = Input1 % Input2;
	}
	printf("最大公约数为：%d\n", open1);

	open2= Input1* Input2;
	while (Input1 != Input2)
	{
		if (Input1 > Input2)Input1 = Input1 - Input2;
		if (Input1 < Input2)Input2 = Input2 - Input1;
	}

	printf("最小公倍数为：%d\n", open2);


	system("pause");
	system("cls");

	return 0;
}

/*
	28.题目(15401)：定义3个整数及整数指针，仅用指针方法按由小到大的顺序输出

	函数：int Book28(void)

*/
int Book28(void)
{
	printf("28.题目(15401)：定义3个整数及整数指针，仅用指针方法按由小到大的顺序输出\n");
	printf("\n");

	int q, a, z,i;
	int* w, * s, * x;

	printf("请输入整数\n"); scanf("%d", &q);
	printf("请输入整数\n"); scanf("%d", &a);
	printf("请输入整数\n"); scanf("%d", &z);

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

	printf("顺序为：%d %d %d \n", *w, *s, *x);

	system("pause");
	system("cls");

	return 0;
}

/*
	29.题目(15402)：看书！！！

	函数：int Book29(void)

*/
int Book29(void)
{
	printf("29.题目(15402)：看书！！！\n");
	printf("\n");

	int Input[10];
	int* open[10];
	int i,q;

	for (i = 0; i < 9; i++)
	{
		printf("请输入整数\n");
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
