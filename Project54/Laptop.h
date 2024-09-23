#ifndef LAPTOP_H  
#define LAPTOP_H  
using namespace std;
#include "CPU.h"  
#include "SSD.h"  
#include "VideoCard.h"  
#include "RAM.h"  
#include <string>  

class Laptop {
private:
    string name;
    double price;
    string color;
    CPU* cpu;
    SSD* ssd;
    VideoCard* videoCard;
    RAM* ram;
    static int laptopCount;

public:
    Laptop(const string& name, double price, const string& color,
        CPU* cpu, SSD* ssd, VideoCard* videoCard, RAM* ram);
    ~Laptop();

    static int getLaptopCount();
    string getName() const;
    double getPrice() const;
    string getColor() const;
};

#endif // LAPTOP_H
