#include <iostream>
using namespace std;

// correct answer is 233168

int main(){
	int sum = 0	;
	for (int i = 1; i < 1000; i++) {
			if( i % 3 == 0 or i % 5 == 0)
	sum = sum + i; }
			
	cout << sum << "\n" ;
	
	return 0;
}
