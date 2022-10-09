#include <iostream>
#include <cstring>

using namespace std;

class sign {
private:
	string name;
	string password;

public:
	sign();
	~sign();
	void view();
	bool compare_name(string n);
	bool compare_password(string n);
	void Wsign();
};

sign::sign() {
	name = "Retro";
	password = "0";
	cout << "Welcome We Are World!" << endl;
	cout << "Are you ready with us?" << endl;
}

sign::~sign() {
	//cout << "Good Bye " << name << "!" << endl;
}

void sign::view() {
	cout << "가입된 회원의 정보" << endl;
	cout << "사용자 이름 " << name << endl;
	if(password != "0")
		cout << "패스워드 : " << password << endl;
}

bool sign::compare_name(string n) {
	return name == n;
}
	
bool sign::compare_password(string n) {
	return password == n;
}

void sign::Wsign() {
	cout << "사용자 이름 : ";
	cin >> name;
	cout << "PassWord : ";
	cin >> password;
}





int cnt = - 0;

int main() {
	cout << "debuging" << endl;
	sign user1;
	user1.Wsign();
	user1.view();
	string NAME = "0";
	string PassWord = "0";
	while(true){
		cout << " 사용자 정보를 입력합니다. " << endl;
		cout << " NAME : ";
		cin >> NAME;
		cout << " PassWord : ";
		cin >> PassWord;
		
		if(user1.compare_name(NAME) && user1.compare_password(PassWord))
		{
			cout << "Retro0님의 접속을 환영 합니다" << endl;
			break;
		}
		else
		{
			cnt++;
			cout << "등록된 사용자가 아닙니다." << endl;
		}
		if(cnt >4) {
			cout << "5회 이상 틀려 접속을 종료합니다." << endl;		
			return 0;
		}
	}
}

