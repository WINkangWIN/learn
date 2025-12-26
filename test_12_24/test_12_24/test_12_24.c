#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int num1 = 100;
//
//int main()
//{
//	int num2 = 200;
//
//	return 0;
//}


//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = num1 + num2;//双目操作符-有两个数的操作符
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = num1 - num2;
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int r = num1 * num2;
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	float r = 6.0 / 4; //1.5
//	printf("%f\n", r);
//	return 0;
//}


//int main()
//{
//	int r = 6 % 4;
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	int a;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a= 10;
//	//a = a- 1;
//	//a  -= 1;
//	//a--;
//	--a;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//加号同理
//int main()
//{
//	int a = 10;
//	//int b = a--;//后置--:先使用再减1
//	//b=a, a=a-1
//	int b = --a;//前置--:先-1，再使用
//	//a=a-1, b=a
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int num1 = 10;
//	printf("%d\n", num1);
//
//	unsigned int num2 = -20;
//	printf("%u\n", num2);
//	return 0;
//}


//int main()
//{
//	float score = 0;
//	//给score这个变量中输入一个值
//	printf("请输入成绩：\n");
//	scanf("%f", &score);//&-取地址操作符
//
//	//输出到屏幕上输出到屏幕上
//	printf("成绩是：%*.*f\n", 5,1,score);
//	return 0;
//
//}


int main()
{
	int i = 0;
	int j = 0;
	float x = 0.0;
	float y = 0.0;
	scanf("%d%d%f%f", &i, &j, &x, &y);
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	printf("x = %f\n", x);
	printf("y = %f\n", y);

	return 0;
}
