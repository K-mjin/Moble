#include <iostream>
using namespace std;

class Seller {
	int price;
	int numOfPruduct;
	int myMoney;
public:
	Seller()
	{
	}
	Seller(int price, int num, int money) : price(price), numOfPruduct(num), myMoney(money)
	{
	}
	void ShowSalesResult() const {
		cout << "��ǰ���� : " << price << endl;
		cout << "��ǰ ���� : " << numOfPruduct << endl;
		cout << "���� : " << myMoney << endl << endl;
	 }
};

int main() {
	Seller s(2,2,2);
	s.ShowSalesResult();
}