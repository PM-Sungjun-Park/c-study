
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

#

