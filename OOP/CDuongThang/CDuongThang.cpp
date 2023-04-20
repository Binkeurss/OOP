#include<iostream>
using namespace std;

class CDuongThang
{
private:
	int HeSoTuDo;
	int HeSo;
public:
	CDuongThang();
	CDuongThang(int, int);
	CDuongThang(const CDuongThang&);
	~CDuongThang();
};

int main()
{
	CDuongThang a;
	CDuongThang b(2, 4);
	CDuongThang c(b);
	return 0;
}

CDuongThang::CDuongThang()
{
	HeSo = 0;
	HeSoTuDo = 0;
}

CDuongThang::CDuongThang(int HeSoTuDo, int HeSo)
{
	this->HeSo = HeSo;
	this->HeSoTuDo = HeSoTuDo;
}

CDuongThang::~CDuongThang()
{
	return;
}