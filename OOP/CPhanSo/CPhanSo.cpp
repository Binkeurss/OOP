#include<iostream>
using namespace std;

class CPhanSo
{
private:
	int Tu;
	int Mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	CPhanSo(const CPhanSo&);
	~CPhanSo();
};

int main()
{
	CPhanSo a;
	CPhanSo b(3, 4);
	CPhanSo c(b);
	return 0;
}

CPhanSo::CPhanSo()
{
	Tu = 0;
	Mau = 1;
}

CPhanSo::CPhanSo(int TuTu, int MauMau)
{
	Tu = TuTu;
	Mau = MauMau;
}

CPhanSo::CPhanSo(const CPhanSo& a)
{
	Tu = a.Tu;
	Mau = a.Mau;
}

CPhanSo::~CPhanSo()
{
	return;
}