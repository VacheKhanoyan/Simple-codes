#include<iostream>
using namespace std;
 
class A {
private:
    int a;
    int b;
    int c;
public:
    A(int value1 , int value2, int value3 )  {a =value1; b = value2;c=value3;}
     
       void print() { cout << a << " - " << b <<" - "<< c<< endl; }
 
friend A operator + (A const &t1, A const &t2);
friend A operator - (A const &t1, A const &t2);
friend A operator * (A const &t1, A const &t2);
friend A operator / (A const &t1, A const &t2);

};
 
 
A operator + (A const &t1, A const &t2)
{
     return A(t1.a + t2.a, t1.b + t2.b, t1.c+t2.c);
}
 A operator - (A const &t1, A const &t2)
{
     return A(t1.a - t2.a, t1.b - t2.b, t1.c - t2.c);
}
 A operator * (A const &t1, A const &t2)
{
     return A(t1.a * t2.a, t1.b * t2.b, t1.c * t2.c);
}
A operator / (A const &t1, A const &t2)
{
   if( t2.a==0, t2.b==0, t2.c==0) 
   return A(0,0,0);
   else
     return A(t1.a / t2.a, t1.b / t2.b, t1.c / t2.c);
}
 
int main()
{
    A ob1(10, 5, 9);
    A ob2(0, 2, 0);
    A ob3 = ob1 + ob2; 
    A ob4 = ob3 - ob2;
    A ob5 = ob1 * ob2;
    A ob6 = ob6/ob2;
    ob3.print();
    ob4.print();
    ob5.print();
    ob6.print();
    return 0;
}
