#include <iostream>

template<typename T>
T sum(T num){
	return num;
}

template<typename T,typename... Types>
T sum(T num,Types... args){
	return num + sum(args...);
}

int main(){
	std::cout << sum(1,2,3,4,5) << std::endl;
}
