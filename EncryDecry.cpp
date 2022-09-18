#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string username;
	string password;
	ofstream server;
	ifstream check;

	check.open("Origin.txt");
	server.open("Origin.txt", ios::app);

	cout << "Create your account" << endl; 
	cout << "Username	: ";
	cin >> username;
	cout << "Password	: ";
	cin >> password;
	
	int Passionate;
	Passionate = password.length();

	cout << endl;

	//Encryption
	for (int i = 0; Passionate >= i; i++) {

		password[i] = password[i] + 10;

	}

	cout << "Password Encrypted : ";
	cout << password;

	server << username << ";" << password << endl;

	cout << "\n------------------------------";
	cout << "\nYour Account has been created.\n";
	cout << "------------------------------";

	//Decryption
	for (int i = 0; Passionate >= i; i++) {

		password[i] = password[i] - 10;

	}

	cout << "\n\nPassword Decrypted	: ";
	cout << password << endl;

	server.close();
	check.close();

	return 0;
}