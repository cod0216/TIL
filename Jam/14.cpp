#include<iostream>
using namespace std;

class Cricle{
	int radius;
public:
	Circle();
	~Cirle(){}
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14*radius*radius;}
};

Cirlce::Circle(){
	radius = 1;
}

int main() {
	cout << "생성하고자 하는 우너의 개수?";
	int n, radius;
	cin >> n;
	if(n <= 0) return 0;
	Circle *pArray = new Circle [n];
	for(int i = 0; i<n; i++){
		cout << "원" << i+1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count = 0;
	Circle* p = pArray;
	for(int i = 0 ; i < n; i++) {
		cout << p-> getArea() << ' ';
		if(p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	delete [] pArray;
}

