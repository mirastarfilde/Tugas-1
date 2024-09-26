#include <iostream>
using namespace std;
int main() 
{
    int N, jumlah = 0;
    cout << "Masukan banyak nilai: ";
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cout << i * 7;
        (i < N) cout << " + ";
        jumlah += i * 7;
    }
    cout << " = " << jumlah << endl;
    
    cout << "Rerata: " << jumlah << " / " << N << " = " << jumlah / N << endl;

    return 0;
}
