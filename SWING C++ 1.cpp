#include<iostream>
#include <string>
using namespace std;//std를 앞에 계속 붙이는 과정을 생략하기 위해서 사용
int main()
{
	char 이름[100];// 다양한 함수를 사용하기 위해서 cin.getline 함수를 설정했습니다.
	cout << "이름을 입력하세요:";  
	cin.getline(이름,100);

	string 생일;//생일을 입력하는 방식이 다 다르기에 문자열 크기에 제약이 없는 string 클래스 방식을 사용했습니다.
	cout << "생일을 입력하세요:";
	getline(cin, 생일);

	string 나이;
	cout << "나이를 입력하세요:";
	getline(cin, 나이);

	string 학과;
	cout << "소속 학과를 입력하세요:";
	getline(cin, 학과);

	cout << "<회원정보>" << '\n';
	cout << "이름:" << 이름 << '\n';
	cout << "생일:" << 생일 << '\n';
	cout << "나이:" << 나이 << '\n';
	cout << "소속 학과:" << 학과 << '\n';
	



}
