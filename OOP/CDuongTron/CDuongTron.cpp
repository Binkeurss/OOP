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

class CDuongTron
{
private:
	CDiem I;
	int R;
public:
	CDuongTron();
	CDuongTron(CDiem, int);
	CDuongTron(const CDuongTron&);
	~CDuongTron();
};

int main()
{
	CDuongTron a;
	CDuongTron b(CDiem(2, 4), 5);
	CDuongTron c(b);
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

CDiem::~CDiem()
{
	return;
}

CDuongTron::CDuongTron()
{
	I = CDiem();
	R = 0;
}

CDuongTron::CDuongTron(CDiem I, int R)
{
	this->I = I;
	this->R = R;
}

CDuongTron::CDuongTron(const CDuongTron& a)
{
	I = a.I;
	R = a.R;
}

CDuongTron::~CDuongTron()
{
	return;
}