/*
 * approximate_pi.c
 * Rishi Dutta, 912790628
 * This program approximates pi by throwing
 * ten million darts, counting the number
 * of hits ona circle inscribed in a square,
 * and using a formula tofind pi.
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int hitcount(int hits);

int main(){
	int hits = 0;
	int seed;
	double pi;
	int i;
	printf("Enter a seed value: ");
	scanf("%ld", &seed);
	srand(seed);
	for (i = 0; i <= 10000000; i = i + 1){
		hits = hitcount(hits);
	}
	pi = (4 * (double) hits)/10000000;
	printf("Pi is approximately %.2f\n", pi);
	return 0;
}
int hitcount(int hits){
	double xcoord = rand() % 1000; //get x coordinate of dart hit
	double ycoord = rand() % 1000; //get y coordinate of dart hit
	double x = 500; //set x coordinate of center
	double y = 500; //set y coordinate of center
	double distance = sqrt(pow((xcoord-x),2) + pow((ycoord - y),2));
	
	if (distance <= 500){
		hits = hits + 1;
	}
	
	return hits;
}


