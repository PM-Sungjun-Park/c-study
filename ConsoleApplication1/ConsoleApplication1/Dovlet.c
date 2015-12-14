/*

숫자 떼어내기 어레이 미적용

*/

#include <stdio.h>

int main(void)
{
	int n=1;
	int val, cal;

	printf("enter num \n");
	scanf("%d", &val);
	
	//printf("%d,%d,%d",val/100,(val/10)-10*(val/100),val%10)


	/*

	숫자 떼어내기
	45648 = 4*10000+5*1000+6*100+4*10+8

	*/

	while (val>=n*10)
	{
		n = n * 10;
		//printf("%d \n", n); 확인용
	}

	while (val>=n)
	{
		cal = val / n;
		printf("%d", cal);
		val = val - cal*n;
		n = n / 10;
		if (n < 1)
		{
			printf("\n");
			break;
		}
	}
	
	printf("end \\n");
	
	

	return 0;
}