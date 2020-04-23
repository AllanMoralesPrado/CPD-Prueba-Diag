/**
    DESARROLLO PREGUNTA N1
    PRUEBA DE DIAGNOSTICO DE
    COMPUTACION PARALELA Y DISTRIBUIDA

    ALUMNO: ALLAN MORALES PRADO
    RUT: 18.669.403-1
**/

//LIBRERIAS
#include <stdio.h>
#include <string.h>

/*
    argc: contador de argumentos ingresados por consola
    argv: vector de vectores de argumentos ingresados por consola
    ej. en cmd (Windows): .\a.exe wwwwwaaadexxxxxxx
        argc = 2;
        argv[0] = ".\a.exe"; que es por defecto el primer argumento, el nombre del ejecutable
        argv[1] = "wwwwwaaadexxxxxxx"
*/
int main(int argc, char** argv){
    /** Caso particular donde no se ingresa ninguna cadena adicional (C:\...>.\a.exe):*/
    if (argc == 1){
        return 0;
    }
    /** Si se ingresa mas de un argumento (ej.: C:\...>.\a.exe wwwwwaaadexxxxxxx)...:*/
    else{
    /**
        Contador de repeticiones.
        Vale uno porque a estas alturas los caracteres ingresados aparecen al menos una vez
    */
        int repeticiones = 1;

    /**
        Ciclo for desde 1 (para empezar desde argv[1]) hasta el valor de argc - 1
    */
        for(int j = 1; j < argc; j++){
            //Ciclo for desde 0 (para empezar desde argv[j][0]) hasta la longitud de la cadena
            for(int i = 0; i < strlen(argv[j]); i++){
                //Si un caracter es igual al siguiente, incrementa la cantidad de repeticiones en una unidad
                if (argv[j][i] == argv[j][i+1]){
                    repeticiones++;
                }
                /**
                    Si los caracteres no coinciden...
                    ...se muestra por el canal STDOUT el caracter analizado seguido del numero de repeticiones acumuladas.
                    Se reestablece la variable de repeticiones a su valor inicial.
                */
                else{
                    printf("%c%d", argv[j][i], repeticiones);
                    repeticiones = 1;
                }
            }
        //Salto de linea por cada argumento analizado
        printf("\n");
        }
    }
	return 0;
}

