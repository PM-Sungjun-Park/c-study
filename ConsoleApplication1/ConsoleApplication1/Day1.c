



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

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int result;
	
	printf("������ ���� �Է����ּ��� \n");
	scanf("%d %d %d", &a, &b, &c);

	
	result = (a - b)*(b + c)*(c%a);
	
	printf("%d", result);

	return 0;
}