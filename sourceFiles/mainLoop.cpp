
#pragma warning(disable:4996)
#include <iostream>
#include "header\\SecCar.h"
#include "header\\Point.h"
#include "header\\Calculator.h"
#include "header\\Printer.h"
#include "header\\FruitSeller.h"
#include "header\\FruitBuyer.h"
#include "header\\Rectangle.h"
#include "header\\Ring.h"

#pragma warning(disable:4996)
using namespace std;

void PointTestFunction() {
	Point pos1 = { 12, 4 };
	Point pos2 = { 20,30 };
	pos1.MovePos(-7, 10);
	pos1.showPosition();

	pos1.AddPoint(pos2);
	pos1.showPosition();
}
void CalculatorTestFunction() {
	Calculator cal;
	cal.InitCalculator();
	cout << "3.2 + 2.4 =" << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 =" << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 =" << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 =" << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	Printer ptr;
	ptr.SetString("Hello World!");
	ptr.ShowString();
}
void BuyerSellerMessagePassingFunction() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자" << endl;
	buyer.ShowBuyResult();
}
//void RectangleTestFunction() {
//	Point pos1 = { 0,4 };
//	Point pos2 = { 5, 9 };
//	Rectangle rec = { pos2, pos1 };
//	rec.ShowRecInfo();
//}
void CPointRectangleTestFunction()
{
	CPoint pos1;
	if (!pos1.InitMembers(-2, 4)) {
		cout << "초기화 실패" << endl;
	}
	if (!pos1.InitMembers(2, 4)) {
		cout << "초기화 실패" << endl;
	}
	CPoint pos2;
	if (!pos2.InitMembers(5, 9)) {
		cout << "초기화 실패" << endl;
	}

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "직사각형 초기화 실패" << endl;
	if (!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 실패" << endl;
	rec.ShowRecInfo();
}

void BuyerSellerMessagePassingFunctionTwo() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, -1);

	cout << "과일 판매자" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자" << endl;
	buyer.ShowBuyResult();
}

void RingTestFunction()
{
	Ring ring;
	Circle one, two;
	CPoint cpOne, cpTwo;
	cpOne.InitMembers(1, 1);
	cpTwo.InitMembers(2, 2);

	one.InitMembers(cpOne, 4);
	two.InitMembers(cpTwo, 9);

	ring.Init(one, two);
	ring.ShowRingInfo();

	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

}
int main() {
	RingTestFunction();
	return 0;

}