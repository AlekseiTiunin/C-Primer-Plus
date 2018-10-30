#include <iostream>
#include <string>

struct CandyBar
{
	std::string sName;
	float fWeight;
	size_t uCalories;
};

void Fill_CandyBar(CandyBar & bar, std::string name = "Millennium Munch",
	float weight = 2.85, size_t calories = 350);
void Print_CandyBar(const CandyBar & bar);

int main(void)
{
	struct CandyBar candybar;
	struct CandyBar defaultbar;

	std::string sNameTmp;
	float fWeightTmp;
	size_t uCaloriesTmp;

	std::cout << "Enter a name of candy bar: \n";
	std::cin >> sNameTmp;
	std::cout << "Enter a weight of candy bar: \n";
	std::cin >> fWeightTmp;
	std::cout << "Enter a namber of calories of candy bar: \n";
	std::cin >> uCaloriesTmp;
	std::cout << "Your bar: \n";
	Fill_CandyBar(candybar, sNameTmp, fWeightTmp, uCaloriesTmp);
	Print_CandyBar(candybar);
	std::cout << "Default bar: \n";
	Fill_CandyBar(defaultbar);
	Print_CandyBar(defaultbar);

	return 0;
}

void Fill_CandyBar(CandyBar & bar, std::string name,
	float weight, size_t calories)
{
	bar.sName = name;
	bar.fWeight = weight;
	bar.uCalories = calories;
}

void Print_CandyBar(const CandyBar & bar)
{
	std::cout << "Name: " << bar.sName << " Weight: " << bar.fWeight << " Calories: " << bar.uCalories << std::endl;
}

