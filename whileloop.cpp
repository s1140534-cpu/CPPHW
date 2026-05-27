#include <iostream>
using namespace std;

int main()
{
    string password = "8877";
    string input;
	int count = 0;
	 
	while (count < 3) {
	    cout << "請輸入密碼\n";
		 cin >> input;
		 count++;
		 if (input == password) {
		 　　cout << "登入成功\n";
		     break;
		 }else {
		 	cout << "密碼錯誤\n";
	}

	if (count == 3) {
		cout << "已經嘗試三次"; 
	} 
    return 0;
}
