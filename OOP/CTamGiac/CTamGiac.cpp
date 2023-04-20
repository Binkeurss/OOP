#include<iostream>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
public:
	CDiem();
	CDiem(int, int);
	CDiem(const CDiem&);
	~CDiem();
};

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	CTamGiac();
	CTamGiac(CDiem, CDiem, CDiem);
	CTamGiac(const CTamGiac&);
	~CTamGiac();
};

int main()
{
	CTamGiac a;
	CTamGiac b(CDiem(-2, 3), CDiem(3, -1), CDiem(0, 0));
	CTamGiac c(b);
	return 0;
}

CDiem::CDiem()
{
	x = 0;
	y = 0;
}

CDiem::CDiem(int x, int y)
{
	this->x = x;
	this->y = y;
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
}

CTamGiac::CTamGiac()
{
	A = CDiem();
	B = CDiem();
	C = CDiem();
}

CTamGiac::CTamGiac(CDiem A, CDiem B, CDiem C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

CTamGiac::CTamGiac(const CTamGiac& a)
{
	A = a.A;
	B = a.B;
	C = a.C;
}

CTamGiac::~CTamGiac()
{
	return;
}