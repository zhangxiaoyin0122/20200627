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
//	cout << &p._count << endl;  //_countָ��ͬһ���ַ
//	cout << &s._count << endl;
//	cout << &g._count << endl;
//}

//���μ̳д��ڵ�����:��������,������
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
//	a._name = "Bobo"; //������
//	cout << sizeof(a) << endl; //��������_name,��������
//}

//��������̳�
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
//�̳�:
class Car {
protected:
	string _colour = "��ɫ";
	string _num = "��A0RX11";
};
class BMW : public Car {
public:
	void Drive(){
		cout << "�ÿ�-�ٿ�" << endl;
	}
};
class Benz : public Car {
public:
	void Drive() {
		cout << "����-����" << endl;
	}
};
//���:
class Tire {
protected:
	string _brand = "Michelin"; // Ʒ��
	size_t _size = 17; //�ߴ�
};
class Car {
protected:
	string colour = "��ɫ";
	string _num = "��A0RX11";
	Tire _t;
};
int main(void) {
	test();
	return 0;
}