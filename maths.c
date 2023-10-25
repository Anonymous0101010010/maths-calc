#include <stdio.h>
#include <math.h>

int main() {
    double angle1, angle2, angle3;
// input angles here
    printf("enter first angle: ");
    scanf("%lf", &angle1);
    printf("enter second angle: ");
    scanf("%lf", &angle2);

    angle3 = 180 - angle1 - angle2;

    double angle1_radians = angle1 * M_PI / 180.0;
    double angle2_radians = angle2 * M_PI / 180.0;
    double angle3_radians = angle3 * M_PI / 180.0;

    double sin1 = sin(angle1_radians);
    double cos1 = cos(angle1_radians);
    double sin2 = sin(angle2_radians);
    double cos2 = cos(angle2_radians);
    double sin3 = sin(angle3_radians);
    double cos3 = cos(angle3_radians);

    printf("sine and cosine vals:\n");
    printf("angle 1 (%.2f degrees): Sin=%.6f, Cos=%.6f\n", angle1, sin1, cos1);
    printf("angle 2 (%.2f degrees): Sin=%.6f, Cos=%.6f\n", angle2, sin2, cos2);
    printf("angle 3 (%.2f degrees): Sin=%.6f, Cos=%.6f\n", angle3, sin3, cos3);

    return 0;
}

