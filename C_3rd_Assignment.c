#include <stdio.h>

int main()
{
	float x, a = 0.0 , b = 0.0, sum = 0.0;
	for( x = 1.0 ;; x /= 2)
	{
		a = x * x;
		sum += a;
		b = sum - a;
		printf("x�� %f �϶� ������ ���̴� %f - %f = %f \n", x, sum, b, a);
		
		if(a < 0.000001)
			break;
	}
	printf("����� ������ ���� %f�Դϴ�.\n",b);

	return 0;
}