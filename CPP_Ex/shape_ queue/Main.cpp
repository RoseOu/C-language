#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
#include "queue.h"
using namespace std;

void main()
{
	// �������
	Queue<Shape *>ss(10);
	int i;
	Shape *p,*q;

	for (i = 0; i < 10; i ++)
	{
		Shape *s;
		if (rand()%2) {
			s = new Rect(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
		} else
		{
			s = new Circle(rand() % 20, rand() % 20, rand() % 10);
		}
		ss.insert(s);
	}

	// ʹ�ö���
	for (i=0; i<10; i++)
	{
		cout << ss.data[i]->tell() << ":" << ss.data[i]->area() << endl;
	}

	//�������򣬻�����Դ���ڴ棩
	for (i = 0; i < 10; i ++)
	{
		delete ss.data[i];
	}

	system("pause");
}