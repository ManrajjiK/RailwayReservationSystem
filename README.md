#  Railway Reservation System (C++)

A console-based Railway Reservation System built using C++. It allows users to book and cancel train tickets, view PNR status, and handles waitlisting. Data is stored persistently using file I/O.

---
## structure 

RailwayReservationSystem/
-├── main.cpp               # Entry point - Menu handling
-├── train.cpp / .h         # Train details & logic
-├── passenger.cpp / .h     # Passenger data management
-├── reservation.cpp / .h   # Booking, cancellation, PNR logic
-├── reservation.exe        # Compiled executable (ignored in Git)
-├── README.md              # This file 🧾


##  Features

- Book tickets with unique PNR
- Cancel bookings and auto-assign from waitlist
- View ticket using PNR
- Save/load data using files
- Organized using Object-Oriented Programming (OOP)

---

## Tech Stack

- Language: **C++**
- Concepts Used: `OOP`, `File Handling`, `STL (vector, queue, map)`
- Platform: Terminal / Console

---

## 🏁 How to Run

1. Clone the repository  
   ```bash
   git clone https://github.com/ManrajjiK/RailwayReservationSystem.git
   cd RailwayReservationSystem
