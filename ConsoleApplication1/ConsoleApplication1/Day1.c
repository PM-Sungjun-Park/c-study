



/*
Day 1
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



/*
Day 2
*/

// 선언 후 값 대입

//CODE

//#include <stdio.h>

int main_D_1_E1(void)
{
	int val1;
	val1 = 20;
	printf("%d \n", val1);
	int val2 = 20;
	printf("%d \n", val2);
	return 0;
}



/* 출력 결과
20
20
*/


// 똑같이 val = 20 으로 저장이 되는 것을 알 수 있다.


/* 

문제3-1-1 
사용자에서 정수를 입력 받아서 연산을 하는 프로그램 작성하기

*/



//# include <stdio.h>

int main_3_1_1(void)
{
	int input_1, input_2;


	printf(" 사칙연산을 수행합니다. \n");
	printf(" 첫번째 숫자를 입력해주세요\n");
	scanf("%d", &input_1);
	printf(" 두번째 숫자를 입력해주세요\n");
	scanf("%d", &input_2);

	printf("사칙연산을 수행합니다. \ \ \n");
	printf("%d - %d = %d \ \ %d * %d = %d \ \n ", input_1,input_2,input_1 - input_2,input_1,input_2, input_1*input_2);

	return 0;
}



//문제 3-1-1 End


/*

문제 3-1-2
사용자에게 세 숫자를 입력받아서 연산
a*b+c=?

*/


//#include <stdio.h>
int main_3_1_2(void)
{
	int input_1, input_2,input_3;
	int result_1 , result_2;

	printf(" 첫번째 숫자를 입력해주세요\n");
	scanf("%d", &input_1);
	printf(" 두번째 숫자를 입력해주세요\n");
	scanf("%d", &input_2);
	printf(" 세번째 숫자를 입력해주세요\n");
	scanf("%d", &input_3);
	
	result_1 = input_1*input_2 + input_3;
	result_2 = input_1 + input_2*input_3;

	printf("A*B+C= %d \ \ A+B*C= %d \n",result_1,result_2);
	return 0;
}

// 문제 3-1-2 End


/*

문제 3-1-3
제곱 연산

*/

//#include<stdio.h>
int main_3_1_3(void)
{
	int val_1;
	int result;
	printf("N^2 를 출력합니다. N=? \n");
	scanf("%d", &val_1);
	
	result = val_1*val_1;
	
	printf("\n %d ^2 = %d  \n", val_1, result);
	return 0;

}

/*

문제 3-1-4
A/B의 나머지값 출력

*/

//#include <stdio.h>

int main_3_1_4(void)
{
	int val_1, val_2;
	int result;

	printf("A/B 의 나머지 출력입니다. \n A를 입력해주세요.\n");
	scanf("%d", &val_1);
	printf("B를 입력해주세요\n");
	scanf("%d", &val_2);
	
	result = val_1%val_2;

	printf("\n \n %d/%d 의 나머지는 %d", val_1, val_2, result);
	return 0;

}


/*

문제 3-1-5
(a-b)*(b+c)*(c%a)=?

*/

//#include <stdio.h>

int main_3_1_5(void)
{
	int a, b, c;
	int result;
	
	printf("세가지 값을 입력해주세요 \n");
	scanf("%d %d %d", &a, &b, &c);

	
	result = (a - b)*(b + c)*(c%a);
	
	printf("%d", result);

	return 0;
}

/*

Day 3
#Chapter 4 

*/

// test , operator "> , <" 

//#include <stdio.h>
int main_test_3A(void)
{
	int val_1, val_2;
	int comparison;


	printf("what is bigger number? , press insert two numbers \n");
	scanf("%d %d", &val_1, &val_2);

	comparison = val_1 > val_2; //comparison val_1 , val_2

	if (comparison != 0)
	{
		printf("%d is bigger than %d.\n", val_1, val_2);
	}

	else
	{
		printf("%d is smaller than %d.\n", val_1, val_2);
	}


	printf("\n \n comparison = %d \n", comparison);

	return 0;
}


// float_error
//#include <stdio.h>
int main_4_float_error(void)
{
	int i;
	float val=0.0;
	for (i = 0; i < 100; i++)
		val = val + 0.1;

	printf("%f \n", val);
	

	return 0;
}

// 실수 단위의 오류 발생에 대한 코드
// 실수는 "부정확하게 다뤄진다"



/*

Exercise_4_4_1
positive number to  negative number

*/

//#include <stdio.h>

int main_4_4_1(void)
{

	int val_p;
	int val_n;
	/*
	how to alter positive number to negative number (bit)?
	: 000011 = 3 , 111101 = -3 
	000011 + 111101 = (1)000000 = 0
	*/

	printf(" insert number \n\n");
	scanf("%d", &val_p);

	val_n = ~val_p + 1; // val_p reverse bit and plus 1
	
	printf("\n\n%d", val_n);

	return 0;
	


}

//end 4_4_1


/*

Excercise_4_4_2
Double N

*/

//#include <stdio.h>
int main_4_4_2(void)
{
	int val;
	int result;

	printf("please enter number \n");
	scanf("%d", &val);

	result = val << 1;
	
	printf("%d", result);

	return 0;

}

//End 4_4_2


/*
Excercise_5
*/

// 5-1-1

//#include <stdio.h>
int main_5_1_1(void)
{
	int x1, y1,x2,y2;
	int area;
	printf("input [x1 y1 x2 y2]\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	area = (x2 - x1)*(y2 - y1);
	printf("%d \n", area);

	return 0;
	
}


//#include <stdio.h>
int main_5_1_2(void)
{
	double val, val2;
	scanf("%lf %lf", &val, &val2);

	printf("%lf과 %lf의 연산 합=%lf 차=%lf 곱=%lf 나누기=%lf \n", val, val2,  val + val2, val - val2, val*val2, val / val2);
	return 0;
}


//#include <stdio.h>
int main_5_1_3(void)
{
	char i;
	for (i = 1; i <= 126; i++)
		printf("%d = %c \n ", i,i);
	return 0;
}

#include <stdio.h>
int main(void)
{
	char i,j;

	scanf("%d %c", &i, &j);

	printf("%c %d\n", i, j);

	return 0;

}
