#include <iostream>
#include <string>
#include <ctime>
#define M 10
#define N 10
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	/*1) ������ ������ � ����������. ��������� ��� �����
	������� ���, ������� �������� �����. ������ ������ 20,
	����� 13� ������������� � ������ 22, ����� 1333�.*/

	string str, n_str, s;
	cin >> str;
	int x,c;	
	c = str.length();
	if (isdigit(str[0])) {
		for (int i = 0; i < c; i++) {
			s = str[i];
			x = stoi(s);
			for (int j = 0; j < x; j++) {
				n_str += s;
			}
		}
		cout << n_str;
	}
	else cout << "Error value";
	


	/*2) ������ ������ � ����� � ����������. ������� ���
	����� � ������, ������� �� �������� ���� ������, ���
	��������� �����. ����� ������������ � ������ ��������
	� ������ ���������� �.!,?:;�. ���� �� ������ ����������
	��� �������� ����� ���� ������ ���� ���������� ���
	������, �� ����� ���� ����� ���.*/

	/*string str, s, n_str, f;
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
	*/

	//cout << str << endl << s;


	/*���� ������� ����� ����� A(N, M). ������� �
	���������� ������� � ��� �����: ��������� � ������� 
	� ��������� � ������, �� ����������� ������� ��������� ��������� �������*/
	
	//================================ 4 ���� ������� ===============================
	
	/*srand(time(NULL));

	int arr[N][M]{ 0 }, max(0),maxi,maxj, sumCol(0), sumRow(0);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 100;

			if (arr[i][j] > max) {
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}

			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	cout << endl << "col: " << maxi << endl;
	cout << "row: " << maxj << endl;

	cout << endl << "���������� � �������: " << max << endl;

	for (int i = 0; i < M; i++) {
		sumCol += arr[maxi][i];
	}

	for (int i = 0; i < N; i++) {
		sumRow += arr[i][maxj];
	}

	cout << "sumCol: " << sumCol << endl;
	cout << "sumRow: " << sumRow << endl;*/

}