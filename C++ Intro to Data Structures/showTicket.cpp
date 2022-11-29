#include <iostream>
#include <string>
using namespace std;

class ShowTicket {
    string row,seatNumber;
    bool sold;

public:
    bool is_sold();
    void sell_seat();
    string print_ticket();

    ShowTicket(string rowInput, string seatNumberInput)
    {
        row = rowInput;
        seatNumber = seatNumberInput;
        sold = false;
        }
};

bool ShowTicket::is_sold(){
    return sold;
}

void ShowTicket::sell_seat(){
    sold = true;
}

string ShowTicket::print_ticket(){
    string ticketStatus = "";
    if(sold == false){
        ticketStatus = "available";
    }else{
        ticketStatus = "sold";
    }
    return row + " " + seatNumber + " " + ticketStatus;
}

// int
// main()
// {
//     ShowTicket myticket1("AA","101");
//     ShowTicket myticket2("AA","102");
//     if (!myticket1.is_sold())
//         myticket1.sell_seat();
//     cout << myticket1.print_ticket() << endl;
//     cout << myticket2.print_ticket() << endl;
//     return 0;
// }