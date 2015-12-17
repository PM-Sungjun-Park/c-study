/*

숫자 떼어내기 어레이 미적용

*/



//#include <stdio.h>


int main_divide(void)
{
	int n=1;
	int val, cal;

	printf("enter num \n");
	scanf("%d", &val);
	
	//printf("%d,%d,%d",val/100,(val/10)-10*(val/100),val%10)


	// 10^n으로 나누기.
	
	
	while (val>=n*10)
	{
		n = n * 10;
		//printf("%d \n", n); 확인용
	}

	while (val>=n)
	{
		cal = val / n;
		printf("%d ", cal);
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



// area

//#include <stdio.h>
int main_area(void)
{
	int width, height;
	int area;
	scanf("%d %d", &width, &height);

	area = width * height;
	printf("%d", area);
	return 0;
}


//#include <stdio.h>
int main_min2sec(void)
{
	int m,s;
	scanf("%d", &m);
	s = m * 60;
	
	printf("%d minutes is %d seconds.",m, s);
	return 0;
	
}

//#include <stdio.h>
int main_swap(void)
{
	int a, b,c;
	scanf("%d %d", &a, &b);

	c = b;
	b = a;
	a = c;

	printf("%d %d", a, b);
	return 0;
}

#include <stdio.h>
int main_cal(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d \n%d-%d=%d \n%d*%d=%d \n%d/%d=%d \n%d%%%d=%d\n", a, b, a + b, a, b, a - b, a, b, a*b, a, b, a / b, a, b, a%b);
	return 0;
}