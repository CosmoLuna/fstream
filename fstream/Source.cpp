// Персональный шаблон проекта С++
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
		while (in.get(sym)) // get берет символ из in и записывает в sym
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
		cout << "Файл открыт\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str + "\n";
		}
		cout << file << endl;
	}
	else
		cout << "Ошибка открытия файла\n";
*/

	/*if (fs.is_open()) {
		cout << "Файл открыт\n";
		string str;
		cout << "Введите строку\n";
		getline(cin, str);
		fs.seekg(10, ios::beg);
		fs << str << "\n";
		fs.seekg(0, ios::beg);
		getline(fs, str);
		cout << str << "\n";


	}
	else
		cout << "Ошибка открытия файла\n";

*/

	/*fs.close();

	file.insert(10, "\nNew Str\n");

	fs.open(path, ios::out | ios::in);

	if (fs.is_open()) {
		cout << "Файл открыт\n";
		fs << file << "\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "Ошибка\n";

	fs.close();
*/


	// Задача 1
	/*cout << "Задача 1\nВведите позицию: ";
	cin >> n;
	cout << "Содержимое файла с введенной позиции:\n" << subfile(path, n) << "\n";
*/

	// Задача 2
	cout << "Задача 2\n";
	ifstream indate;
	indate.open("date.txt");

	int day = 0, month = 0, year = 0;

	if (indate.is_open()) {
		cout << "Файл открыт\n";
		string date;
		indate >> date;
		cout << "Содержимое файла:\n" << date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		// cout << year << endl; // Получили из файла число (год)
		month = stoi(date.substr(date.find('.') + 1));

		day = stoi(date.substr(0, date.find('.')));
		// cout << day << endl;
		cout << "Day = " << day << "\nMonth = " << month << "\nYear = " << year << endl;
	}
	else
		cout << "Ошибка\n";
	indate.close();




	return 0;
}