#include <iostream>

class Mood
{
public:
	virtual ~Mood() { }
	virtual void talk()=0;
};

class Happy : public Mood
{
public:
	void talk() { std::cout << "Som vesely!" << std::endl; }
};


class Sad : public Mood
{
public:
	void talk() { std::cout << "Som smutny!" << std::endl; }
};


void hello_world(Mood & mood)
{
	mood.talk();
}

int main()
{
	Happy mood;
	Sad mood2;
	hello_world(mood);
	hello_world(mood2);
	return 0;
}
