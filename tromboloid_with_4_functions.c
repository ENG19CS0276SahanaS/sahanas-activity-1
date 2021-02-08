//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>

float take_input(){
float temp;
printf("Enter the three parameter of the tromboloid");
scanf("%f",&temp);
return temp;
};

float calc_vol(float h, float d, float b){
return ((h *d*b)+(d/b))/3 ;
};

void show_output(float volume){
printf("The Volume of the tromboloid is: %.2f", volume);

};

int main(){
float h,d,b,vol;
h = take_input();
d =  take_input();
b = take_input();
vol = calc_vol(h, d, b);
show_output(vol);
return 0;}
