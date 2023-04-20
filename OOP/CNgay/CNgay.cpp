#include<iostream>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	CNgay();
	CNgay(int, int, int);
	CNgay(const CNgay&);
	~CNgay();
};

int main()
{
	CNgay a;
	CNgay b(27, 11, 2004);
	CNgay c(b);
	return 0;
}

CNgay::CNgay()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;
}

CNgay::CNgay(int Ngay, int Thang, int Nam)
{
	this->Ngay = Ngay;
	this->Thang = Thang;
	this->Nam = Nam;
}

CNgay::~CNgay()
{
	return;
}