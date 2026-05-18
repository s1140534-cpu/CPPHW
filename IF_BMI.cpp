#include <iostream>
using namespace std;

int main(){
    float weight, height, bmi;
    cout << "(請輸入體重):";
    cin >> weight;
    cout << "(請輸入身高):";
    cin >> height;
    // bmi 演算法 
    height = height / 100;
    bmi = weight / (height * height);
    cout << "BMI值" << bmi << "\n";
    if (bmi < 18.5 ) {
     	cout << "體重過輕"; 
	}else if (bmi < 24.5 ) {
		cout << "體重正常"; 
	}else { 
	    cout << "體重過重";
    } 
	
	return 0;
}
