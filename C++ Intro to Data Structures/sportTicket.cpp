#include <iostream>
#include <string>
using namespace std;


class ShowTicket {
  protected:
    string row,seat;
    bool sold;

public:
    bool is_sold();
    void sell_seat();
    string print_ticket();

    ShowTicket(string rowInput, string seatNumberInput)
    {
        row = rowInput;
        seat = seatNumberInput;
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
    return row + " " + seat + " " + ticketStatus;
}


class SportTicket: public ShowTicket{
  bool hasBeer,is_sold;

public:
  SportTicket(string rowInput, string seatNumberInput) : ShowTicket(rowInput, seatNumberInput)
  {
    is_sold = false;
    hasBeer = false;
  }

  bool beer_sold();
  void sell_beer();
  string print_ticket();
};

bool SportTicket::beer_sold(){
  return hasBeer;
}

void SportTicket::sell_beer(){
  hasBeer = true;
}

string SportTicket::print_ticket(){
    string ticketStatus = "";
    string beerStatus = "";
    if(is_sold == false){
        ticketStatus = "available";
    }else{
        ticketStatus = "sold";
    }
    if(hasBeer == false){
        beerStatus = "nobeer";
    }else{
        beerStatus = "beer";
    }
    return row + " " + seat + " " + ticketStatus + " " + beerStatus;
}

// int main () {
//   SportTicket myticket1("AA","101");
//   SportTicket myticket2("AA","102");
//   myticket1.sell_seat();
//   myticket2.sell_seat();
//   myticket2.sell_beer();
//   cout << myticket1.print_ticket() << endl;
//   cout << myticket2.print_ticket() << endl;
//   return 0;
// }