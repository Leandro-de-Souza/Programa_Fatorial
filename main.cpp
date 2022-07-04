#include <iostream>

using namespace std;

int main()
{

        int N, i, fatorial;

        cout << "Digite o valor de N: ";
        cin >> N;

        fatorial = 1;

        for (i = N; i > 0; i--) {
         fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;


    return 0;
}
