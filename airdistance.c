#include <stdio.h>

#include <math.h>



#define M_PI 3.14159265358979323846

double degreesToRadians(double degrees) {

    return degrees * M_PI / 180.0;

}

int main() {

//declaring variables

    double lat1 , long1 , lat2 , long2;
// 

const float earth_radius = 6371.0;


  printf(" Enter the latitude and longtude of the origin (in degrees) :\n");

  printf("latitude:");

    scanf("%lf", &lat1);

    printf("longitude:");

    scanf("%lf", &long1 );

    printf("Enter the latitude and longitude of the distance ( in degress)\n\n");

    printf("latitude : ");

    scanf("%lf" ,&lat2);

    printf("longitude:");

    scanf("%lf", &long2);

    lat1 = degreesToRadians(lat1);

    long1 = degreesToRadians(long1);

    lat2 = degreesToRadians(lat2);

    long2 = degreesToRadians(long2);
    
// Calculate the distance using the Spherical Law of Cosines

    double diff = long2 - long1;

    double distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(diff)) * earth_radius;

    printf("\nLocation Distance\n========================\n");

    printf("Origin:      (%.6lf, %.6lf)\n", lat1, long1);

    printf("Destination: (%.6lf, %.6lf)\n", lat2, long2);

    printf("Air distance is %.6lf kms\n", distance);





}