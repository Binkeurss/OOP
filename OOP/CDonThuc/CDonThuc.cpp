#include<iostream>
using namespace std;

class CDonThuc
{
private:
	int SoMu;
	int HeSo;
public:
	CDonThuc();
	CDonThuc(int, int);
	CDonThuc(const CDonThuc&);
	~CDonThuc();
};

int main()
{
	CDonThuc a;
	CDonThuc b(1, 1);
	CDonThuc c(b);
	return 0;
}

CDonThuc::CDonThuc()
{
	SoMu = 0;
	HeSo = 0;
}

CDonThuc::CDonThuc(int SoMu, int HeSo)
{
	this->SoMu = SoMu;
	this->HeSo = HeSo;
}

CDonThuc::CDonThuc(const CDonThuc& a)
{
	SoMu = a.SoMu;
	HeSo = a.HeSo;
}

CDonThuc::~CDonThuc()
{
	return;
}