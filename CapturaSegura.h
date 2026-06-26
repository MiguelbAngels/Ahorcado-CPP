#ifndef CAPTURASEGURA_H_INCLUDED
#define CAPTURASEGURA_H_INCLUDED

#include <limits>

using namespace std;

template <typename tipo> void CapturaSegura (tipo &numero, const char solicitud[]){
    while (true) {
        cout << solicitud;
        cin >> numero;

        if (cin.bad()){
            cout << "Ocurri\xA2 un error fatal. El programa se cerrar\xA0..." << endl;
            system ("pause");
            exit(1);
        }
        if (cin.fail()){
            cout << "Tipo de dato inv\xA0lido, no es un n\xA3mero." << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
            continue;
        }
        if (cin.good()){
            cin.clear();
            cin.ignore(numeric_limits<int>::max(),'\n');
            return;
        }
    }
}

#endif // CAPTURASEGURA_H_INCLUDED
