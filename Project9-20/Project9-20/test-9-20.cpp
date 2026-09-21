// str `s end mark is \0
//Variable (should be initialized or = 0): int a = 5;
//global variable
//local variable



// constant variable
// literal constant
//#include <stdio.h>
//#define PI 3.14
//int main()
//{
//	printf("%d\n", 031); // octal constant  8
//	printf("%d\n", 0x1F); // hexadecimal constant   16
//	printf("%d\n", 100u); // unsigned constant  4
//	printf("%f\n", PI);
//	return 0;
//}



// const 
//#include <stdio.h>
//int main()
//{
//	const int a = 5;
//	printf("%d\n", a);
//	return 0;
//}

// calculation
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 6;
	int c = 3;
	printf("%d\n", a + b);
	printf("%d\n", a * b);
	printf("%d\n", b / c);
	printf("%f\n",(float) b /  (float)a);
	float d = b / a;
	printf("%f\n", d);  // integer division:result is the quotient
	printf(" %d\n", b % a); // remainder

	int score = 5;
	int end;
	end = (score / 20) * 100; // 5 / 20 = 0, 0 * 100 = 0
	float endd = (score / 20.0) * 100; // right: 5 / 20.0 = 0.25, 0.25 * 100 = 25
	printf("%d\n", end);
	printf("%f\n", endd);

	printf("%d\n", 11 % -5); // 1
	printf("%d\n", -11 % 5); // -1
	return 0;
}