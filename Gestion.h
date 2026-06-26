#ifndef GESTION_H_INCLUDED
#define GESTION_H_INCLUDE

#define MAXCARACTER 1024
#define ANCHO 31
#define ALTO 5
#define ANCHO_MAX 49
#define ALTO_MAX 16

#define MINCOL 10
#define MAXCOL 130
#define MINREN 15
#define MAXREN 51

#define FLECHA_ARRIBA 72
#define FLECHA_ABAJO 80
#define ENTER 13
#define ESCAPE 27

// Opciones de niveles a escoger.
enum{REGRESAR = 0, PRINCIPIANTE, MEDIO, EXPERTO, SI};

// Opciones del menú principal.
enum{SALIR = 0, JUGAR, INSTRUCCIONES, CREDITOS};

// Funciones de las teclas.
/** @brief Funciones de las teclas que se utilizan de teclas de flecha derecha, izquierda y enter.
*/
void Teclas();

// Letras del menú.
/** @brief Letras utilizadas en el menú principal.
*/
void MenuPrincipal();

// Letras utilizadas en seleccion nivel.
/** @brief Letra utilizadas para seleccionar los niveles.
*/
void SeleccionNivel();

// Letra para regresar.
/** @brief Letra de regresar al menú.
*/
void regresar();

// Pantalla que sale cuando ganas.
/** @brief Letra utilizada en la pantalla de ganaste.
*/
void Ganaste();

/** @brief Letras de perdiste.
*/
void Perdiste();

/** @brief Letras de continuar.
*/
void Continuar();

/** @brief Opcion de continuar.
*/
void Si();
#endif // GESTION_H_INCLUDED
