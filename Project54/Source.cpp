#include <iostream>  
#include "Laptop.h"  
#include "CPU.h"  
#include "SSD.h"  
#include "VideoCard.h"  
#include "RAM.h"  
using namespace std;
int main() {
    CPU* cpu = new CPU("Intel i7", 3.2);
    SSD* ssd = new SSD("Samsung 970 EVO", 512);
    VideoCard* videoCard = new VideoCard("NVIDIA GeForce RTX 3060", 6144);
    RAM* ram = new RAM("Corsair Vengeance", 16);

    Laptop* laptop = new Laptop("Gaming Laptop", 1200.99, "Black", cpu, ssd, videoCard, ram);

    cout << "Laptop Name: " << laptop->getName() << endl;
    cout << "Price: $" << laptop->getPrice() << endl;
    cout << "Color: " << laptop->getColor() << endl;
    cout << "Current Laptop Count: " << Laptop::getLaptopCount() << endl;

    delete laptop; 

    return 0;
}