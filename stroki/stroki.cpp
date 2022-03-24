#include <iostream>
#include <string>
using namespace std;

bool pal(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	for (int i = 0; i < str.size() / 2; i++)
		if (str[i] != str[str.size() - (i + 1)])
			return false;
		else
			continue;
	return true;
}
int counter(string str) {
	cout << "Общее количество символов в строке = ";
	int count = 0;
	for (int i = 0; i < str.size(); i++)
		count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "ru");

	// Задача 1
	cout << "Задача 1\n";
	string str = "Hello world\n";
	cout << str;
	char sym = 'o';
	string final;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			final += sym;
	cout << final << "\n\n";

	// Задача 2
	cout << "Задача 2\n";
	cout << "Введите слово: ";
	string str1;
	getline(cin, str1);
	cout << pal(str1) << "\n\n";

	// Задача 3
	cout << "Задача 3\n";
	string str3;
	getline(cin, str3);
	cout << counter(str3);





	return 0;
}