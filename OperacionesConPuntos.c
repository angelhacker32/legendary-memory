#include <stdio.h>
#include <math.h>

//prototipo de funciones
float funcion1(float a, float b);//modulo punto 1
float funcion2(float c, float d);//modulo punto 2
float funcion3(float a, float b);//angulo punto 1
float funcion4(float c, float d);//angulo punto 2
float funcion5(float a, float b, float c, float d); //distancia entre dos puntos
float funcion6(float a, float b, float c, float d); //ecuacion de la recta
float funcion7(float a, float b, float c, float d); //pendiente

//función principal
int main(){
  float a, b, c, d;
  float modulo1, modulo2, angulo1, angulo2, recta, pendiente, pendiente2, distancia, sumax, sumay, restax, restay, producto, anguloproducto, division, angulodivision;
  printf("Ingrese el valor de X1\n");
  scanf("%f",&a);
  printf("Ingrese el valor de Y1\n");
  scanf("%f",&b);
  printf("Ingrese el valor de X2\n");
  scanf("%f",&c);
  printf("Ingrese el valor de Y2\n");
  scanf("%f",&d);

  modulo1 = funcion1(a,b);
  modulo2 = funcion2(c,d);
  angulo1 = funcion3(a,b);
  angulo2 = funcion4(c,d);
  distancia = funcion5(a,b,c,d);
  recta = funcion6(a,b,c,d);
  pendiente2 = funcion7(a,b,c,d);
  sumax = (a+c);
  sumay = (b+d);
  restax = (a-c);
  restay = (b-d);
  producto = (modulo1*modulo2);
  anguloproducto = angulo1 + angulo2;
  division = (modulo1/modulo2);
  angulodivision = angulo1 - angulo2;

  printf("\n");
  printf("Datos del punto A:\n");
  printf("Coordenadas: (%.2f,%.2f)\n", a, b);
  printf("Modulo: %.2f\n", modulo1);
  printf("Angulo: %.2f\n", angulo1);
  printf("\n");
  printf("Datos del punto B:\n");
  printf("Coordenadas: (%.2f,%.2f)\n", c, d);
  printf("Modulo: %.2f\n", modulo2);
  printf("Angulo: %.2f\n", angulo2);
  printf("\n");
  printf("Distancia entre A y B: %.2f\n", distancia);
  printf("Ecuacion de la Recta y=mx+b es: y=%.2fx+%.2f\n", pendiente, a);
  printf("Pendiente: %.2f\n", pendiente2);
  printf("La suma de A+B es: (%.2f)+i(%.2f)\n", sumax, sumay);
  printf("La resta de A-B es: (%.2f)+i(%.2f)\n", restax, restay);
  printf("El producto de AB es: (%.2f) con angulo de: (%.2f)\n", producto, anguloproducto);
  printf("La division de A/B es: (%.2f) con angulo de: (%.2f)\n", division, angulodivision);
  return 0;
}

float funcion1(float a,float b) //modulo1
{
   float modulo1;
   modulo1 = sqrt(pow((a),2) + pow((b),2));
   return modulo1;
}

float funcion2(float c,float d) //modulo 2
{
   float modulo2;
   modulo2 = sqrt(pow((c),2) + pow((d),2));
   return modulo2;
}

float funcion3(float a,float b) //angulo 1
{
   double arcotangente;
   float angulo1;
   arcotangente = atan(b/a);
   angulo1 = (arcotangente*180)/3.1416;
   return angulo1;
}

float funcion4(float c,float d) //angulo 2
{
   double arcotangente;
   float angulo2;
   arcotangente = atan(d/c);
   angulo2 = (arcotangente*180)/3.1416;
   return angulo2;
}

float funcion5(float a,float b,float c,float d) //distancia entre ambos puntos
{
   float distancia;
   distancia = sqrt(pow((c-a),2) + pow((d-b),2));
   return distancia;
}

float funcion6(float a,float b,float c,float d) //ecuación de la recta
{
   float pendiente, recta;
   pendiente = (d-b)/(a-c);
   recta = (c-(pendiente*a));
   return recta;
}

float funcion7(float a,float b,float c,float d) //pendiente //me cambia el signo ):
{
   float pendiente2;
   pendiente2 = (d-b)/(a-c);
   return pendiente2;
}
