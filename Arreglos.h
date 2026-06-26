#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

template <typename tipo> bool Pertenece(tipo elemento, const tipo Arreglo[], int card);
template <typename tipo> bool Pertenece(tipo elemento, const tipo Arreglo[], int card);

template <typename tipo> void ImprimeArreglo(const tipo Arreglo[], int n, const char nom[]){
    cout << nom << "{ ";
    for (int i = 0; i < n; ++i){
        cout << Arreglo[i] << ", ";
    }
    cout << "\b\b }";
}

template <typename tipo> bool Pertenece(tipo elemento, const tipo Arreglo[], int card)
{
   for(int i = 0 ; i < card ; ++i)
      if(elemento == Arreglo[i]) return true;
   return false;
}

#endif // ARREGLOS_H_INCLUDED
