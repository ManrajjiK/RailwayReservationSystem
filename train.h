// train.h
#ifndef TRAIN_H
#define TRAIN_H

#include <string>

class Train {
public:
    int trainNo;
    std::string trainName;
    std::string source;
    std::string destination;
    int totalSeats;
    int availableSeats;

    Train();  // default constructor
    Train(int no, std::string name, std::string src, std::string dest, int seats);
    void display();
    bool bookSeat();
    void cancelSeat();
};

#endif
