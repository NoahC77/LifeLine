/* A class which represents a set of grades which 
*  make up a percentage of the average for any given 
*  course. THE WEIGHT IS STORED IN PERCENTAGES, TO 
*  USE IN CALCULATIONS YOU MUST DIVIDE IT BY 100. 
*  The name is simply the name of of this set of grades.
*  The grades vector is just a vector of all the grades
*  accounted for in the average.
*/

#include <vector>
#include <string_view>

class Item{

	private:

	int weight;
	double avg;
	std::string_view name;
	std::vector<double> grades;

	public:

	// Constructor
	Item(std::vector<double> grades, int weight);
	
	// Setters and getters
	std::string_view getName();
	void setName(std::string_view name);

	int getWeight();
	void setWeight(int* weight);

	double getAvg();

	std::vector<double>* getGrades();
	void setGrades(std::vector<double>* grades);
};

