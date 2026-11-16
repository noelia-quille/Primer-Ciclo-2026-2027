#include <stdio.h>

int main() {
    float SBU = 482.00;
    float INF_MOD = 0.15;
    float INF_GRA = 0.25;
    float distancia, vel_prom, multa, tiempo = 0.0;
    int clasificacion = 0;

    printf("Ingrese la distancia recorrida (en km): ");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo empleado (en horas): ");
    scanf("%f", &tiempo);

    vel_prom = distancia / tiempo;

    if ((tiempo > 0.0) && (distancia > 0.0)) {
        if (vel_prom <=50) {
                clasificacion = 1; // Circulación permitida
                } else if (vel_prom > 50 && vel_prom <= 70) {
                    clasificacion = 2; // Advertencia
                    multa = SBU * INF_MOD;
                } else if (vel_prom > 70 && vel_prom <= 90) {
                    clasificacion = 3; // Infracción moderada
                    multa = SBU * INF_GRA;
                } else if (vel_prom > 90) {
                    clasificacion = 4; // Infracción grave
                    multa = SBU * INF_GRA * 2;
                } else {
                    printf("Error: Clasificación no valida.\n");
                }
        
        } else {
        printf("Error: El tiempo y la distancia deben ser mayores a cero.\n");
        multa = 0.0;
        vel_prom = 0.0;
        clasificacion = 0;
    }
    
printf("Velocidad promedio: %.2f km/h\n", vel_prom);

if (clasificacion == 1) {
    printf("Clasificacion: Circulacion permitida\n");
} else if (clasificacion == 2) {
    printf("Clasificacion: Advertencia\n");
} else if (clasificacion == 3) {
    printf("Clasificacion: Infraccion moderada\n");
} else if (clasificacion == 4) {
    printf("Clasificacion: Infraccion grave\n");
} else if (clasificacion == 0) {
    printf("Clasificacion: No aplica\n");
} else {
    printf("Clasificacion: Error\n");
}

printf("Monto de la multa: %.2f \n", multa);

    return 0;
}
