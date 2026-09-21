//#include <stdio.h>
//int main()
//{
//	printf("Hello, World!\n");
//	return 0;
//}



//comment ctrl+k,ctrl+c;cancel ctrl+k,ctrl+u
//char  character ''
//int integer 0,2,100                                                                         4 bytes
//float floating point , 3.14f, 2.718f     
//double double precision floating point 0.0, 3.14, 2.718 high precision
//_Bool boolean true, false,need <stdbool.h> header file
//short [int] short integer -32768 to 32767                                                   2 bytes
//long [int] long integer -2147483648 to 2147483647                                           4 bytes
//long long [int] long long integer -9223372036854775808 to 9223372036854775807                 8 bytes
//long double long double precision floating point 0.0, 3.14L, 2.718L high precision



//#include <stdio.h>
//int main()
//{   //%zu is used to print the size of a data type in bytes
//	printf("%zu\n", sizeof(int));//4 bytes
//	printf("%zu\n", sizeof(float));//4 bytes
//	printf("%zu\n", sizeof(double));//8 bytes
//	printf("%zu\n", sizeof(char));//1 byte
//	printf("%zu\n", sizeof(long int));//4 bytes
//	printf("%zu\n", sizeof(short int));//2 bytes
//	printf("%zu\n", sizeof(long long int));//8 bytes
//	printf("%zu\n", sizeof(_Bool));//1 byte
//	return 0;
//}


//ACSII code
//1 byte = 8 bits，1 kb = 1024 bytes，1 mb = 1024 kb，1 gb = 1024 mb，1 tb = 1024 gb
//signed integer: -128 to 127，unsigned integer: 0 to 255
//int = signed int (default)，char uncertainty
//<limits.h> int types , <float.h> float types
// A + 32 = a, A ~ Z  65~ 90, a ~ z 97 ~ 122, 0 ~ 9 48 ~ 57 , \n 10, \t 9, \r 13, \b 8, \f 12, \v 11, \\ 92, \' 39, \" 34,0~31 no printable characters



//escape sequences: \n, \t, \r, \b, \f, \v, \\, \', \", \0
//     /' indicate alone '
//     /" indicate alone "
//     // indicate alone /
//     /b indicate alone backspace , tab covers new character
//	   /v indicate alone vertical tab
//	   /r indicate alone return the cursor to the beginning
//     /t indicate alone horizontal tab , constant 8/16/24...or 4,8,12... bytes wide
//     Numerical Escape Sequences
//     /ddd   convert ddd(octonnary number to decimal number) to a character
//     /xhh   convert hh(hexadecimal number to decimal number) to a character


//   strlen -- measure the str length
#include <stdio.h>
int main()
{
	printf("%zu\n",strlen("Hello,World!"));
	return 0;
}


