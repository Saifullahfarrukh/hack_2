#include <stdio.h>

#include <math.h>

#define earth_radius 6371.0

#define M_PI 3.14159265358979323846

double degreesToRadians(double degrees) {

    return degrees * M_PI / 180.0;

}

int main() {

//declaring variables

    double lat1 , long1 , lat2 , long2;
// 

const earth_radius = 6371.0;


  printf(" Enter the latitude and longtude of the origin (in degrees) :\n");

  printf("latitude:");

    scanf("%lf", &lat1);

    printf("longitude:");

    scanf("%lf", &long1 );

    printf("Enter the latitude and longitude of the distance ( in degress)");

    printf("latitude : ");

    scanf("%lf" &lat2);

    printf("longitude:");

    scanf("%lf", &long2);

    lat1 = degreesToRadians(lat1);

    long1 = degreesToRadians(long1);

    lat2 = degreesToRadians(lat2);
    
    long2 = degreesToRadians(long2);





}