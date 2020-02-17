/* A class which represents a course. A course has
*  a set of items which represent a type of assignment.
*  This course keeps all of those items together in a 
*  vector. The course also has a set amount of hours,
*  a number of credits, and a name. Most of the time
*  some items in the vector should be empty. In order 
*  calculate the average with some items missing the 
*  grade is calculating the sum of the following for all
*  items.
*
*
*  sum += item*(item average)/(percent total)
*
*  This allows the cours to give a meaningful average
*  even though many items may be missing.
*/
#include "Item.h"

class Course{

	private:

	int hours, credits;
	double avg;
	std::string_view name;
	std::vector<Item> items;

	public:

	// Constructor
	Course(std::string_view name);
	Course(std::string_view name, std::vector<double>* items);

	// Setters and getters
	std::string_view getName();
	void setName(std::string_view name);

	int* getHours();
	void setHours(int* hours);

	int* getCredits();
	void setCredits(int* credits);

	double* getAvg();
	void setAvg(double* avg);

	std::vector<Item>* getItems();
	void setItems(std::vector<Item>* items);

}
