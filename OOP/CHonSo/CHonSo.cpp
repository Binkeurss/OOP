#include<iostream>
using namespace std;

class CHonSo
{
private:
	int Nguyen;
	int Tu;
	int Mau;
public:
	CHonSo();
	CHonSo(int, int, int);
	CHonSo(const CHonSo&);
	~CHonSo();
};

int main()
{
	CHonSo a;
	CHonSo b(3, 1, 4);
	CHonSo c(b);
	return 0;
}

CHonSo::CHonSo()
{
	Nguyen = 0;
	Tu = 0;
	Mau = 1;
}

CHonSo::CHonSo(int Nguyen, int Tu, int Mau)
{
	this->Nguyen = Nguyen;
	this->Tu = Tu;
	this->Mau = Mau;
}

CHonSo::CHonSo(const CHonSo& a)
{
	Nguyen = a.Nguyen;
	Tu = a.Tu;
	Mau = a.Mau;
}

CHonSo::~CHonSo()
{
	return;
}