
#include <iostream>
// ������
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
using namespace std;

void main()
{
	// �������
	Shape * ss[10];
	int i;

	for (i = 0; i < 10; i ++)
	{
		if (rand()%2) {
			ss[i] = new Rect(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
		} else
		{
			ss[i] = new Circle(rand() % 20, rand() % 20, rand() % 10);
		}
	}

	// ʹ�ö���
	for (i = 0; i < 10; i ++)
	{
		cout << ss[i]->tell() << ":" << ss[i]->area() << endl;
	}

	//�������򣬻�����Դ���ڴ棩
	for (i = 0; i < 10; i ++)
	{
		delete ss[i];
	}
}