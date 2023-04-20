#include<iostream>
using namespace std;

class CThoiGian
{
private:
	int Giay;
	int Phut;
	int Gio;
public:
	CThoiGian();
	CThoiGian(int, int, int);
	CThoiGian(const CThoiGian&);
	~CThoiGian();
};

int main()
{
	CThoiGian a;
	CThoiGian b(32, 11, 23);
	CThoiGian c(b);
	return 0;
}

CThoiGian::CThoiGian()
{
	Giay = 1;
	Phut = 1;
	Gio = 1;
}

CThoiGian::CThoiGian(int Giay, int Phut, int Gio)
{
	this->Giay = Giay;
	this->Phut = Phut;
	this->Gio = Gio;
}

CThoiGian::CThoiGian(const CThoiGian& a)
{
	Giay = a.Giay;
	Phut = a.Phut;
	Gio = a.Gio;
}

CThoiGian::~CThoiGian()
{
	return;
}