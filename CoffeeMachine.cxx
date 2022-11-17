#include <iostream>

class CoffeeMachine 
{
public:
	std::string product[5];
	int price[5];

	CoffeeMachine()
		: product{"Coffee", "Espresso", "Cappuccino", "Tea", "Milk"}
		, price{100, 200, 250, 250, 100}
	{}
	void printPriceList() {
		 for(int i=0; i<5; i++) {
            std::cout << product[i] << " " << price[i] << std::endl;
		}	
	}

};

struct Check {
	std::string product_name;
	int product_price;
};

Check returner(Check ls) {
	Check obj;
	CoffeeMachine obj2;
	for(int i=0; i<5; i++) {
		if(obj2.product[i] == ls.product_name){
			if(ls.product_price > obj2.price[i]) {
				std::cout << "Product exists" << std::endl;
				obj.product_price = ls.product_price - obj2.price[i];
				std::cout << "Your dime is: " << obj.product_price << std::endl;
				std::cout << "Be sweet" << std::endl;
			}else if(ls.product_price < obj2.price[i]){
            	std::cout << "You don't have that much money" << std::endl;
			}		 
	}
}
	return obj;
}


int main()
{
std::cout << "     Our products" << std::endl << std::endl;
CoffeeMachine obj1;
obj1.printPriceList();
std::cout << "Enter the product name: ";
Check result;
std::cin >> result.product_name;
std::cout << "Enter your many: ";
std::cin >> result.product_price;
returner(result);
return 0;
}
