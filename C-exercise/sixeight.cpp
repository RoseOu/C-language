//�Ӽ�������������һ������x����̼���x��ÿһλ�������֮�ͣ���������ǰ�������ţ������磬����xΪ1234��
//����1234�����1��2��3��4�ĸ����֣�Ȼ�����1+2+3+4=10�������10.

#include <stdio.h>
#include <conio.h>

void main()
{
	int x,m,num;

	scanf ("%d", &x);

	if (x < 0)
		x = -x;

	m = x;
	num = m % 10;

	while (m / 10 != 0)
	{
		m = m / 10;
		num = num + (m % 10); 
	}
	
	printf("The result is %d", num);
	getche();
}