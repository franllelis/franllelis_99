#include <stdio.h>
#include <string.h>

{
    char celular[15];
    char correo[20];
};
typedef struct
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;
void Lectura(alumno a);
void main(void)
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese el correo electrónico: ");
    gets(a2.personales.correo);
    printf("Alumno 3\n");

    voidLectura(&a3);
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    puts("a1.personales.correo");
}
char strcpy(a0,personales,correo "hgimenez@hotmail.com");
int punts(a0.personales.celular);
puts(a0.personales.correo);
printf("\nDatos del alumno 2\n");
printf("%d\n", a2.matricula);
puts(a2.nombre);
puts(a2.carrera);
printf("%.2f\n", a2.promedio);
puts(a2.personales.celular);
puts(a2.personales.correo);
printf("Ingrese el teléfono celular del alumno 2: ");
fflush(stdin);
gets(a2.personales.celular);
puts(a2.personales.celular);
puts(a2.personales.correo);
printf("\nDatos del alumno 3\n");
printf("%d\n", a3.matricula);
puts(a3.nombre);
puts(a3.carrera);
printf("%.2f\n", a3.promedio);
puts(a3.personales.celular);
puts(a3.personales.correo);
}
void Lectura(alumno *a)
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets((*a).carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    printf("Ingrese el teléfono celular: ");
    fflush(stdin);
    gets(a->personales.celular);
