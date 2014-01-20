#import <iostream>

template<class T>
void TwiceIt(T& tData) // modifikujem predanu premennu
{
    tData *= 2;    
    // tData = tData + tData;
}


int main() {
		
	int Data = 2;
	std::cout << " " << Data;
	TwiceIt(Data);
	std::cout << " " << Data;

	return 0;
}