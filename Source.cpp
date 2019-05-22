#include <iostream>
#include <bitset>
bool right(int &n) {
	bool y;
	if ((n&(n - 1)) == 0) { 
		//std::cout << "true\n";
		 
		std::cout << std::bitset<16>(n&(n - 1)) << "\n " << std::bitset<16> (n&(n - 1)) << " \nn: " << std::bitset<16> (n) << "\n(n-1): " << std::bitset<16>(n - 1);
		y = true;
	}
	else {
		//std::cout << "false\n";
		y = false;
	}
	return y;

}
int main() {
	int x = 1;
	
	std::cout << right(x);
	std::cin.get();
}

//she is correct from 0 and the powers of 2 the statment will return 0
/* the & is a bitwise AND, what it does is combine both integer in their 
bit correspoding value, the value of n is computed in binary as for n-1 
as well in emaple 
((n&(n-1)) == 0) if n = 4 its bit representation is 100
				    n-1 = 3 its bit representation is 011
					by AND both we get 000 = 0 and will retun ture 

*/