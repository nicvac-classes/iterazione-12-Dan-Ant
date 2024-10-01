#include <iostream>
using namespace std;

int main() {
    float cm, r, t, i;
    cout << "Quanto costa la moto?" << endl;
    cin >> cm;
    cout << "Quanti sono i tuoi risparmi?" << endl;
    cin >> r;
    i = i +1;
while (cm>r)
{
    cout << "Ti servono ancora " << cm-r << " euro" << endl;
    cout << "Quanti sondi hai risparmiato oggi?" << endl;
    cin >> t;
    r=r+t;
    i=i+1;

}
cout << "Sei riuscito a comprare la moto, hai accumulato un totale di " << r << " risparmi per un totale di " << i << " volte. E te ne rimangono " << r-cm << endl;

}


