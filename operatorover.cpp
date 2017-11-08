#include <iostream> 

class A {
  int a;
  int b;
  public:
  A(){a=0;b=0;}
  A(int x, int y):a(x),b(y) {}

  void print () {
std::cout<<a<< " .. "<<b<<std::endl;
  }
friend  A operator+(const A& ob1, const A& ob2){
    A sum;
    sum.a = ob1.a +ob2.a;
    sum.b = ob1.b + ob2.b;
    return sum;
  }
  friend std::ostream &operator<<(std::ostream &out, const A& ob){
    out <<ob.a<< " "<<ob.b <<std::endl;
    return out;
  }
  friend std::istream &operator>> ( std::istream &in, A&ob){
    in>> ob.a>>ob.b;
    return in;

  }

  };

  int main () {

    A ob1(10,10);

    A ob2(20,20);

    ob1.print();

    ob2.print();

    A ob3 =ob1+ob2;

    std::cout<<ob3<<std::endl;

    A ob4;

    std::cout<<"enter ob4"<<std::endl;

    std::cin>>ob4;

    ob3=ob4+ob1;

    std::cout<<ob3;

    return 0;

  }
