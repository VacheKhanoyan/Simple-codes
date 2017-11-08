#include <iostream>
class A
{
private:
	int a, b;
public:
	
	A(int value1, int value2) {
		a=value1;
		b=value2;
	}

	void print() const {
	    std::cout<<a<<"-"<<b<<std::endl;
	}

	A & operator=(const A &t);
};

A & A::operator=(const A& t) {
	if(this ==&t)
	return *this;
	else {
	a = t.a;
	b = t.b;
	return *this;
	}
}

int main()
{
	A ob1(5,9);
	A ob2(15,23);
	ob1.print(); 
	ob2.print();
	ob2 = ob1;
	ob2.print();
return 0;
}
