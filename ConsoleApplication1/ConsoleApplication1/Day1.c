
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

#

