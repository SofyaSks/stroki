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
	cout << "����� ���������� �������� � ������ = ";
	int count = 0;
	for (int i = 0; i < str.size(); i++)
		count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "ru");

	// ������ 1
	cout << "������ 1\n";
	string str = "Hello world\n";
	cout << str;
	char sym = 'o';
	string final;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == sym)
			final += sym;
	cout << final << "\n\n";

	// ������ 2
	cout << "������ 2\n";
	cout << "������� �����: ";
	string str1;
	getline(cin, str1);
	cout << pal(str1) << "\n\n";

	// ������ 3
	cout << "������ 3\n";
	string str3;
	getline(cin, str3);
	cout << counter(str3);





	return 0;
}