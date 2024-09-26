#include <iostream>
using namespace std;

int main() {
    int i=0, bilangan, sum = 0;
    cout << "Masukan bilangan: ";
    cin >> bilangan;
    sum += bilangan;
    
   	if (bilangan % 2 == 0) {
    	cout << bilangan << " - " ;
        bilangan = bilangan-2 ;
}
    
    while (bilangan>i) {
    	if (bilangan % 2 == 0) {
    		cout << bilangan << " - " ;
    		sum -= bilangan  ;
   }

    	bilangan -- ;
}
    sum -= bilangan ;
    cout << bilangan << " " ;
    cout << " = " << sum ;
    
    return 0;

}
