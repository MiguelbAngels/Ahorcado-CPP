#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <cctype>
#include <fstream>
#include <locale.h>
#include <limits>
#include <windows.h>
#include <time.h>

#define MAX 100
using namespace std;

// Símbolos necesarios para hacer el marco simple.
enum simbSimple{BV = 179, ESD = 191, EII, BH = 196, EID = 217, ESI};

//-----------------------------------------------------------------------------------------------------------------------------
// Colores para determinar el texto, símbolo y fondo.
enum miColor{NEGRO, AZUL, VERDE, AGUAMARINA, ROJO, PURPURA, AMARILLO, GRISCLARO, GRIS, AZULCLARO, VERDECLARO, AGUAMARINACLARO, ROJOCLARO,
     PURPURACLARO, AMARILLOCLARO, BLANCO};

//-----------------------------------------------------------------------------------------------------------------------------
// Este establece el color de los símbolos, fondo y texto.
/** @brief Establece el color de fondo y letras.
 *
 * @param colorFondo Establece el color del fondo de la consola.
 *
 * @param colorTexto se establece el color del texto.
*/
void EstableceColor(miColor colorFondo, miColor colorTexto);

//-----------------------------------------------------------------------------------------------------------------------------
// Función que hace el marco simple.
/** @brief Pinta marco simple para seleccionar las opciones.
 *
 * @param ancho Establece el ancho del marco.
 *
 * @param alto Establece la altura del marco.
 *
 * @param x define la posicion horizontal.
 *
 * @param y define la posicion en vertical.
 *
 * @pre x y y sean enteros positivos
*/
void MarcoSimple(int ancho, int alto, int x, int y);

//-----------------------------------------------------------------------------------------------------------------------------
// Establece el tamaño de la ventana de ejecución
/** @brief Establece el tamaño de la pantalla.
 *
 * @param Ancho Establece el ancho de la pantalla.
 *
 * @param Alto Establece el alto de la pantalla.
 *
 * @pre x y y sean enteros positivos
*/
void TamVentana(int Ancho, int Alto);

//-----------------------------------------------------------------------------------------------------------------------------
// Mueve el cursor a la posición (x,y)
/** @brief Posiciona las impresiones en la pantalla.
 *
 * @param Establece la posición en horizontal.
 *
 * @param Establece la posición en vértical.
 *
 * @pre x y y sean enteros positivos
*/
void gotoxy(int x, int y);

//-----------------------------------------------------------------------------------------------------------------------------
// Estados del cursor
enum estadoCursor{APAGADO, ENCENDIDO};

//-----------------------------------------------------------------------------------------------------------------------------
// Modos del cursor
enum modoCursor{MINI = 5, NORMAL = 20, SOLIDO = 80};

//-----------------------------------------------------------------------------------------------------------------------------
// Para cambiar el estado del cursor
/** @brief
 *
*/
void CambiaCursor(estadoCursor estado, modoCursor modo = NORMAL);

//-----------------------------------------------------------------------------------------------------------------------------
/** @brief Borra marco simple.
 *
 * @param ancho Establece el ancho a borrar el marco.
 *
 * @param alto Establece el alto a borrar del marco.
 *
 * @param x Establece la posición a colocarse en horizontal.
 *
 * @param y Establece la posición a colocarse en vértical.
 *
 * @pre x y y sean enteros positivos
*/
void DestruyeMarcoSimple(int ancho, int alto, int x, int y);

//-----------------------------------------------------------------------------------------------------------------------------
/** @brief Imprime el archivo texto en formato txt en lenguaje español.
 *
 * @param archivo Manda el nombre del archivo.
 *
 * @param x Posición en horizontal.
 *
 * @param y Posición en vertical
 *
 * @pre x y y tienen que ser enteros positivos.
*/
void ImprimeArchivo (const char *archivo, int x, int y);

/** @brief Imprime un arreglo
 *
 *  @param Arreglo El arreglo a imprimir.
 *
 *  @param n La cantidad de caracteres dentro del arreglo.
 *
 *  @return El número introducido por el usuario.
 *
 *  @return nom Nombre del archivo
*/
template <typename tipo> void ImprimeArreglo(const tipo Arreglo[], int n, const char nom[]);//

/** @brief Captura un número (de cualquier tipo) de manera segura.
 *
 *  @param numero La variable donde se guardará el número capturado.
 *
 *  @param solicitud El mensaje que se despliegará para pedir un número al usuario.
 *
 *  @return El número introducido por el usuario.
*/
template <typename tipo>
void CapturaSegura (tipo &numero, const char solicitud[])
{
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

/** @brief Función que identifica si el caracter ingresado por el usuario pertenece o no a un arreglo
 *
 *  @param elemento Es el caracter que se comparara con el arreglo.
 *
 *  @param Arreglo La palabra que se comparara con la letra ingresada por el usuario
 *
 *  @param card La cantidad de caracteres dentro del arreglo por el momento.
 *
 *  @return booleano que verifica si la palabra pertenece al arreglo.
*/
template <typename tipo> bool Pertenece(tipo elemento, const tipo Arreglo[], int card);//

/** @brief Coloca el puntero en una localización especifica.
 *
 *  @param X Posición en X donde se desea colocar el puntero.
 *
 *  @param Y Posición en Y donde se desea colocar el puntero.
 *
*/
void gotoxy(int x,int y);//

/** @brief Captura un número (de cualquier tipo) de manera segura.
 *
 *  @param elemento La variable donde se guardará el número capturado.
 *
 *  @param Arreglo El mensaje que se despliegará para pedir un número al usuario.
 *
 *  @param card La cantidad de caracteres dentro del arreglo por el momento.
 *
 *  @return booleano que verifica si la palabra pertenece al arreglo.
*/
void EleccionDeFrase(string &Frase,int const nivel);//

/** @brief Imprime las partes del ahorcado según los errores.
 *
 *  @param opcion la cantidad de errores que lleva el usuario.
 *
*/
void ImprimeAhorcado(int opcion);//

/** @brief Es en donde se comienza a jugar y a comparar la letra escondida con la ingresada con el usuario.
 *
 *  @param Arreglo La palabra que se tendra que adivinar.
 *
 *  @param Cantidad La cantidad de letras que contiene la palabra o Arreglo.
 *
 *  @param nivel El nivel en el que se inicio el juego.
 *
*/
void CompararArreglo(char Arreglo[], int Cantidad, int nivel);//

/** @brief Donde se lleva a cabo el cuerpo del juego del ahorcado.
 *
 *  @param nivel El nivel en el que se inicio el juego.
 *
*/
void JuegoAhorcado(int nivel);

enum{ENIE = 0, A, B};
enum{CATEGORIA1 = 1, CATEGORIA2, CATEGORIA3};
enum{PALABRA1 = 1, PALABRA2, PALABRA3};

#endif // FUNCIONES_H_INCLUDED
