#include <iostream>
#include <stdio.h>

int main() {
    
    float h_cpu, h_ram, h_mainboard;
    float cpu, ram, mainboard;

    h_cpu = 4530000;
    h_ram = 2795000;
    h_mainboard = 4940000;

    cpu = h_cpu - (h_cpu * 0.15);
    ram = h_ram - (h_ram * 0.08);  
    mainboard = h_mainboard - (h_mainboard * 0.10);
    
    printf("Harga CPU setelah diskon: %.2f\n", cpu);
    printf("Harga RAM setelah diskon: %.2f\n", ram);
    printf("Harga Mainboard setelah diskon: %.2f\n", mainboard);

}