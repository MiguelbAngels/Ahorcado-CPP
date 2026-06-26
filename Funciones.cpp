#include "Funciones.h"
#include "Gestion.h"

using namespace std;

void MarcoSimple(int ancho, int alto, int x, int y)
{
    // Parte superior
    gotoxy(x,y);
    cout << (char)ESI;
    for(int i = 1 ; i <= ancho - 2 ; ++i) cout << (char)BH;
    cout << (char)ESD;

    // Parte media
    for(int i = 1 ; i <= alto - 1 ; ++i){
        gotoxy(x,++y);
        cout << (char)BV;
        for(int j = 1 ; j <= alto - 1 ; ++j){
            gotoxy(x+ancho-1, y);
            cout << (char)BV;
        }
    }

    // Parte inferior
    gotoxy(x,++y);
    cout << (char)EII;
    for(int i = 1 ; i <= ancho - 2 ; ++i) cout << (char)BH;
    cout << (char)EID;
}
//-----------------------------------------------------------------------------------------------------------------------------

void DestruyeMarcoSimple(int ancho, int alto, int x, int y)
{
    gotoxy(x,y);

    // Parte superior
    for(int i = 1 ; i <= ancho ; ++i) cout << ' ';

    // Parte media
     for(int i = 1 ; i <= alto - 1 ; ++i){
        gotoxy(x,++y);
        cout << ' ';
        for(int j = 1 ; j <= alto - 1 ; ++j){
            gotoxy(x+ancho-1, y);
            cout << ' ';
        }
    }

    // Parte inferior
    gotoxy(x,++y);
    for(int i = 1 ; i <= ancho ; ++i) cout << ' ';
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Función para establecer color a cualquier elemento.
void EstableceColor(miColor colorFondo, miColor colorTexto)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// Función para obtener color original de la consola.
WORD ObtenerColorOriginal()
{
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO *ConsoleInfo = new CONSOLE_SCREEN_BUFFER_INFO();
    GetConsoleScreenBufferInfo(hConsoleHandle, ConsoleInfo);
    WORD original = ConsoleInfo->wAttributes;
    delete ConsoleInfo;
    return original;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

// Función para definir la posición de un objeto.
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x-1,y-1};
    SetConsoleCursorPosition(handle,coord);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

void TamVentana(int Ancho, int Alto)
{
    _COORD coord;
    coord.X = Ancho;
    coord.Y = Alto;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Alto - 1;
    Rect.Right = Ancho - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(Handle, coord);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

void CambiaCursor(estadoCursor estado, modoCursor modo)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;

    ConCurInf.dwSize = modo;
    ConCurInf.bVisible = estado;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

void ImprimeArchivo (const char *archivo, int x, int y)
{
    string linea;

    setlocale(LC_ALL, "spanish");
    ifstream myfile(archivo);
    if (myfile.is_open())
    {
        while ( getline (myfile,linea) )
        {
            gotoxy(x,y++);
            cout << linea;
        }

        myfile.close();
    }


    else cout << "Error, Archivo \"" << &archivo << "\"faltante";
    setlocale(LC_ALL, "C");
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

void JuegoAhorcado(int nivel){

    system("cls");

    string Frase;

    EleccionDeFrase(Frase, nivel);

    char *FraseCadena = const_cast<char*>(Frase.c_str());

    system("cls");

    ImprimeAhorcado(0);

    int Cantidad = 0;//La cantidad de caracteres de la palabra

    Cantidad = strlen(FraseCadena);//Se calcula la cantidad de caracteres en la variable
    gotoxy(2, 8);

    for(int i = 1; i <= Cantidad; ++i){
        if(FraseCadena[i] != '\0') cout << "*";
        else cout << " ";
    }

    CompararArreglo(FraseCadena, Cantidad, nivel);
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

void CompararArreglo(char Arreglo[], int Cantidad, int nivel){
    //bool repetido;
    int errores = 0;//Contador de errores, se inicializa a fuera para que no se reinicie dentro del ciclo y perder la cantida de errores
    char Espacios[] = " ";//Comparador
    int CantidadDeEspacios = 0;//Contador de espacios, se inicia afuera porque se utilizara para restarlo a la cantidad de caracteres

    //
    for(int posicion = 0 ; posicion < Cantidad ; ++posicion)//Calcula la cantidad de espacios de la palabra y los imprime
                 if(Espacios[0] == Arreglo[posicion])
                        {
                            gotoxy(posicion + 1, 8);//coloca en el lugar en el que va el espacio
                            cout << " ";//imprime un espacio
                            ++CantidadDeEspacios;//Suma uno a la cantidad de espacios
                        }
    //
    gotoxy(1,8);
    cout << "*";//Imprime un guion bajo donde va el ahorcado después de imprimir los espacios en el lugar donde aparece la palabra

    if(nivel == 2) errores = -2;//Según el nivel da más cantidad intentos o menos
    if(nivel == 1) errores = -7;//Según el nivel da más cantidad intentos
    if(nivel == 3) errores = 0;//Según el nivel da más cantidad intentos o menos

    gotoxy(22, 2);
    cout << "Letras ingresadas por el usuario";
    int PosicionLetrasIngresadas = 22;//Es la posición en X en donde se imprimiran las letras ya ingresadas
    char Respuesta [13]; //La parte donde se guardara la respuesta
    int ContadorDeErroresAImprimir = 0;//Los errores que se imprimiran al final del a juego
    int i = 0;//Sera el indice que se utilizara para guardar las letras/palabras ya ingresadas dentro de un arreglo para que no se puedan repetir
    int const ErroresPermitidos = 6;//se inicializan los errores permitidos aquí para facilitar el manejo, son los errores desde donde se comienza a imprimir
                              //el mono y a parte los errores nivel experto
    int correcto = 0;//Se inicializa a fuera porque se ocupara al final del juego
    int Salvavidas;
    for (; errores != ErroresPermitidos; ){
        do{
            gotoxy(1,11);
            cout << "Ingresa un caracter que pienses este dentro de la frase oculta (todo esta en min\243sculas): ";
            cin >> Respuesta[i];
            getchar();
            if(Pertenece(Respuesta[i],Respuesta, i)){
                gotoxy( 1, 11);
            }
        }while(Pertenece(Respuesta[i], Respuesta, i) && Respuesta != Espacios);//Aqui se captura la respuesta del usuario y se verifica
                                                                               //que no lo haya ingresado anteriormente para no procesarlo

        if(Pertenece(Respuesta[i], Arreglo, Cantidad)){//Aquí se evalua si la letra/palabra ingresada pertenece alguna letra o palabra de la respuesta
            for(int posicion = 0 ; posicion < Cantidad ; ++posicion)
                if(Respuesta[i] == Arreglo[posicion]){//Aqui se busca la posición de la letra para así colocarla en la interfaz de juego
                    gotoxy(posicion + 1, 8);//Se coloca en la posición en la que va
                    cout << Respuesta[i];//Se imprime
                    ++correcto;//Se suma 1 a la cantidad de respuestas correctas

                }
            gotoxy( 1, 13);//Se situa dos espacios de bajo
            cout << "Correcto!!  ";//Se imprime que es la respuesta correcta
        }
        else{//En contrario si no forma parte de la palabras/palabras se hace lo siguiente
            gotoxy(1, 13);//coloca el cursor dos espacios de bajo donde se ingresa la letra/palabra
            cout << "Incorrecto!";//Se imprime que se equivoco
            ++errores;//Se suma 1 al contador de errores
            ++ContadorDeErroresAImprimir;
        }
        gotoxy(PosicionLetrasIngresadas, 3);
        cout << Respuesta[i] << ", ";
        PosicionLetrasIngresadas += 3;
        Salvavidas = errores;
        if((errores == ErroresPermitidos) || (correcto == Cantidad - CantidadDeEspacios))
            cout << "\b\b ";
        if(errores > 0) ImprimeAhorcado(errores);
        if((errores == ErroresPermitidos) || (correcto == Cantidad - CantidadDeEspacios)){//Aquí se finaliza el juego y se imprime la cantidad de errores
            gotoxy(1, 15);
            cout << "La cantidad de veces que te equivocaste es: " << ContadorDeErroresAImprimir << endl;
            cout << "La palabra correcta es: " << Arreglo << endl << endl;
            errores = ErroresPermitidos;
        }
        ++i;
    }
    cout << Salvavidas;
    system("pause");
    system("cls");
    errores = Salvavidas;
    if(errores == ErroresPermitidos) Perdiste();
    if(correcto == Cantidad - CantidadDeEspacios) Ganaste();
    gotoxy(1,25);
    system("pause");
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

template <typename tipo> void ImprimeArreglo(const tipo Arreglo[], int n, const char nom[]){
    cout << nom << "{ ";
    for (int i = 0; i < n; ++i){
        cout << Arreglo[i] << ", ";
    }
    cout << "\b\b }";
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

template <typename tipo> bool Pertenece(tipo elemento, const tipo Arreglo[], int card)
{
   for(int i = 0 ; i < card ; ++i)
      if(elemento == Arreglo[i]) return true;
   return false;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

void ImprimeAhorcado(int opcion){
  gotoxy(1, 1);
  switch(opcion){
        case 6:cout << "_____\n|   |\n|   O\n|  /|\\\n|  / \\\n|__________________"<<endl<<endl<<endl;
            break;
        case 0: cout << "_____\n|   |\n|   \n|  \n|  \n|__________________"<<endl<<endl<<endl;
            break;
        case 1:cout << "_____\n|   |\n|   O\n|  \n|  \n|__________________"<<endl<<endl<<endl;
            break;
        case 2:cout << "_____\n|   |\n|   O\n|   |\n|  \n|__________________"<<endl<<endl<<endl;
            break;
        case 3:cout << "_____\n|   |\n|   O\n|  /|\n|  \n|__________________"<<endl<<endl<<endl;
            break;
        case 4:cout << "_____\n|   |\n|   O\n|  /|\\\n|  \n|__________________"<<endl<<endl<<endl;
            break;
        case 5:cout << "_____\n|   |\n|   O\n|  /|\\\n|  /\n|__________________"<<endl<<endl<<endl;
            break;
  }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

void EleccionDeFrase(string &Frase,int const nivel){

   int Categoria;
   int Grado = nivel;

   switch(Grado){//Se captura la frase
      case PRINCIPIANTE:
           cout << "Ingresa (1) para elegir la categor\241a verduras" << endl;
           cout << "Ingresa (2) para elegir la categor\241a frutas" << endl;
           cout << "Ingresa (3) para elegir la categor\241a colores y figuras" << endl;
           break;
      case MEDIO:
           cout << "Ingresa (1) para elegir la categor\241a series" << endl;
           cout << "Ingresa (2) para elegir la categor\241a peliculas" << endl;
           cout << "Ingresa (3) para elegir la categor\241a animales" << endl;
           break;
      case EXPERTO:
           cout << "Ingresa (1) para elegir la categor\241a gaming" << endl;
           cout << "Ingresa (2) para elegir la categor\241a dinosaurios" << endl;
           cout << "Ingresa (3) para elegir la categor\241a ciudades o pa\241ses" << endl;
      break;
   }
   do{
         CapturaSegura(Categoria, "Ingresa la elecci\242n de categor\241a: ");
   }while(Categoria < 1 || Categoria > 3);
   int Palabra;
   //Se crea un random
   srand(time(NULL));
   Palabra = (rand ()%3)+1;

   int Dificultad = nivel;

   switch(Dificultad){//Se captura la frase
    case 1:
         if(Categoria == 1){
                if(Palabra == 1) Frase = "acedera";
                if(Palabra == 2) Frase = "alcachofa";
                if(Palabra == 3) Frase = "calabaza";
		    }
          if(Categoria == 2){
                if(Palabra == 1) Frase = "aguacate";
                if(Palabra == 2) Frase = "coco";
                if(Palabra == 3) Frase = "fresa";
          }
          if(Categoria == 3){
                if(Palabra == 1) Frase = "morado";
                if(Palabra == 2) Frase = "rojo";
                if(Palabra == 3) Frase = "azul";
          }
          break;
    case 2:
        if(Categoria == 1){
                if(Palabra == 1) Frase = "dr.house";
                if(Palabra == 2) Frase = "thundercats";
                if(Palabra == 3) Frase = "friends";
		    }
          if(Categoria == 2){
                if(Palabra == 1) Frase = "titanic";
                if(Palabra == 2) Frase = "300";
                if(Palabra == 3) Frase = "zombieland";
          }
          if(Categoria == 3){
                if(Palabra == 1) Frase = "camello";
                if(Palabra == 2) Frase = "elefante";
                if(Palabra == 3) Frase = "erizo";
          }
          break;
    case 3:
          if(Categoria == 1){
                if(Palabra == 1) Frase = "overwatch";
                if(Palabra == 2) Frase = "pokemon";
                if(Palabra == 3) Frase = "snake";
		    }
          if(Categoria == 2){
                if(Palabra == 1) Frase = "ictiosaurios";
                if(Palabra == 2) Frase = "pliosaurios";
                if(Palabra == 3) Frase = "velociraptor";
          }
          if(Categoria == 3){
                if(Palabra == 1) Frase = "ciudad de mexico";
                if(Palabra == 2) Frase = "santiago de chile";
                if(Palabra == 3) Frase = "san pedro";
          }
          break;
   }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------

