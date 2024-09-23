#ifndef VIDEO_CARD_H  
#define VIDEO_CARD_H  
using namespace std;
#include <string>  

class VideoCard {
private:
    string model;
    int memory; // Б ла  
    static int count;

public:
    VideoCard(const string& model, int memory);
    ~VideoCard();

    static int getCount();
    string getModel() const;
    int getMemory() const;
};

#endif // VIDEO_CARD_H
