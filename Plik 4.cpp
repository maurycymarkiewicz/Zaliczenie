#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <fstream>
using namespace std;





int main() {
	string str;
	cin >> str;
	ofstream file("plik.txt");
	//utworzenie pliku
	file << str;
	//zapisanie do pliku
	file.close();
	//zamknięcie pliku
}