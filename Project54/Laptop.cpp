#include "Laptop.h"  
using namespace std;
int Laptop::laptopCount = 0;

Laptop::Laptop(const string& name, double price, const string& color,
    CPU* cpu, SSD* ssd, VideoCard* videoCard, RAM* ram)
    : name(name), price(price), color(color), cpu(cpu), ssd(ssd), videoCard(videoCard), ram(ram) {
    laptopCount++;
}

Laptop::~Laptop() {
    laptopCount--;
    delete cpu; 
    delete ssd;
    delete videoCard;
    delete ram;
}

int Laptop::getLaptopCount() {
    return laptopCount;
}

string Laptop::getName() const {
    return name;
}

double Laptop::getPrice() const {
    return price;
}

string Laptop::getColor() const {
    return color;
}
