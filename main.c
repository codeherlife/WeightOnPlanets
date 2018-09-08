//
//  weight.c
//  WeightLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Weight Lab;
//  Date: 9/7/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>

FILE *fp;

int main(void) {
    int massOfHuman = 200;
    float mercuryGravity = 37.8;
    float venusGravity = 90.7;
    float marsGravity = 37.7;
    float jupiterGravity = 236.0;
    float saturnGravity = 91.6;
    float uranusGravity = 88.9;
    float neptuneGravity = 112.0;
    float weightOnMercury;
    float weightOnVenus;
    float weightOnMars;
    float weightOnJupiter;
    float weightOnSaturn;
    float weightOnUranus;
    float weightOnNeptune;
    fp = fopen("csis.txt", "w");
    
    weightOnMercury = massOfHuman * mercuryGravity;
    weightOnVenus = massOfHuman * venusGravity;
    weightOnMars = massOfHuman * marsGravity;
    weightOnJupiter = massOfHuman * jupiterGravity;
    weightOnSaturn = massOfHuman * saturnGravity;
    weightOnUranus = massOfHuman * uranusGravity;
    weightOnNeptune = massOfHuman * neptuneGravity;
    
    printf("%8s: %.1f\n", "Mercury", weightOnMercury);
    fprintf(fp, "%8s: %.1f\n", "Mercury", weightOnMercury);
    printf("%7s: %.1f\n", "Venus", weightOnVenus);
    fprintf(fp, "%7s: %.1f\n", "Venus", weightOnVenus);
    printf("%8s: %.1f\n", "Mars", weightOnMars);
    fprintf(fp, "%8s: %.1f\n", "Mars", weightOnMars);
    printf("%s: %.1f\n", "Jupiter", weightOnJupiter);
    fprintf(fp, "%s: %.1f\n", "Jupiter", weightOnJupiter);
    printf("%7s: %.1f\n", "Saturn", weightOnSaturn);
    fprintf(fp, "%7s: %.1f\n", "Saturn", weightOnSaturn);
    printf("%7s: %.1f\n", "Uranus", weightOnUranus);
    fprintf(fp, "%7s: %.1f\n", "Uranus", weightOnUranus);
    printf("%s: %.1f\n", "Neptune", weightOnNeptune);
    fprintf(fp, "%s: %.1f\n", "Neptune", weightOnNeptune);
    
    fclose(fp);
    return 0;
}
