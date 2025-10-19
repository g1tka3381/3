#include <stdio.h>
#include <math.h>

int main() 
{
    // Объявление переменных для координат
    double x1, y1, x2, y2;
    
    // Ввод координат двух точек
    printf("Введите координаты первой точки (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Введите координаты второй точки (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Вычисление расстояния по формуле: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Вывод результата
    printf("Расстояние между точками: %.2lf\n", distance);

    return 0;
}