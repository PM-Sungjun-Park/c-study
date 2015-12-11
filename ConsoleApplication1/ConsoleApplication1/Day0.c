


/*
Day 0
*/

//  변수값의 증감

#include <stdio.h>

int main_D0(void)
{
	int val_1; // val 1, 2 는 정수값
	int val_2;
	val_1 = 20;
	val_2 = 20; // 값 지정

	//선연산과 후연산의 차이

	printf(" 기존 값은 모두 20이며 val1은 후연산, val2는 선 연산이다. \n\n");

	printf(" val_1 = %d \n", val_1++);
	printf(" val_2 = %d \n\n", ++val_2);

	// 연산이후
	printf(" 연산이후의 값입니다 \n\n");

	printf(" val_1 = %d \n", val_1);
	printf(" val_2 = %d \n\n\n", val_2);

	return 0;

}


/*  출력

val_1 = 20
val_2 = 21

val_1 = 21
val_2 = 21

*/


