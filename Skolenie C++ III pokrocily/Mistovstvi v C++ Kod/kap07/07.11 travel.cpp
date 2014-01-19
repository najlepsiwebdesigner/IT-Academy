// travel.cpp -- pou�it� struktur ve funkc�ch
#include <iostream>
struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
	using namespace std;
	travel_time day1 = {5, 45}; // 5 hodin, 45 min
	travel_time day2 = {4, 55}; // 4 hodiny, 55 min

	travel_time trip = sum(day1, day2);
	cout << "Celkem za dva dny: ";
	show_time(trip);

	travel_time day3= {4, 32};
	cout << "Celkem za tri dny: ";
	show_time(sum(trip, day3));

	return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours +
							(t1.mins + t2.mins) / Mins_per_hr;
return total;
}

void show_time(travel_time t)
{
	using namespace std;
	cout << t.hours << " hodin, "
			<< t.mins << " minut\n";
}
