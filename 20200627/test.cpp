#include <iostream>
#include <string>
using namespace std;

//class Person {
//public:
//	Person() {
//		_count++;
//	}
//protected:
//	string _name;
//public:
//	static int _count;
//};
//int Person::_count = 0;
//class Student :public Person {
//protected:
//	int _StuNum;
//};
//class Graduate :public Student {
//private:
//	string _s;
//};
//
//void test() {
//	Person p;
//	Student s;
//	Graduate g;
//	p._count = 1;
//	s._count = 2;
//	g._count = 3;
//	Person::_count = 4;
//	Student::_count = 5;
//	Graduate::_count = 6;
//	cout << &p._count << endl;  //_count指向同一块地址
//	cout << &s._count << endl;
//	cout << &g._count << endl;
//}

//菱形继承存在的问题:数据冗余,二义性
//class Person {
//public:
//	string _name;
//};
//
//class Student : public Person {
//public:
//	int _StuNum;
//};
//
//class Teacher : public Person {
//public:
//	int _id;
//};
//
//class Assistant : public Student, public Teacher {
//public:
//	string _major;
//};
//void test() {
//	Assistant a;
//	a._name = "Bobo"; //二义性
//	cout << sizeof(a) << endl; //存在两个_name,数据冗余
//}

//菱形虚拟继承
class A {
public:
	int _a;
};
class B : virtual public A {
public:
	int _b;
};
class C : virtual public A {
public:
	int _c;
};
class D :public B, public C {
public:
	int _d;
};

void test() {
	D d;
	d.B::_a = 1;
	d._b = 2;
	d.C::_a = 3;
	d._c = 4;
	d._d = 5;
}
//继承:
class Car {
protected:
	string _colour = "白色";
	string _num = "陕A0RX11";
};
class BMW : public Car {
public:
	void Drive(){
		cout << "好开-操控" << endl;
	}
};
class Benz : public Car {
public:
	void Drive() {
		cout << "好坐-舒适" << endl;
	}
};
//组合:
class Tire {
protected:
	string _brand = "Michelin"; // 品牌
	size_t _size = 17; //尺寸
};
class Car {
protected:
	string colour = "白色";
	string _num = "陕A0RX11";
	Tire _t;
};
int main(void) {
	test();
	return 0;
}