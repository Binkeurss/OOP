#include<iostream>
using namespace std;

class CDiem
{
private:
	int x;
	int y;
	int z;
public:
	CDiem();
	CDiem(int, int, int);
	CDiem(const CDiem&);
	~CDiem();
};

class CHinhCau
{
private:
	CDiem I;
	int R;
public:
	CHinhCau();
	CHinhCau(CDiem, int);
	CHinhCau(const CHinhCau&);
	~CHinhCau();
};

int main()
{
	CHinhCau a;
	CHinhCau b(CDiem(2, 4, 1), 3);
	CHinhCau c(b);
	return 0;
}

CDiem::CDiem()
{
	x = 0;
	y = 0;
	z = 0;
}

CDiem::CDiem(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

CDiem::CDiem(const CDiem& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

CDiem::~CDiem()
{
	return;
}

CHinhCau::CHinhCau()
{
	I = CDiem();
	R = 0;
}

CHinhCau::CHinhCau(CDiem I, int R)
{
	this->I = I;
	this->R = R;
}

CHinhCau::CHinhCau(const CHinhCau& a)
{
	I = a.I;
	R = a.R;
}

CHinhCau::~CHinhCau()
{
	return;
}