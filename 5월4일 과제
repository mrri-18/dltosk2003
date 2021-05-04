#include <iostream>
using namespace std;

int accounts[4] = { 5000, 4000, 0, 10 };
int total(int *total)
{
	int *total1 = 0;
	for (int i = 0; i < 4; i++)
	{
		total1 = total1 + accounts[i]; //왜 실행이 안되는지 모르겠어요 ㅠㅠ
	}
	return *total1;
}

void myaccounts()
{
	int i = 0;
	cout << "|" << "하나" << "|" << "우리" << "|" << "신한" << "|" << "국민" << "|" << endl;
	for (i = 0; i < 4; i++)
	{
		cout << "|" << accounts[i] << "|";
	}
	cout << endl;
}

int main()
{
	int total_money;
	myaccounts();
	total(&total_money);
	cout << "등록된 회원님의 총 자산은" << total_money << "원 입니다." << endl;
}
