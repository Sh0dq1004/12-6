#include <iostream>
#include <string>

void getMin(int,int);
void getMin(double,double);
void getMin(std::string,std::string);

int getSum(int x, int y=0, int z=0){
	return x + y + z;
}

int main() {
	int n1{3}, n2{7}, n3{4};
	double d1{6.02}, d2{2.72};
	std::string s1{"Apple"}, s2{"Bit"};
	
	getMin(n1, n2);
	getMin(d1, d2);
	getMin(s1, s2);
	
	std::cout << "getSum(" << n1 << ")=" << getSum(n1) << "\n";
	std::cout << "getSum(" << n1 << "," << n2 <<")=" << getSum(n1,n2) << "\n";
	std::cout << "getSum(" << n1 << "," << n2 << "," << n3 << ")=" << getSum(n1,n2,n3) << "\n";
	
    return 0;
}

void getMin(int x,int y){
    std::cout << "Test getMin for int values:  ";
    if (x < y) std::cout << x;
    else std::cout << y;
    std::cout << "\n";
}

void getMin(double x,double y){
    std::cout << "Test getMin for double values:  ";
    if (x < y) std::cout << x;
    else std::cout << y;
    std::cout << "\n";
}

void getMin(std::string x,std::string y){
    std::cout << "Test getMin for string values:  ";
    if (x < y) std::cout << x;
    else std::cout << y;
    std::cout << "\n";
}