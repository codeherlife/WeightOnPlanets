//
//  weight.c
//  HeartLab
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
    //weight = mass * gravity
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
    
    //question is it ok that massOfHuman is an int? cast or?
    weightOnMercury = massOfHuman * mercuryGravity;
    weightOnVenus = massOfHuman * venusGravity;
    weightOnMars = massOfHuman * marsGravity;
    weightOnJupiter = massOfHuman * jupiterGravity;
    weightOnSaturn = massOfHuman * saturnGravity;
    weightOnUranus = massOfHuman * uranusGravity;
    weightOnNeptune = massOfHuman * neptuneGravity;
    
    printf("Mercury: %.1f\n", weightOnMercury);
    fprintf(fp, "Mercury: %.1f\n", weightOnMercury);
    printf("Venus: %9.1f\n", weightOnVenus);
    fprintf(fp, "Venus: %9.1f\n", weightOnVenus);
    printf("Mars: %.1f\n", weightOnMars);
    fprintf(fp, "Mars: %.1f\n", weightOnMars);
    printf("Jupiter: %.1f\n", weightOnJupiter);
    fprintf(fp, "Jupiter: %.1f\n", weightOnJupiter);
    printf("Saturn: %.1f\n", weightOnSaturn);
    fprintf(fp, "Saturn: %.1f\n", weightOnSaturn);
    printf("Uranus: %.1f\n", weightOnUranus);
    fprintf(fp, "Uranus: %.1f\n", weightOnUranus);
    printf("Neptune: %.1f\n", weightOnNeptune);
    fprintf(fp, "Neptune: %.1f\n", weightOnNeptune);
    
    fclose(fp);
    return 0;
}
