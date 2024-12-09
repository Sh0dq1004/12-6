#include <iostream>
#include <vector>
#include <string>
using namespace std::string_literals;

template <typename T>
//空欄(1) 関数テンプレートを使用した関数getMin()の定義
T getMin(T x,T y){
    if (x < y) return x;
    else return y;
}
//空欄(2) 関数テンプレートを使用した関数printVec()の定義
template <typename T>
void printVec(const std::vector<T>& v){
    for (T elm: v) std::cout << elm << " ";
    std::cout << "\n";
}

//空欄(3) 関数テンプレートを使用した関数findAll()の定義
template <typename T>
std::vector<size_t> findAll(const std::vector<T>& v, T a){
    std::vector<size_t> result_vec;
    for (size_t i{}; i<v.size(); i++) if (v[i]==a) result_vec.push_back(i);
    return result_vec;
}


struct Point{ int x{}, y{}; };

bool operator<(const Point& a, const Point& b){
	return a.x<b.x || (a.x==b.x && a.y<b.y);
}

std::ostream& operator<<(std::ostream& o, const Point& a){
	return o << "(" << a.x << ", " << a.y << ")";
}

int main() {
	int n1{3}, n2{7};
	double d1{6.02}, d2{2.72};
	std::string s1{"Apple"}, s2{"Bit"};
	Point p1{3, 7}, p2{3, 9};
	
	std::cout << "Test getMin for int values: " << getMin(n1, n2) << "\n";
	std::cout << "Test getMin for double values: " << getMin(d1, d2) << "\n";
	std::cout << "Test getMin for string values: " << getMin(s1, s2) << "\n";
	std::cout << "Test getMin for Point values: " << getMin(p1, p2) << "\n";
	
	std::vector<int> v1{6, 2, 3, 12, 6, 6};
	std::vector v2{"HND"s, "NRT"s, "HND"s, "FUK"s, "KIX"s};
	
	std::cout << "v1: ";
	printVec(v1);
	std::cout << "6 found at: ";
	printVec(findAll(v1, 6)); // 変数v1の内，値が6の要素を全て探索して添え字を出力
	
	std::cout << "v2: ";
	printVec(v2);
	std::cout << "HND found at: ";
	printVec(findAll(v2,"HND"s));
	
	return 0;
}
