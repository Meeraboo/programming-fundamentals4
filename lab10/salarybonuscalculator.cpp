#include <iostream>
using namespace std;
int getScoreBonus(int score)
{
    if (score >= 90)
    {
        return 20;
    }
    else if (score >= 75 && score <= 89)
    {
        return 10;
    }
    else
    {
        return 5;
    }
}

double calculateSalary(double base, int score, int experience)
{
    int bonusPercentage = getScoreBonus(score);

    // Add extra 5% for experienced employees
    if (experience >= 5)
    {
        bonusPercentage += 5;
    }

    double bonusAmount = base * bonusPercentage / 100.0;
    double finalSalary = base + bonusAmount;

    return finalSalary;
}

int main()
{
    double base;
    int score, experience;

    cout << "Enter base, score and experience in years: " << endl;
    cin >> base >> score >> experience;

    double finalSalary = calculateSalary(base, score, experience);
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}