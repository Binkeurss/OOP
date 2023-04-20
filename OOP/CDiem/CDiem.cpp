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

int main()
{
	CDiem a;
	CDiem b(2, 3);
	CDiem c(b);
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