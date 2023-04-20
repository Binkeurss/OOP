#include<iostream>
using namespace std;

class CSoPhuc
{
private:
	int Thuc;
	int Ao;
public:
	CSoPhuc();
	CSoPhuc(int, int);
	CSoPhuc(const CSoPhuc&);
	~CSoPhuc();
};

int main()
{
	CSoPhuc a;
	CSoPhuc b(3, 4);
	CSoPhuc c(b);
	return 0;
}

CSoPhuc::CSoPhuc()
{
	Thuc = 0;
	Ao = 0;
}

CSoPhuc::CSoPhuc(int Thuc, int Ao)
{
	this->Thuc = Thuc;
	this->Ao = Ao;
}

CSoPhuc::CSoPhuc(const CSoPhuc& a)
{
	Thuc = a.Thuc;
	Ao = a.Ao;
}

CSoPhuc::~CSoPhuc()
{
	return;
}