#include<iostream>
using namespace std;

class CDiemKhongGian
{
private:
	int x;
	int y;
	int z;
public:
	CDiemKhongGian();
	CDiemKhongGian(int, int, int);
	CDiemKhongGian(const CDiemKhongGian&);
	~CDiemKhongGian();
};

int main()
{
	CDiemKhongGian a;
	CDiemKhongGian b(1, 2, 3);
	CDiemKhongGian c(b);
	return 0;
}

CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
}

CDiemKhongGian::CDiemKhongGian(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

CDiemKhongGian::~CDiemKhongGian()
{
	return;
}