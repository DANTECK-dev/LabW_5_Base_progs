#include <iostream>
#include <string>
#define N 10
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	/*1) Ввести строку с клавиатуры. Повторить все цифры
	столько раз, сколько значение цифры. Пример «Слово 20,
	слово 13» преобразуется в «Слово 22, слово 1333».*/

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


	/*2) Ввести строку и слово с клавиатуры. Найдите все
	слова в строке, которые по алфавиту идут раньше, чем
	введенное слово. Слова определяются с учетом пробелов
	и знаков препинания «.!,?:;». Если за знаком препинания
	или пробелом сразу идет другой знак препинания или
	пробел, то между ними слова нет.*/

	string str, s, n_str, f;
	cout << "Введите строку" << endl; getline(cin, str);
	cout << "Введите слово" << endl; cin >> f;
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