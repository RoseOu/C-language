//����NxN�׵ľ��󣬱��ʵ�֣���1�����������󡣣�2���������Խ����ϵĸ�Ԫ��֮�͡���3���û�����x�����x���ϸ�Ԫ��֮�͡�

#include <stdio.h>
#include <conio.h>
#define N 3

void main()
{
	int i,j,left,right,x,sum,a[N][N];

	left=0;
	right=0;

	//����NxN�ľ���
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			printf("Input the number of line %d and list %d:  ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}

	//����������
	for(i=0;i<N;i++)
	{	
		for(j=0;j<N;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	//�������Խ���Ԫ�صĺ�
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j)
				left = left+a[i][j];
			if((i+j)==(N-1))
				right = right+a[i][j];
		}
	}

	//����x
	printf("Input the 'x':");
	scanf("%d", &x);

	sum=0;

	//���n��Ԫ�غ�
	for(j=0;j<N;j++)
	{
		sum = sum+a[x-1][j];
	}


	printf("The sum of left diagonal is: %d\n", left);
	printf("The sum of right diagonal is: %d\n", right);
	printf("The sum of line %d is: %d", x,sum);
	getche();

}
