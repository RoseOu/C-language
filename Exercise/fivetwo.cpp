//����ж��������ݵķ������͡�x>0,sign=1;x=0,sign=0;x<0,sign=-1������x����ӡ��sign��ֵ��

#include <stdio.h>
#include <conio.h>

void main()
{	
	float x;
	int sign;

	printf("Input the 'x' here:");
	scanf("%f", &x);
	
	if (x > 0)
		sign = 1;
	else if (x==0)
		sign = 0;
	else
		sign = -1;

	printf("sign=%d",sign);

	getche();
}