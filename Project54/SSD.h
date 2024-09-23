#ifndef SSD_H  
#define SSD_H  

#include <string>  

class SSD {
private:
    std::string model;
    int capacity; // Б ца  
    static int count;

public:
    SSD(const std::string& model, int capacity);
    ~SSD();

    static int getCount();
    std::string getModel() const;
    int getCapacity() const;
};

#endif // SSD_H
