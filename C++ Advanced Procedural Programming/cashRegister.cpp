
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdio>

using namespace std;

float getPriceAfterDiscounts(float item1Cost, float item2Cost, char userHaveClubCard){
    float result,lowerPriceItem,higherPriceItem;
    
    if(item1Cost>item2Cost){
        higherPriceItem = item1Cost;
        lowerPriceItem = item2Cost;
    }else{
        higherPriceItem = item2Cost;
        lowerPriceItem = item1Cost;
    }
    
    result = higherPriceItem + lowerPriceItem * 0.5;
    
    if(userHaveClubCard == 'Y'){ return result * 0.9;}
    
    return result;
}

float getTaxedPrice(float priceAfterDiscount, float taxRate){
    float discountMultiplier = 1 + (taxRate / 100);
    return priceAfterDiscount * discountMultiplier;
}

int main(int argc, const char * argv[]) {
    float item1Cost,item2Cost,taxRate;
    char userHaveClubCard;
    
    cout<<"Enter price of the first item: ";
    cin>>item1Cost;
    
    cout<<"Enter price of the second item: ";
    cin>>item2Cost;
    
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>userHaveClubCard;
    userHaveClubCard = toupper(userHaveClubCard);
    
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;
    
    float priceAfterDiscounts = getPriceAfterDiscounts(item1Cost,item2Cost,userHaveClubCard);
    
    printf("Base price = %.2f \n", item1Cost+item2Cost);
    printf("Price after discounts = %.2f \n", priceAfterDiscounts);
    printf("Total price = %.2f \n", getTaxedPrice(priceAfterDiscounts,taxRate));
    
    return 0;
}