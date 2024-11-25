//#include<stdio.h>
//puts函数
//int main()
//{
//	char a[] = "hello,word";
//	puts(a);
//	return 0;
//}
//只能用于打印字符串
#include<string.h>
#pragma warning(disable : 4996)
//strcpy函数
//int main()
//{
//	char b[]="0";
//	char a[] = "hello, word";
//	char* c = strcpy(b, a);
//	puts(b);
//	puts(c);
//	return 0;
//}
//将a复制给b。
//memset函数
//int main()
//{
//	char a[] = "hello,word";
//	memset(a, 'x', 5);
//	puts(a);
//	return 0;
//}
//将a中的前5个字符改为x。
//int efcz(int a[], int i,int d,int g)
//{
//	int b = (d + i) / 2;
//	int c;
//	if (g < a[b])
//	{
//		return efcz(a,b,d,g);
//	}
//	else
//	{
//		if (g == a[b])
//		{
//			printf("下标为:%d\n", b);
//			return a[b];
//		}
//		else
//		{
//			return efcz(a,i,b, g);
//		}
//	}
//	return 1;
//}
//初期二分查找函数
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 9;
//	int g = 7;
//	int d = 0;
//	int c=efcz(a, i, d,g);
//	printf("%d", c);
//	return 0；
//}
//#include <stdio.h>
//
//int main() {
//	int a, b, d = 3;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//		{
//			if (a == b)
//			{
//				printf("%d=%d\n", a, b);
//			}
//			if (a > b)
//			{
//				printf("%d>%d\n", a, b);
//			}
//		}
//	}
//
//	return 0;
//}
// 排序
//#include<stdio.h>
//int bidaxiao(int a[])
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//
//	}
//}
//int main()
//{
//	int a[3];
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//}
#include<stdio.h>
//void css(unsigned int x)
//{
//	
//		printf("%d\n", x % 10);
//		x = x / 10;
//		if (x == 0)
//		{
//			return;
//		}
//		css(x);
//}
//递归语句使用
// 打印出顺序的数字位数
//void css(unsigned int x)
//{
//	if (x > 9)
//	{
//		css(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int a;
//	scanf("%d", &a);
//	css(a);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int cas(char* a)
//{
//	int b = 0;
//	while (*a != '\0')
//	{
//		b++;
//		a++;
//	}
//	return b;
//}
//不允许创建临时变量,得出字符串长度。
//int cas(char* a)
//{
//	if (*a != '\0')
//	{
//		return cas(a+1)+1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char a[] = "hello,word";
//	printf("%d\n", strlen(a));
//	printf("%d\n", cas(a));
//	return 0;
//}
//#include<stdio.h>
//int jiechen(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//        return jiechen(n - 1) * n;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", jiechen(n));
//	return 0;
//}
//int fbnq(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fbnq(n - 1) + fbnq(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fbnq(n));
//	return 0;
//}
//#include<stdio.h>
//int n = 10;
//int main()
//{
//	int n = 1;
//	printf("%d", n);
//	return 0;
//}
//#include <stdio.h>
//void caa()
//{
//	printf("  * ");
//	printf(" * * ");
//	printf("* * *");
//	return;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	return 0;
//}
//int main()
//{
//	int n = 3;
//	int i,a;
//	for (i = 1; i <= 3; i++)
//	{
//		for (a = 0; a < i; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//20块钱，两个空瓶可以换一瓶可乐
//int main()
//{
//	int a,b=0;
//	scanf("%d",&a);
//	while (a)
//	{
//		b = b + a;
//
//		a = a / 2;
//		if (a % 2 == 1 && a!=1)
//		{
//			b++;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 7;
//	int b,c,i;
//	for (c = 1; c <= a; c++)
//	{
//		for (b = 1; b <=a-c; b++)
//		{
//			printf(" ");
//		}
//		for (i = 1; i <= (2*c-1); i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (c = 6;c>=1; c--)
//	{
//		for (b = 1; b<=a - c; b++)
//		{
//			printf(" ");
//		}
//		for (i = 1; i <= (2 * c - 1); i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int bdx(int x, int y)
//{
//	if (x < y)
//	{
//		printf("%d", y);
//	}
//	else
//	{
//		printf("%d", x);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	bdx(a, b);
//	return 0;
//}
//#include<stdio.h>
//int fbnq(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fbnq(n - 1) + fbnq(n - 2);
//	}
//}
//int main()
//{
//	int n,i,a=1,b=1,c;
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	/*printf("%d\n",fbnq(n));*/
//	return 0;
//}
//#include<stdio.h>
//void fxzfc(char *n)
//{
//	int a = strlen(*n);
//	int i;
//	for (i = 1; i <= a; i++)
//	{
//		*n += a;
//		*n--;
//		printf("%s", *n);
//	}
//	return;
//}
//int main()
//{
//	char *ch[] = "abcdef";
//	fxzfc(ch);
//	return 0;
//}
//int css(int n)
//{
//	int a=0;
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		
//		return css(n / 10)+(n%10);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	css(n);
//	printf("%d", css(n));
//	return 0;
//}
//#include<stdio.h>
//int jiec(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return jiec(n-1) * n;
//	}
//}
//int main()
//{
//	int n,a=1;
//	scanf("%d", &n);
//	printf("%d\n", jiec(n));
//	while (n)
//	{
//		a = a*n;
//		n--;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//char reverse_string(char* string,int str)
//{
//
//}
//int main()
//{
//	char string[] = "abcdefg";
//	int str = strlen(string);
//	reverse_string(string,str);
//	return 0;
//}
//#include <stdio.h>
//
//int css(const char* n) {
//    if (*n == '\0') {
//        return 0;
//    }
//    else {
//        return 1 + css(n + 1);
//    }
//}
//
//int main() {
//    char n[] = "abcdef";
//    printf("%d", css(n));
//    return 0;
//}
//#include<stdio.h>
//int css(const char* n)
//{
//	if (*n == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return css(n+1) + 1;
//	}
//}
//int main()
//{
//	char n[] = "abcdef";
//	printf("%d", css(n));
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void bss(int a[],int d )
//{
//    int i;
//    for (i = 0; i < d; i++)
//    {
//        a[i] = -a[i];
//    }
//    return;
//}
//int css(int a[])
//{
//    int c = sizeof(a) / sizeof(a[0]);
//    int d=0,b=0,i;
//    for (i = 0; i < c; i++)
//    {
//        if (i % 2 == 0)
//        {
//            d = d + a[i];
//        }
//        else
//        {
//            b = b + a[i];
//        }
//        bss(a,c);
//    }
//    return (d - b);
//}
//int main()
//{
//    int n, b;
//    scanf("%d", &n);
//    int a[1000];
//    for (b = 0; b < n; b++)
//    {
//        scanf("%d", &a[b]);
//    }
//    printf("%d", css(a));
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void bss(int a[], int size) {
//    for (int i = 0; i < size; i++) {
//        a[i] = -a[i];
//    }
//}
//
//int css(int a[], int size) {
//    int d = 0, b = 0, i;
//    for (i = 0; i < size; i++) {
//        if (i % 2 == 0) {
//            d += a[i];
//        }
//        else {
//            b += a[i];
//        }
//    }
//    return (d - b);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int a[1000]; // 确保数组大小足够大以存储所有输入
//    for (int b = 0; b < n; b++) {
//        scanf("%d", &a[b]);
//    }
//    printf("%d", css(a, n)); // 传递数组和大小给css函数
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, b;
//    scanf("%d", &n);
//    int a[1000];
//    for (b = 0; b < n; b++)
//    {
//        scanf("%d", &a[b]);
//    }
//    int i, c = 0, d = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            c = c + a[i];
//        }
//        else
//        {
//            d = d +a[i];
//        }
//    }
//    printf("%d", c - d);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int max(int A[], int N)
//{
//    int a = A[0];
//    int i;
//    for (i = 1; i < N; i++)
//    {
//        if (a <= A[i])
//        {
//            a = A[i];
//        }
//    }
//    return a;
//}
//int chazhi(int A[], int N, int b)
//{
//    int i, a = 0;
//    for (i = 0; i < N; i++)
//    {
//        a = a + (b - A[i]);
//    }
//    return a;
//}
//int main(int argc, char* argv[])
//{
//    int N, i;
//    scanf("%d", &N);
//    int A[N];
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &A[i]);
//    }
//    long long int a = max(A, N);
//    int b = chazhi(A, N, a);
//    if (b % N != 0)
//    {
//        printf("%d", b / N + 1);
//    }
//    else
//    {
//        printf("%d", b / N);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    int T, i;
//    scanf("%d", &T);
//    int X[T];
//    for (i = 0; i < T; i++)
//    {
//        scanf("%d", &X[i]);
//    }
//    int i;
//    long long int N;
//    for (i = 0; i < T; i++)
//    {
//        int a;
//        for (a = 1; a < X[i]; a++)
//        {
//            int c = sqrt(X[i]);
//            if (a > c && a % c == 0)
//            {
//                N = N + a;
//            }
//        }
//    }
//    printf("%lld", N % 998244353);
//    return 0;
//}
//#include<stdio.h>
//void css(int a[],int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int j, b = a[0], c, d;
//		for (j = 0; j < n; j++)
//		{
//			if (b > a[j])
//			{
//				b = a[j];
//				c = j;
//			}
//		}
//		d = a[c];
//		a[c] = a[i];
//		a[i] = d;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//}
//int main()
//{
//	const int n = 5;
//	int a[n];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	css(a, n);
//	int b = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i + 1] - a[i] != 0 && a[i + 1] - a[i] != 1)
//		{
//			b = a[i] + 1;
//			break;
//		}
//	}
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a[50];
//	int c = 10, b = 20;
//	int n = sprintf(a, "%d+%d=%d", c, b,c+b);
//	printf("%s %d", a, n);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a[50];
	int c = 10, b = 20;
	int n = sprintf(a,"%0", c);
	printf("%d  %d", a, n);
	return 0;
}


