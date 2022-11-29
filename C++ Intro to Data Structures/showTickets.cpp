#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ShowTickets {
    vector<string> soldSeats;
    vector<string> matchingRowToSeat;
    vector<bool> availableSeats;

public:
    bool is_sold(string row, string seat);
    void sell_seat(string row, string seat);
    string print_ticket(string row, string seat);
};

bool ShowTickets::is_sold(string row, string seat){
    int vectorSize = soldSeats.size();

    for (int idx = 0; idx < vectorSize; idx++){
        if(soldSeats[idx] == seat and matchingRowToSeat[idx] == row){
            return true;
        }
    }

    return false;
}

void ShowTickets::sell_seat(string row, string seat){
    soldSeats.push_back(seat);
    matchingRowToSeat.push_back(row);
    availableSeats.push_back(false);
}

string ShowTickets::print_ticket(string row, string seat){
    string ticketStatus = "available";
    
    
      int vectorSize = soldSeats.size();

    for (int idx = 0; idx < vectorSize; idx++){
        if(soldSeats[idx] == seat and matchingRowToSeat[idx] == row and availableSeats[idx] == false){
            ticketStatus = "sold";
        }
    }
    
    return row + " " + seat + " " + ticketStatus;
}


// int
// main()
// {
//     ShowTickets myticket;
//   if(!myticket.is_sold("AA","101"))
//     myticket.sell_seat ("AA","101");
//   cout << myticket.print_ticket("AA","101") << endl;
//   cout << myticket.print_ticket("AA","102") << endl;
//   return 0;
// }