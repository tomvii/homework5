#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;
class equation
{
public:
	void random(int *a, int*b, int*c, int *d);
	void print( int v, int c);//���ڽ�������
	int test(int total, char *p1);
	int generateExpression(int x);
	float calcusum(int a, int b, char sig);
	float calcusum_fra(float a, float b, char sig);
	string combine(string a, string b, char sign);
	string int_string(int number);
	char randop();
	void set_p(char *p1);
private:
	char *p;
	int wrong;
	int right;
};
class file
{
public:
	void boundary(equation &cp,char *p2);//���ڽ����ɽ�������ļ�
	int fileread(char *p1);//�����ļ���������Ŀ��ֵ
	void writefile(char *str, char *p);//д���ļ�
private:
	char *pr;//����ָ��
	int num;
	char *pw;//д��ָ��

};