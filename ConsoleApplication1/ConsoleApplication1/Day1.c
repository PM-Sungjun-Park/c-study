



/*
Day 1
*/

//  �������� ����

#include <stdio.h>

int main_D0(void)
{
	int val_1; // val 1, 2 �� ������
	int val_2;
	val_1 = 20;
	val_2 = 20; // �� ����

				//������� �Ŀ����� ����

	printf(" ���� ���� ��� 20�̸� val1�� �Ŀ���, val2�� �� �����̴�. \n\n");

	printf(" val_1 = %d \n", val_1++);
	printf(" val_2 = %d \n\n", ++val_2);

	// ��������
	printf(" ���������� ���Դϴ� \n\n");

	printf(" val_1 = %d \n", val_1);
	printf(" val_2 = %d \n\n\n", val_2);

	return 0;

}


/*  ���

val_1 = 20
val_2 = 21

val_1 = 21
val_2 = 21

*/



/*
Day 2
*/

// ���� �� �� ����

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



/* ��� ���
20
20
*/


// �Ȱ��� val = 20 ���� ������ �Ǵ� ���� �� �� �ִ�.


/* 

����3-1-1 
����ڿ��� ������ �Է� �޾Ƽ� ������ �ϴ� ���α׷� �ۼ��ϱ�

*/



//# include <stdio.h>

int main_3_1_1(void)
{
	int input_1, input_2;


	printf(" ��Ģ������ �����մϴ�. \n");
	printf(" ù��° ���ڸ� �Է����ּ���\n");
	scanf("%d", &input_1);
	printf(" �ι�° ���ڸ� �Է����ּ���\n");
	scanf("%d", &input_2);

	printf("��Ģ������ �����մϴ�. \ \ \n");
	printf("%d - %d = %d \ \ %d * %d = %d \ \n ", input_1,input_2,input_1 - input_2,input_1,input_2, input_1*input_2);

	return 0;
}



//���� 3-1-1 End


/*

���� 3-1-2
����ڿ��� �� ���ڸ� �Է¹޾Ƽ� ����
a*b+c=?

*/


//#include <stdio.h>
int main_3_1_2(void)
{
	int input_1, input_2,input_3;
	int result_1 , result_2;

	printf(" ù��° ���ڸ� �Է����ּ���\n");
	scanf("%d", &input_1);
	printf(" �ι�° ���ڸ� �Է����ּ���\n");
	scanf("%d", &input_2);
	printf(" ����° ���ڸ� �Է����ּ���\n");
	scanf("%d", &input_3);
	
	result_1 = input_1*input_2 + input_3;
	result_2 = input_1 + input_2*input_3;

	printf("A*B+C= %d \ \ A+B*C= %d \n",result_1,result_2);
	return 0;
}

// ���� 3-1-2 End


/*

���� 3-1-3
���� ����

*/

//#include<stdio.h>
int main_3_1_3(void)
{
	int val_1;
	int result;
	printf("N^2 �� ����մϴ�. N=? \n");
	scanf("%d", &val_1);
	
	result = val_1*val_1;
	
	printf("\n %d ^2 = %d  \n", val_1, result);
	return 0;

}

/*

���� 3-1-4
A/B�� �������� ���

*/

//#include <stdio.h>

int main_3_1_4(void)
{
	int val_1, val_2;
	int result;

	printf("A/B �� ������ ����Դϴ�. \n A�� �Է����ּ���.\n");
	scanf("%d", &val_1);
	printf("B�� �Է����ּ���\n");
	scanf("%d", &val_2);
	
	result = val_1%val_2;

	printf("\n \n %d/%d �� �������� %d", val_1, val_2, result);
	return 0;

}


/*

���� 3-1-5
(a-b)*(b+c)*(c%a)=?

*/

//#include <stdio.h>

int main_3_1_5(void)
{
	int a, b, c;
	int result;
	
	printf("������ ���� �Է����ּ��� \n");
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

// �Ǽ� ������ ���� �߻��� ���� �ڵ�
// �Ǽ��� "����Ȯ�ϰ� �ٷ�����"



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

	printf("%lf�� %lf�� ���� ��=%lf ��=%lf ��=%lf ������=%lf \n", val, val2,  val + val2, val - val2, val*val2, val / val2);
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
