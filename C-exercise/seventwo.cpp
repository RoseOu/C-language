//����10������������10�������������������������������ǰ��ż���ں󡣱��磬��������10�����ǣ�10 9 8 7 6 5 4 3 2 1��
//�����1 3 5 7 9 2 4 6 8 10.

#include <stdio.h>
#include <conio.h>

void main()
{
	int a[10],i,j,c;

	for (i=0; i<10; i=i+1)
	{
		printf ("Input the number %d:", i+1);
		scanf ("%d", &a[i]);
	}
	for (i=1;i<10;i=i+1)
	{
		for (j=0;j<10-i;j=j+1)
		{
			if (a[j]>a[j+1])
			{
				c = a[j];
				a[j] = a[j+1];
				a[j+1] = c;
			}
			if ((a[j]%2==0) && (a[j+1]%2!=0))
			{
				c = a[j];
				a[j] = a[j+1];
				a[j+1] = c;
			}
		}
	}
	printf ("The sorted numbers:\n");
	for (i=0;i<10;i=i+1)
		printf ("%d,", a[i]);
	getche();
}