#include <iostream>
#include <string>
#define N 10
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	/*1) ������ ������ � ����������. ��������� ��� �����
	������� ���, ������� �������� �����. ������ ������ 20,
	����� 13� ������������� � ������ 22, ����� 1333�.*/

	/*string str, n_str, s;
	cin >> str;
	int y, x,c;		// = stoi(str);
	c = str.length();
	for (int i = 0; i < c; i++) {
		s = str[i];
		x = stoi(s);
		for (int j = 0; j < x; j++) {
			n_str += s;
		}
	}
	cout << n_str;*/


	/*2) ������ ������ � ����� � ����������. ������� ���
	����� � ������, ������� �� �������� ���� ������, ���
	��������� �����. ����� ������������ � ������ ��������
	� ������ ���������� �.!,?:;�. ���� �� ������ ����������
	��� �������� ����� ���� ������ ���� ���������� ���
	������, �� ����� ���� ����� ���.*/

	string str, s, n_str, f;
	cout << "������� ������" << endl; getline(cin, str);
	cout << "������� �����" << endl; cin >> f;
	int b, c = str.length(); cout << endl;
	for (int i = 0; i < c; i++) {
		s = str[i];
		if (s != " ") {
			n_str += str[i];
		}
		else {
			//for (int j = 0; j > n_str.length(); j++) {
			//	if (n_str[j]>f[j]) b++;
			//  else if (n_str[j]<f[j]) b--;
			//} if (b>0) cout<<n_str<<endl;
			if (n_str < f) {
				cout << n_str << endl;
			}
			n_str = "\0";
		}
	}


	//cout << str << endl << s;


}