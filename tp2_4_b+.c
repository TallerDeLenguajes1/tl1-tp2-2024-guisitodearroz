#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TIPO_LENGTH 10
#define MAX_INPUT_LENGTH (MAX_TIPO_LENGTH + 1) // +1 para el carácter nulo

struct pc {
    int velocidad;
    int anio;
    int cantidad;
    char tipo_cpu[MAX_TIPO_LENGTH];
};

// Función para eliminar el carácter de nueva línea del final de la cadena, la utilizo porque me estaba generando conflictos
void eliminarNuevaLinea(char *cadena) {
    size_t longitud = strlen(cadena);
    if (longitud > 0 && cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
    }
}
void mostrarPc(struct pc *pcs){
    printf("\nLas características de las 5 PC ingresadas son:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPC %d:\n", i + 1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Año de fabricación: %d\n", pcs[i].anio);
        printf("Cantidad de núcleos: %d\n", pcs[i].cantidad);
        printf("Tipo de procesador: %s\n", pcs[i].tipo_cpu);
    }
}
void pcMasVieja(struct pc *pcs){
    struct pc masVieja;
    masVieja.velocidad=0;
    for (int i = 0; i < 5; i++)
    {
        if (pcs[i].anio < masVieja.anio || masVieja.anio == 0)
        {
            masVieja = pcs[i]; //guardo la variable el dato mas chico
        }
    }
        printf("La pc mas vieja: \n");
        printf("Velocidad: %d GHz\n", masVieja.velocidad);
        printf("Año de fabricación: %d\n", masVieja.anio);
        printf("Cantidad de núcleos: %d\n", masVieja.cantidad);
        printf("Tipo de procesador: %s\n", masVieja.tipo_cpu);
}
void pcConMasVelocidad(struct pc *pcs){
    struct pc masRapida;
    masRapida.velocidad=0;
    for (int i = 0; i < 5; i++)
    {
        if (pcs->velocidad > masRapida.velocidad || masRapida.velocidad == 0)
        {
            masRapida= pcs[i];
        }
        
    }
    
        printf("La pc mas rapida es: \n");
        printf("Velocidad: %d GHz\n", masRapida.velocidad);
        printf("Año de fabricación: %d\n", masRapida.anio);
        printf("Cantidad de núcleos: %d\n", masRapida.cantidad);
        printf("Tipo de procesador: %s\n", masRapida.tipo_cpu);
}

int main() {
    struct pc pcs[5]; // Arreglo de estructuras para almacenar las 5 PC

    printf("Por favor ingrese las características de las 5 PC:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPC %d:\n", i + 1);
        printf("Velocidad (GHz): ");
        scanf("%d", &pcs[i].velocidad);

        printf("Año de fabricación: ");
        scanf("%d", &pcs[i].anio);

        printf("Cantidad de núcleos: ");
        scanf("%d", &pcs[i].cantidad);

        printf("Tipo de procesador: ");
        fflush(stdin); // Limpiar el búfer
        fgets(pcs[i].tipo_cpu, MAX_INPUT_LENGTH, stdin); //utlizo el fgets para cadenas porque por alguna razon el scanf me generaba errores
        eliminarNuevaLinea(pcs[i].tipo_cpu);
    }

    //llamo funcion para mostrar
    mostrarPc(pcs);
    printf("\n");
    //llamo a la funcion para ver la mas vieja 
    pcMasVieja(pcs);
    printf("\n");
    //llamo a la funcion para ver la mas rapida
    pcConMasVelocidad(pcs);
    printf("\n");
    return 0;
}
 