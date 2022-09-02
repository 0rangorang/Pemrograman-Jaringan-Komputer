#include <iostream>

using namespace std;

int main() {

	string usernamePassword, temp;
	int lengthUser, lengthPass;

	cout << "Login akun" << endl;
	cout << "DIMOHON UNTUK TIDAK ADA SPASI!!!" << endl << endl;
	
	cout << "Username : ";
	cin >> usernamePassword;

	cout << "Password : ";
	cin >> temp;

	lengthUser = usernamePassword.length();
	lengthPass = temp.length();
	usernamePassword = usernamePassword + temp;

	cout << endl << endl;
	system("pause");
	system("cls");

	cout << "Username anda : ";
	for (int i = 0; i < (lengthUser); i++) {
		cout << usernamePassword[i];
		
		if (i == lengthUser - 1) {
			cout << "\nPassword anda : ";
			for (int j = i; j < (lengthUser + lengthPass - 1); j++) {
				cout << usernamePassword[j + 1];
			}
		}
	}

	usernamePassword = temp = "";
	lengthUser = lengthPass = 0;

	cout << endl << endl;

	system("Pause");
	return 0;
}