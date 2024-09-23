#ifndef RAM_H  
#define RAM_H  
using namespace std;
#include <string>  

class RAM {
private:
    string model;
    int size;  
    static int count;

public:
    RAM(const string& model, int size);
    ~RAM();

    static int getCount();
    string getModel() const;
    int getSize() const;
};

#endif // RAM_H
