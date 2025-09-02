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
		cout << "상품가격 : " << price << endl;
		cout << "상품 개수 : " << numOfPruduct << endl;
		cout << "현금 : " << myMoney << endl << endl;
	 }
};

int main() {
	Seller s(2,2,2);
	s.ShowSalesResult();
}