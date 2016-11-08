#include<iostream>
using namespace std;
class Parent
{
private:
	int varS;
	void PrintVarS();
public:
	int varP;
	void PrintVarP();
	Parent() { varS = 5; varP = 10; }

};
void Parent::PrintVarP()
{
	cout << "P = " << varP << endl;
}
void Parent::PrintVarS()
{
	cout << "S = " << varS << endl;
}
class Child : public Parent
{
public:
	void SetP(int a) { varP = a; }

};

int main()
{
	Parent p;
	p.PrintVarP();
	Child c;
	c.PrintVarP();
	c.SetP(0);
	c.PrintVarP();
	p.PrintVarP();
	system("pause");

	return 0;
}