//�Ӽ�����������������������жϸ����Ƿ�Ϊ����������ν���������Ǵ����Ҷ����������ҵ�����������һ���ġ�
//���磬12321��4004���ǻ�������

#include <stdio.h>
#include <conio.h>

void main()
{
	int x,num,i,m;
	
	num = 0;
	i = 0;
	
	scanf ("%d", &x);
	m = x;

	while (m%10!=0)
	{	

		i = m%10;
		m = m/10;
		num = num*10+i;
	}
	if	(num == x)
		printf ("True");
	else
		printf ("False");
	getche();
}
