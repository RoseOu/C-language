//����Ļ����ʾһ��������ʾ��ʱ���
//  *****Time*****
//  1     morning
//  2     afternoon
//  3     night
//������Ա������ʾ����ѡ�񣬳�����������ʱ�������ʾ��Ӧ���ʺ���Ϣ��ѡ��1ʱ��ʾ��Good morning����
//ѡ��2ʱ��ʾ��Good afternoon����ѡ��3ʱ��ʾ��Good night��������������ѡ����ʾ��Selection error!������switch����̡�

#include <stdio.h>
#include <conio.h>

void main()
{
	int choice;

	printf("*****Time*****\n1     morning\n2     afternoon\n3     night\nPlease enter your choice:");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1: printf("Good morning"); break;
		case 2: printf("Good afternoon"); break;
		case 3: printf("Good night"); break;
		default: printf("Selection error!"); break;
	}

	getche();
}
