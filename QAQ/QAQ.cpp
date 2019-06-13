// QAQ.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CLing {
protected:
	int year;
	int month;
	int day;
public:
	CLing() {
		int year = 2019;
		int month = 1;
		int day = 1;
	}

	CLing(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	int setLing(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
		return 0;
	}

	void display() {
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
};
class CDerived :public CLing {
public:
	CDerived() {
		int year = 2019;
		int month = 1;
		int day = 1;
	}
protected:

	int CDerived::setLing(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
		return 0;
	}

	void display() {
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
};
int main()
{
	CLing od;
	od.setLing(2019, 6, 13);
	od.display();
	return 0;
}
