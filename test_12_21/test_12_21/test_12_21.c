#include <stdio.h>

//int main()
//{
//	printf("%c\n", '\'x\'');
//	return 0;
//} 

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	//printf("C:\\MSI");
//	printf("asda\tadsfasd\tfj\t");
//	//\t表示一个水平制表符的位置4or8的倍数
//	return 0;
//}

//int main()
//{
//	printf("\a");
//	return 0;
//}


//int main()
//{
//	printf("xxxx\b");
//	getchar();
//	return 0;
//}


//int main()
//{
//	printf("abc\nqqq\nrrrr");
//	return 0;
//}


//int main()
//{
//	printf("abc\r1");
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');
//	printf("%c\n", '\x33');
//	return 0;
//}


#include <string.h>
//int main()
//{
//	int len = strlen("abcdefhajlsdhfkas");//strlen - string length - 统计字符串的长度
//
//	//Strlen统计的是字符串中\0之前的字符个数
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	;//空语句 
//	return 0;
//}


#include <stdbool.h>

//int main()
//{
//	//_Bool islike = false;
//	bool islike = false;
//	if (islike)
//		printf("I like C\n");
//	else
//		printf("I dont like C\n");
//	return 0;
//}


//sizeof 计算的值如果要答应的话，格式应该用%zd
//单位是字节
//int main()
//{
//	//int a = 100;
//	//printf("%zd\n", sizeof(a));//变量
//	//printf("%zd\n", sizeof(long long));//类型
//	//printf("%zd\n", sizeof(3+5));//表达式
//
//	//printf("%zd\n", sizeof(3+3.5));
//	//                   int + double
//	//                    4  +  8
//
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));//大于等于int+
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//
//
//	return 0;
//}


//int main()
//{
//	int age1;
//	int age = 10;//初始化
//	float score = 85.5f;
//	double num = 123.4;
//
//	return 0;
//}

int num2 = 200;//全局变量

int main()
{
	int num1 = 100;//局部变量
	int num2 = 300;
	printf("%d\n", num1);
	printf("%d\n", num2);//局部和全局都有优先使用局部
	return 0;
}