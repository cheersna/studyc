//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int SFO(void)
//{
//	int num = 10;
//	num++;
//	printf("SFO num: %d\n", num);
//	return 0;
//}
//
//int SFT(void)
//{
//	int num1 = 20;
//	int num2 = 30;
//	num1++, num2--;
//	printf("num1 & num2: %d %d \n", num1, num2);
//	return 0;
//}
//
//int main(void)
//{
//	int num = 17;
//	SFO();
//	SFT();
//	printf("main num: %d \n", num);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int cnt;
//	for (cnt = 0; cnt < 3; cnt++)
//	{
//		int num = 0;
//		num++;
//		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);
//	}
//	if (cnt == 3)
//	{
//		int num = 7;
//		num++;
//		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
//	}
//	return 0;
// }
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num = 1;
//
//	if (num == 1)
//	{
//		int num = 7;
//		num += 10;
//		printf("if문 내 지역변수 num: %d \n", num);
//	}
//	printf("main 함수 내 지역 변수 num: %d \n", num);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Add(int val);
//int num;
//
//int main(void)
//{
//	printf("num: %d \n", num);
//	Add(3);
//	printf("num: %d \n", num);
//	num++;
//	printf("num: %d \n", num);
//	return 0;
//}
//
//void Add(int val)
//{
//	num += val;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Add(int val);
//int num;
//
//int main(void)
//{
//	printf("num: %d \n", num);
//	Add(3);
//	printf("num: %d \n", num);
//	num++;
//	printf("num: %d \n", num);
//	return 0;
//}
//
//void Add(int val)
//{
//	num += val;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Add(int val);
//int num = 1;
//
//int main(void)
//{
//	int num = 5;
//	printf("num: %d \n", Add(3));
//	printf("num: %d \n", num + 9);
//	return 0;
//}
//
//int Add(int val)
//{
//	int num = 9;
//	num += val;
//	return num;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void SimpleFunc(void)
//{
//	static int num1 = 0;
//	int num2 = 0;
//	num1++, num2++;
//	printf("static: %d,local: %d \n", num1, num2);
//}
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
// 
//int
//AddToTotal(int num)
//{
//	static int total = 0;
//	total += num;
//	return total;
//}
//int main(void)
//{
//	int num, i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("입력:%d ", i + 1);
//		scanf("%d", &num);
//		printf("누적: %d \n", AddToTotal(num));
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void Recursive(int num)
//{
//	if (num <= 0)
//		return;
//	printf("Recursive call! %d \n", num);
//	Recursive(num - 1);
//}
//int main(void)
//{
//	Recursive(3);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}
int main(void)
{
	printf("1! =%d \n", Factorial(1));
	printf("2! =%d \n", Factorial(2));
	printf("3! =%d \n", Factorial(3));
	printf("4! =%d \n", Factorial(4));
	printf("9! =%d \n", Factorial(9));
	return 0;
}