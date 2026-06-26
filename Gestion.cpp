/*
Nombre: Gestion.cpp
Autor: Marcos Sánchez, Miguel Bernal y Osver Rodriguez.
Fecha: 31/05/2018
Descripción: Gestiones donde se encuentran las letras que se utilizaron en el programa y opciones de teclas.
*/

#include "Gestion.h"
#include "Funciones.h"

using namespace std;

void MenuPrincipal()
{
    gotoxy(6,3);
    cout << "         _                   _       _    _            _            _             _                _            _ \n";
    cout << "             / /\\                / /\\    / /\\ /\\ \\         /\\ \\        /\\ \\           / /\\             /\\ \\         /\\ \\ \n";
    cout << "            / /  \\              / / /   / / //  \\ \\       /  \\ \\      /  \\ \\         / /  \\           /  \\ \\____   /  \\ \\ \n";
    cout << "           / / /\\ \\            / /_/   / / // /\\ \\ \\     / /\\ \\ \\    / /\\ \\ \\       / / /\\ \\         / /\\ \\_____\\ / /\\ \\ \\ \n";
    cout << "          / / /\\ \\ \\          / /\\ \\__/ / // / /\\ \\ \\   / / /\\ \\_\\  / / /\\ \\ \\     / / /\\ \\ \\       / / /\\/___  // / /\\ \\ \\ \n";
    cout << "         / / /  \\ \\ \\        / /\\ \\___\\/ // / /  \\ \\_\\ / / /_/ / / / / /  \\ \\_\\   / / /  \\ \\ \\     / / /   / / // / /  \\ \\_\\ \n";
    cout << "        / / /___/ /\\ \\      / / /\\/___/ // / /   / / // / /__\\/ / / / /    \\/_/  / / /___/ /\\ \\   / / /   / / // / /   / / /\n";
    cout << "       / / /_____/ /\\ \\    / / /   / / // / /   / / // / /_____/ / / /          / / /_____/ /\\ \\ / / /   / / // / /   / / /\n";
    cout << "      / /_________/\\ \\ \\  / / /   / / // / /___/ / // / /\\ \\ \\  / / /________  / /_________/\\ \\ \\\\ \\ \\__/ / // / /___/ / /\n";
    cout << "     / / /_       __\\ \\_\\/ / /   / / // / /____\\/ // / /  \\ \\ \\/ / /_________\\/ / /_       __\\ \\_\\\\ \\___\\/ // / /____\\/ /\n";
    cout << "     \\_\\___\\     /____/_/\\/_/    \\/_/ \\/_________/ \\/_/    \\_\\/\\/____________/\\_\\___\\     /____/_/ \\/_____/ \\/_________/\n";

    gotoxy(50,17);
    cout << "     _ _   _  ___   _   ___" << endl;
    gotoxy(50,18);
    cout << "  _ | | | | |/ __| /_\\ | _ \\" << endl;
    gotoxy(50,19);
    cout << " | || | |_| | (_ |/ _ \\|   /" << endl;
    gotoxy(50,20);
    cout << "  \\__/ \\___/ \\___/_/ \\_\\_|_\\" << endl;

    gotoxy(35, 23);
    cout << "  ___ _  _ ___ _____ ___ _   _  ___ ___ ___ ___  _  _ ___ ___" << endl;
    gotoxy(35, 24);
    cout << " |_ _| \\| / __|_   _| _ \\ | | |/ __/ __|_ _/ _ \\| \\| | __/ __|" << endl;
    gotoxy(35, 25);
    cout << "  | || .` \\__ \\ | | |   / |_| | (_| (__ | | (_) | .` | _|\\__ \\" << endl;
    gotoxy(35, 26);
    cout << " |___|_|\\_|___/ |_| |_|_\\\\___/ \\___\\___|___\\___/|_|\\_|___|___/" << endl;

    gotoxy(45,29);
    cout << "   ___ ___ ___ ___ ___ _____ ___  ___" << endl;
    gotoxy(45,30);
    cout << "  / __| _ \\ __|   \\_ _|_   _/ _ \\/ __|" << endl;
    gotoxy(45,31);
    cout << " | (__|   / _|| |) | |  | || (_) \\__ \\" << endl;
    gotoxy(45,32);
    cout << "  \\___|_|_\\___|___/___| |_| \\___/|___/" << endl;

    gotoxy(52,35);
    cout << "  ___   _   _    ___ ___" << endl;
    gotoxy(52,36);
    cout << " / __| /_\\ | |  |_ _| _ \\" << endl;
    gotoxy(52,37);
    cout << " \\__ \\/ _ \\| |__ | ||   /" << endl;
    gotoxy(52,38);
    cout << " |___/_/ \\_\\____|___|_|_\\" << endl;

    MarcoSimple(ANCHO, ALTO, ANCHO_MAX, ALTO_MAX);
}

//----------------------------------------------------------------------------------------------------------------------------
void SeleccionNivel(){
    gotoxy(25,3);
    cout << "  ___ ___ _    ___ ___ ___ ___ ___  _  _   _   ___   _  _ _____   _____ _      _" << endl;
    gotoxy(25,4);
    cout << " / __| __| |  | __/ __/ __|_ _/ _ \\| \\| | /_\\ | _ \\ | \\| |_ _\\ \\ / / __| |    (_)" << endl;
    gotoxy(25,5);
    cout << " \\__ \\ _|| |__| _| (_| (__ | | (_) | .` |/ _ \\|   / | .` || | \\ V /| _|| |__   _" << endl;
    gotoxy(25,6);
    cout << " |___/___|____|___\\___\\___|___\\___/|_|\\_/_/ \\_\\_|_\\ |_|\\_|___| \\_/ |___|____| (_)" << endl;

    gotoxy(37,10);
    cout << "  ___ ___ ___ _  _  ___ ___ ___ ___   _   _  _ _____ ___" << endl;
    gotoxy(37,11);
    cout << " | _ \\ _ \\_ _| \\| |/ __|_ _| _ \\_ _| /_\\ | \\| |_   _| __|" << endl;
    gotoxy(37,12);
    cout << " |  _/   /| || .` | (__ | ||  _/| | / _ \\| .` | | | | _|" << endl;
    gotoxy(37,13);
    cout << " |_| |_|_\\___|_|\\_|\\___|___|_| |___/_/ \\_\\_|\\_| |_| |___|" << endl;

    gotoxy(52,18);
    cout << "  __  __ ___ ___ ___ ___" << endl;
    gotoxy(52,19);
    cout << " |  \\/  | __|   \\_ _/ _ \\" << endl;
    gotoxy(52,20);
    cout << " | |\\/| | _|| |) | | (_) |" << endl;
    gotoxy(52,21);
    cout << " |_|  |_|___|___/___\\___/" << endl;

    gotoxy(48,26);
    cout << "  _____  _____ ___ ___ _____ ___" << endl;
    gotoxy(48,27);
    cout << " | __\\ \\/ / _ \\ __| _ \\_   _/ _ \\" << endl;
    gotoxy(48,28);
    cout << " | _| >  <|  _/ _||   / | || (_) |" << endl;
    gotoxy(48,29);
    cout << " |___/_/\\_\\_| |___|_|_\\ |_| \\___/" << endl;

    regresar();

    MarcoSimple(ANCHO+29, ALTO, ANCHO_MAX-13, ALTO_MAX-7);
}

//----------------------------------------------------------------------------------------------------------------------------
void regresar(){
    gotoxy(47,34);
    cout << "  ___ ___ ___ ___ ___ ___   _   ___" << endl;
    gotoxy(47,35);
    cout << " | _ \\ __/ __| _ \\ __/ __| /_\\ | _ \\" << endl;
    gotoxy(47,36);
    cout << " |   / _| (_ |   / _|\\__ \\/ _ \\|   /" << endl;
    gotoxy(47,37);
    cout << " |_|_\\___\\___|_|_\\___|___/_/ \\_\\_|_\\" << endl;
}

//----------------------------------------------------------------------------------------------------------------------------
void Ganaste(){
    gotoxy(33,5);
    cout << "   ____      _      _   _       _      ____     _____  U _____ u" << endl;
    gotoxy(33,6);
    cout << "U /\"___|uU  /\"\\  u | \\ |\"|  U  /\"\\  u / __\"| u |_ \" _| \\| ___\"|/" << endl;
    gotoxy(33,7);
    cout << "\\| |  _ / \\/ _ \\/ <|  \\| |>  \\/ _ \\/ <\\___ \\/    | |    |  _|\"" << endl;
    gotoxy(33,8);
    cout << " | |_| |  / ___ \\ U| |\\  |u  / ___ \\  u___) |   /| |\\   | |___" << endl;
    gotoxy(33,9);
    cout << "  \\____| /_/   \\_\\ |_| \\_|  /_/   \\_\\ |____/>> u |_|U   |_____|" << endl;
    gotoxy(33,10);
    cout << "  _)(|_   \\\\    >> ||   \\\\,-.\\\\    >>  )(  (__)_// \\\\_  <<   >>" << endl;
    gotoxy(33,11);
    cout << " (__)__) (__)  (__)(_\")  (_/(__)  (__)(__)    (__) (__)(__) (__)" << endl;
}

//----------------------------------------------------------------------------------------------------------------------------
void Perdiste()
{
    gotoxy(45,3);
    cout << " (         (    (     (    (";
    gotoxy(45,4);
    cout << " )\\ )      )\\ ) )\\ )  )\\ ) )\\ )  *   )";
    gotoxy(45,5);
    cout << "(()/( (   (()/((()/( (()/((()/(` )  /( (";
    gotoxy(45,6);
    cout << " /(_)))\\   /(_))/(_)) /(_))/(_))( )(_)))\\";
    gotoxy(45,7);
    cout << "(_)) ((_) (_)) (_))_ (_)) (_)) (_(_())((_)";
    gotoxy(45,8);
    cout << "| _ \\| __|| _ \\ |   \\|_ _|/ __||_   _|| __|";
    gotoxy(45,9);
    cout << "|  _/| _| |   / | |) || | \\__ \\  | |  | _|";
    gotoxy(45,10);
    cout << "|_|  |___||_|_\\ |___/|___||___/  |_|  |___|";
}

//----------------------------------------------------------------------------------------------------------------------------
void Si()
{
    gotoxy(60,25);
    cout << "  ___ ___" << endl;
    gotoxy(60,26);
    cout << " / __|_ _|" << endl;
    gotoxy(60,27);
    cout << " \\__ \\| |" << endl;
    gotoxy(60,28);
    cout << " |___/___|" << endl;
}

//----------------------------------------------------------------------------------------------------------------------------
void Continuar()
{
    gotoxy(33,15);
    cout << " ___                         ___         _   _                     ___" << endl;
    gotoxy(33,16);
    cout << "|    \\___ ___ ___ __ _ ___  / __|___ _ _| |_(_)_ _ _  _ __ _ _ _  |__ \\ " << endl;
    gotoxy(33,17);
    cout << "| |) / -_|_-</ -_) _` (_-< | (__/ _ \\ ' \\  _| | ' \\ || / _` | '_|   /_/ " << endl;
    gotoxy(33,18);
    cout << "|___/\\___/__/\\___\\__,_/__/  \\___\\___/_||_\\__|_|_||_\\_,_\\__,_|_|    (_)  " << endl;
}

//----------------------------------------------------------------------------------------------------------------------------
void Teclas()
{
    int opcion = JUGAR, Menu = 0, nivel = PRINCIPIANTE, aux = 0;

    char tecla;
    int x = MINCOL, y = MINREN;

    TamVentana(130,45);
    CambiaCursor(APAGADO);

    gotoxy(x+39,y+1);
    while(true){
        if(kbhit()){
            tecla = getch();
            if(y < MAXREN && tecla == ENTER){
                if(Menu == 0){
                    switch(opcion){//En esta parte es dentro de la opcion elegida del menu
                        case SALIR: system("cls");
                                    ImprimeArchivo("salir.txt", x+30, y-10);
                                    Menu++;
                                    gotoxy(x-8, y);
                                    return;
                                    break;

                        case JUGAR: system("cls");
                                    Menu++;
                                    SeleccionNivel();
                                    break;

                        case INSTRUCCIONES: system("cls");
                                            ImprimeArchivo("instrucciones.txt", x+25, y-10);
                                            regresar();
                                            MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                            nivel--;
                                            Menu += 2;
                                            break;

                        case CREDITOS:  system("cls");
                                        ImprimeArchivo("creditos.txt", x+21, y-6);
                                        regresar();
                                        MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                        nivel--;
                                        Menu += 2;
                                        break;
                    }
                }else{
                    if(Menu == 1){
                        switch(nivel){
                            case PRINCIPIANTE:  system("cls");
                                                aux = nivel;
                                                JuegoAhorcado(nivel);
                                                Menu = 3; // 3
                                                nivel += 3;
                                                system("cls");
                                                Continuar();
                                                Si();
                                                regresar();
                                                MarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                                break;

                            case MEDIO:   system("cls");
                                          aux = nivel;
                                          JuegoAhorcado(nivel);
                                          Menu = 3;
                                          nivel += 2;
                                          system("cls");
                                          Continuar();
                                          Si();
                                          regresar();
                                          MarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                          break;

                            case EXPERTO: system("cls");
                                          aux = nivel;
                                          JuegoAhorcado(nivel);
                                          Menu = 3;
                                          nivel++;
                                          system("cls");
                                          Continuar();
                                          Si();
                                          regresar();
                                          MarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                          break;

                            case REGRESAR:  system("cls");
                                            Menu--;
                                            nivel++;
                                            MenuPrincipal();
                                            break;
                        }
                    }else{
                        if(Menu == 2){
                            switch(nivel){
                                case REGRESAR:  system("cls");
                                                nivel++;
                                                opcion = 1;
                                                Menu -= 2;
                                                MenuPrincipal();
                                                break;
                            }
                        }else{
                            if(Menu == 3){
                                switch(nivel){
                                    case REGRESAR:  system("cls");
                                                    MenuPrincipal();
                                                    nivel = 1;
                                                    opcion = 1;
                                                    Menu -= 3;
                                                    break;

                                    case SI: system("cls");
                                             aux++;
                                             if(aux <= 3){
                                                JuegoAhorcado(aux);
                                             }else{
                                                regresar();
                                                Menu --;
                                                nivel = 0;
                                                MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                             }
                                             break;
                                    }
                            }
                        }
                    }
                }
            }

            if(y+1 > MINREN && (tecla == FLECHA_ARRIBA || tolower(tecla) == 'w'))
            {
                if(Menu == 0){
                    switch(opcion){//Desplazarse hacia arria en el menú principal
                        case SALIR: DestruyeMarcoSimple(ANCHO-3, ALTO, ANCHO+20, ALTO_MAX+18);
                                    MarcoSimple(ANCHO+10, ALTO, ANCHO_MAX-5, ALTO_MAX+12);
                                    opcion+=3;
                                    break;

                        case JUGAR: DestruyeMarcoSimple(ANCHO, ALTO, ANCHO_MAX, ALTO_MAX);
                                    MarcoSimple(ANCHO-3, ALTO, ANCHO_MAX+2, ALTO_MAX+18);
                                    opcion --;
                                    break;

                        case INSTRUCCIONES: DestruyeMarcoSimple(ANCHO+34, ALTO, ANCHO+3, ALTO_MAX+6);
                                            MarcoSimple(ANCHO, ALTO, ANCHO_MAX, ALTO_MAX);
                                            opcion--;
                                            break;

                        case CREDITOS:  DestruyeMarcoSimple(ANCHO+10, ALTO, ANCHO_MAX-5, ALTO_MAX+12);
                                        MarcoSimple(ANCHO+34, ALTO, ANCHO_MAX-15, ALTO_MAX+6);
                                        opcion--;
                                        break;
                    }
                }else{
                    if(Menu == 1){
                        switch(nivel){//Para desplazarse dentro de la opcion jugar
                            case REGRESAR:  DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                            MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+9);
                                            nivel+=3;
                                            break;

                            case PRINCIPIANTE:  DestruyeMarcoSimple(ANCHO+29, ALTO, ANCHO_MAX-13, ALTO_MAX-7);
                                                MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                                nivel--;
                                                break;

                            case MEDIO: DestruyeMarcoSimple(ANCHO-2, ALTO, ANCHO_MAX+2, ALTO_MAX+1);
                                        MarcoSimple(ANCHO+29, ALTO, ANCHO_MAX-13, ALTO_MAX-7);
                                        nivel--;
                                        break;

                            case EXPERTO:   DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+9);
                                            MarcoSimple(ANCHO-2, ALTO, ANCHO_MAX+2, ALTO_MAX+1);
                                            nivel--;
                                            break;
                        }
                    }else{
                        if(Menu == 3){
                            switch(nivel){
                                case REGRESAR:  DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                                nivel += 4;
                                                MarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                                break;

                                case SI: DestruyeMarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                         nivel -= 4;
                                         MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                         break;
                            }
                        }
                    }
                }
            }
            if(y-1 < MAXREN && (tecla == FLECHA_ABAJO  || tolower(tecla) == 's'))
            {
                if(Menu == 0){
                    switch(opcion){//Esto es para poder desplazarse dentro del menu principal
                        case SALIR: DestruyeMarcoSimple(ANCHO-3, ALTO, ANCHO_MAX+2, ALTO_MAX+18);
                                    MarcoSimple(ANCHO, ALTO, ANCHO_MAX, ALTO_MAX);
                                    opcion++;
                                    break;

                        case JUGAR: DestruyeMarcoSimple(ANCHO, ALTO, ANCHO_MAX, ALTO_MAX);
                                    MarcoSimple(ANCHO+34, ALTO, ANCHO_MAX-15, ALTO_MAX+6);
                                    opcion++;
                                    break;

                        case INSTRUCCIONES: DestruyeMarcoSimple(ANCHO+34, ALTO, ANCHO_MAX-15, ALTO_MAX+6);
                                            MarcoSimple(ANCHO+10, ALTO, ANCHO_MAX-5, ALTO_MAX+12);
                                            opcion++;
                                            break;

                        case CREDITOS:  DestruyeMarcoSimple(ANCHO+10, ALTO, ANCHO_MAX-5, ALTO_MAX+12);
                                        MarcoSimple(ANCHO-3, ALTO, ANCHO_MAX+2, ALTO_MAX+18);
                                        opcion-=3;
                                        break;
                    }
                }else{
                    if(Menu == 1){
                        switch(nivel){//Esto para poder desplazarte en el menu dentro de jugar
                            case REGRESAR:  DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                            MarcoSimple(ANCHO+29, ALTO, ANCHO_MAX-13, ALTO_MAX-7);
                                            nivel++;
                                            break;

                            case PRINCIPIANTE:  DestruyeMarcoSimple(ANCHO+29, ALTO, ANCHO_MAX-13, ALTO_MAX-7);
                                                MarcoSimple(ANCHO-2, ALTO, ANCHO_MAX+2, ALTO_MAX+1);
                                                nivel++;
                                                break;

                            case MEDIO: DestruyeMarcoSimple(ANCHO-2, ALTO, ANCHO_MAX+2, ALTO_MAX+1);
                                        MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+9);
                                        nivel++;
                                        break;

                            case EXPERTO:   DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+9);
                                            MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                            nivel-=3;
                                            break;
                        }
                    }else{
                        if(Menu == 3){
                            switch(nivel){//Esto para poder desplazarse despues de ganar o perder el juego
                                case REGRESAR:  DestruyeMarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                                MarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                                nivel += 4;
                                                break;

                                case SI:    DestruyeMarcoSimple(ANCHO-21, ALTO, ANCHO_MAX+11, ALTO_MAX+8);
                                            MarcoSimple(ANCHO+6, ALTO, ANCHO_MAX-2, ALTO_MAX+17);
                                            nivel -= 4;
                                            break;
                            }
                        }
                    }
                }
            }
        }
    }
}
