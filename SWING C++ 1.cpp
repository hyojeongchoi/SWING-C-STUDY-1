#include<iostream>
#include <string>
using namespace std;//std�� �տ� ��� ���̴� ������ �����ϱ� ���ؼ� ���
int main()
{
	char �̸�[100];// �پ��� �Լ��� ����ϱ� ���ؼ� cin.getline �Լ��� �����߽��ϴ�.
	cout << "�̸��� �Է��ϼ���:";  
	cin.getline(�̸�,100);

	string ����;//������ �Է��ϴ� ����� �� �ٸ��⿡ ���ڿ� ũ�⿡ ������ ���� string Ŭ���� ����� ����߽��ϴ�.
	cout << "������ �Է��ϼ���:";
	getline(cin, ����);

	string ����;
	cout << "���̸� �Է��ϼ���:";
	getline(cin, ����);

	string �а�;
	cout << "�Ҽ� �а��� �Է��ϼ���:";
	getline(cin, �а�);

	cout << "<ȸ������>" << '\n';
	cout << "�̸�:" << �̸� << '\n';
	cout << "����:" << ���� << '\n';
	cout << "����:" << ���� << '\n';
	cout << "�Ҽ� �а�:" << �а� << '\n';
	



}
