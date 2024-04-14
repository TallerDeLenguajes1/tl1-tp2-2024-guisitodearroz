#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char tipo[6][10] = {"intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct cpu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

// Función para crear valores aleatorios
int valAleatorios(int min, int max)
{
    return min + rand() % (max - min + 1);
}

// Función para crear una PC
struct cpu crearCompu()
{
    struct cpu pc;
    pc.velocidad = valAleatorios(1, 3);
    pc.anio = valAleatorios(2015, 2023);
    pc.cantidad = valAleatorios(1, 8);

    // Asignar el tipo de procesador aleatorio
    int indiceTipo = rand() % 6;
    pc.tipo_cpu = malloc(strlen(tipo[indiceTipo]) + 1);
    strcpy(pc.tipo_cpu, tipo[indiceTipo]);

    return pc;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    struct cpu miPc = crearCompu();
    printf("Velocidad: %d GHz\n", miPc.velocidad);
    printf("El año de fabricacion: %d\n", miPc.anio);
    printf("Cantidad de nucleos: %d\n", miPc.cantidad);
    printf("Tipo de procesador %s\n", miPc.tipo_cpu);

    // Liberar la memoria asignada dinámicamente
    free(miPc.tipo_cpu);

    return 0;
}
