// Define a class TestResult with properties roll _no, right, wrong, net_score. Also
// define class properties right_weightage, wrong_weightage. Provide methods to set
// and get all the properties.
// Write a driver function main() to use TestResult class (Question 3). Create an array
// to 5 TestResult objects, set values to all the objects and display the results in sorted
// order (by net_score).

#include<iostream>
#include<iomanip>
using namespace std;


class TestResult{
    private:
    int roll_no, right, wrong;
    float net_score;
    static float right_weightage, wrong_weightage;

    public:
    static void setWeightage(float rightWeightage, float wrongWeightage){
        right_weightage = rightWeightage;
        wrong_weightage = wrongWeightage;
    }

    void setResultData(int roll, int rightCount, int wrongCount){
        roll_no = roll;
        right = rightCount;
        wrong = wrongCount;
        net_score = (right*right_weightage) - (wrong*wrong_weightage);
    }

    float getNetScore(){
        return net_score;
    }

    int getRoll(){
        return roll_no;
    }

    int getRight(){
        return right;
    }

    int getWrong(){
        return wrong;
    }

    void PrintResultData();
};

void SortTestResultData(TestResult array[], int arraySize){
    for (int i = 0; i < arraySize; i++)
    {
        int temp = i;
        for (int j = i+1; j < arraySize; j++)
        {
            if (array[temp].getNetScore() < array[j].getNetScore())
            {
                temp = j;
            }
        }
        if (temp != i)
        {
            int tempRoll = array[temp].getRoll();
            int tempRight = array[temp].getRight();
            int tempWrong = array[temp].getWrong();
            array[temp].setResultData(array[i].getRoll(), array[i].getRight(), array[i].getWrong());
            array[i].setResultData(tempRoll, tempRight, tempWrong);
        }
    }
}

void TestResult::PrintResultData(){
    cout <<  setw(7) << roll_no
     << setw(15) << right
     << setw(17) << wrong
     << setw(7) << net_score << endl;
}

float TestResult::right_weightage = 0;
float TestResult::wrong_weightage = 0;

int main(){
    TestResult::setWeightage(1, 0.25);
    TestResult marksArray[5];
    marksArray[0].setResultData(101, 10, 15);
    marksArray[1].setResultData(102, 18, 7);
    marksArray[2].setResultData(103, 8, 17);
    marksArray[3].setResultData(104, 12, 13);
    marksArray[4].setResultData(105, 24, 1);

    SortTestResultData(marksArray, 5);
    cout << right << setw(7) << "Roll"
    << right << setw(15) << "Correct_Count"
    << right << setw(17) << "Incorrect_Count"
    << right << setw(7) << "Score" << endl;
    for (TestResult stdScore:marksArray){
        stdScore.PrintResultData();
    }

    return 0;
}
