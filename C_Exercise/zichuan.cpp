//��дһ����ʵ�ֽ��û������һ��ĸ�ַ����Է�����ʽ��������磬�������ĸ�ַ����ǣ�abcdefg�����Ϊ��gfedcba��

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,len,num;
	char s,str[100];
	
	len=0;

	//�����ַ��������浽������
	printf("Input the string: ");
	gets (str);

	//���������ַ����ĳ���
	for(i=0;i<100;i++)
	{
		if (str[i]==0)
			break;
		else
			len=len+1;
	}


	//���ַ�������
	num=len;
	//��������ַ�������Ϊż��
	if(len%2==0)
	{
		for(i=0;i<(len/2);i++)
		{
			s=str[num-1];
			str[num-1]=str[i];
			str[i]=s;
			num=num-1;
		}
	}
	//��������ַ�������Ϊ����
	else
	{
		for(i=0;(i-1)<(len/2);i++)
		{
			s=str[num-1];
			str[num-1]=str[i];
			str[i]=s;
			num=num-1;
		}
	}

	puts (str);
	getche();
}