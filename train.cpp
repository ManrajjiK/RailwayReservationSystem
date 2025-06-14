// train.cpp
#include <iostream>
#include "train.h"
using namespace std;

Train::Train() {}

Train::Train(int no, string name, string src, string dest, int seats) {
    trainNo = no;
    trainName = name;
    source = src;
    destination = dest;
    totalSeats = seats;
    availableSeats = seats;
}

void Train::display() {
    cout << "Train No: " << trainNo
         << " | Name: " << trainName
         << " | From: " << source
         << " | To: " << destination
         << " | Seats Available: " << availableSeats << "/" << totalSeats << endl;
}

bool Train::bookSeat() {
    if (availableSeats > 0) {
        availableSeats--;
        return true;
    } else {
        return false;
    }
}

void Train::cancelSeat() {
    if (availableSeats < totalSeats) {
        availableSeats++;
    }
}