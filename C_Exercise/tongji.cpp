//������n��Ȼ����������n��������ʾ����n�����������n������ż���ĸ�����

#include <stdio.h>
#include <conio.h>
#define MAX 100       

void main()
{
	int i,n,num,a[MAX];

	num=0;

	//����n����ֵ
	printf("Input the number 'n':");
	scanf("%d", &n);

	//��������n����
	for(i=0;i<n;i++)
	{
		printf("Input the number %d:", i+1);
		scanf("%d", &a[i]);
	}

	//����������n����
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	
	//����n������ż���ĸ���
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0 && a[i]!=0)
			num=num+1;
	}

	printf("\n");
	printf("The numbers of even numbers are: %d", num);

	getche();

}