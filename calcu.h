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
	void print( int v, int c);//对于结果的输出
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
	void boundary(equation &cp,char *p2);//用于将生成界面存入文件
	int fileread(char *p1);//读入文件并返回题目数值
	void writefile(char *str, char *p);//写出文件
private:
	char *pr;//读入指针
	int num;
	char *pw;//写出指针

};