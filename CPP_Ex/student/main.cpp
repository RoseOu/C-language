#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

void main()
{
	Student stu[3]={ Student(200607001,"Li ming",70),
		             Student(200607002,"Hu jun",80),
					 Student(200607003,"Wang tian",90)
	};

	int i,k,pos;
	fstream infile,outfile;
	outfile.open("Students.dat",ios::out|ios::binary|ios::trunc);
	if(!outfile)
	{
		cerr<<"File open error!"<<endl;
		exit(1);
	}

	//��ѧ����Ϣд���ļ�
	for(i=0;i<3;i++)
	{
		outfile.write((char *)&stu[i],sizeof(stu[i]));
	}
	outfile.close();


	//��ʾѧ����Ϣ
	cout<<"Students.dat:"<<endl;
	infile.open("Students.dat",ios::in|ios::binary);
	for(i=0;i<3;i++)
	{
		infile.read((char *)&stu[i],sizeof(Student));
		cout<<stu[i].GetNO()<<"\t"<<stu[i].GetName()<<"\t"
			<<stu[i].GetScore()<<endl;
	}
	infile.close();

	//��ѯѧ����Ϣ
	infile.open("Students.dat",ios::in|ios::binary);
	cout<<"Please input the number of record:";
	cin>>k;
	pos=(k-1)*sizeof(Student);
	infile.seekg(pos);
	infile.read((char*)&stu[k-1],sizeof(Student));
	cout<<stu[k-1].GetNO()<<"\t"<<stu[k-1].GetName()<<"\t"
		<<stu[k-1].GetScore()<<endl;

	infile.close();

	//ɾ���ڶ���ѧ����Ϣ
	cout<<"Delete the second record!"<<endl;
	outfile.open("Students.dat",ios::out|ios::binary|ios::trunc);
	for(i=0;i<3;i++)
	{
		if(i!=1)
		{
			outfile.write((char*)&stu[i],sizeof(stu[i]));
		}
	}
	outfile.close();

	//��ʾɾ�����ѧ����Ϣ
	infile.open("Students.dat",ios::in|ios::binary);
	for(i=0;i<2;i++)
	{
		infile.read((char*)&stu[i],sizeof(Student));
		cout<<stu[i].GetNO()<<"\t"<<stu[i].GetName()<<"\t"
			<<stu[i].GetScore()<<endl;
	}
	infile.close();


	system("pause");

}