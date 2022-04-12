// ������������ ������ ������� �++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string subfile(string path, int pos) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {
		string str;
		in.seekg(pos, ios::beg);
		char sym;
		while (in.get(sym)) // get ����� ������ �� in � ���������� � sym
			str += sym;
		in.close();
		return str;
	}
	in.close();
	return "";
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string path = "file.txt";
	/*fstream fs;
	fs.open(path, ios::in | ios::out | ios::ate);

	string file;

	if (fs.is_open()) {
		cout << "���� ������\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str + "\n";
		}
		cout << file << endl;
	}
	else
		cout << "������ �������� �����\n";
*/

	/*if (fs.is_open()) {
		cout << "���� ������\n";
		string str;
		cout << "������� ������\n";
		getline(cin, str);
		fs.seekg(10, ios::beg);
		fs << str << "\n";
		fs.seekg(0, ios::beg);
		getline(fs, str);
		cout << str << "\n";


	}
	else
		cout << "������ �������� �����\n";

*/

	/*fs.close();

	file.insert(10, "\nNew Str\n");

	fs.open(path, ios::out | ios::in);

	if (fs.is_open()) {
		cout << "���� ������\n";
		fs << file << "\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "������\n";

	fs.close();
*/


	// ������ 1
	/*cout << "������ 1\n������� �������: ";
	cin >> n;
	cout << "���������� ����� � ��������� �������:\n" << subfile(path, n) << "\n";
*/

	// ������ 2
	cout << "������ 2\n";
	ifstream indate;
	indate.open("date.txt");

	int day = 0, month = 0, year = 0;

	if (indate.is_open()) {
		cout << "���� ������\n";
		string date;
		indate >> date;
		cout << "���������� �����:\n" << date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		// cout << year << endl; // �������� �� ����� ����� (���)
		month = stoi(date.substr(date.find('.') + 1));

		day = stoi(date.substr(0, date.find('.')));
		// cout << day << endl;
		cout << "Day = " << day << "\nMonth = " << month << "\nYear = " << year << endl;
	}
	else
		cout << "������\n";
	indate.close();




	return 0;
}