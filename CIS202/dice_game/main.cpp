#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check highest score among parameters
int CheckScore(int currHighest, int currScore){
   int highest = currHighest;
   if (currScore > currHighest){
      highest = currScore;
   }
   return highest;
}

// Add all occurences of goal value
int CheckSingles(vector<int>& diceValues, int goal) {
    unsigned int i;
    int sum = 0;
    for (i = 0; i < diceValues.size(); ++i){
        if (diceValues.at(i) == goal){
            sum += goal;
        }
        else{
            continue;
        }
    }
    return sum;
}

// Check for three of a kind (score = 30)
int CheckThreeOfKind(vector<int>& diceValues) {
    int tot = 1;
    int currNum = diceValues.at(0);
    for (unsigned int i = 1; i < diceValues.size(); ++i){
        if (diceValues.at(i) == currNum){
            tot += 1;
        }
        else{
            tot = 1;
        }

        if (tot == 3){
            tot = 30;
            break;
        }
        currNum = diceValues.at(i);
    }
    return tot;
}


// Check for four of a kind (score = 40)
int CheckFourOfKind(vector<int>& diceValues) {
    int tot = 1;
    int currNum = diceValues.at(0);
    for (unsigned int i = 1; i < diceValues.size(); ++i){
        if (diceValues.at(i) == currNum){
            tot += 1;
        }
        else{
            tot = 1;
        }

        if (tot == 4){
            tot = 40;
            break;
        }
        currNum = diceValues.at(i);
    }
    return tot;
}

// Check for five of a kind (score = 50)
int CheckFiveOfKind(vector<int>& diceValues) {
    int tot = 1;
    int currNum = diceValues.at(0);
    for (unsigned int i = 1; i < diceValues.size(); ++i){
        if (diceValues.at(i) == currNum){
            tot += 1;
        }
        else{
            tot = 1;
        }

        if (tot == 5){
            tot = 50;
            break;
        }
        currNum = diceValues.at(i);
    }
    return tot;
}

// Check for full house (score = 35)
int CheckFullHouse(vector<int>& diceValues) {
    int score = 0;
    int pair = 0;
    int triple = 0;
    int temp;
    int currNum = diceValues.at(0);

    for (unsigned int i = 0; i < diceValues.size(); ++i){
        if (currNum == diceValues.at(i)){
            temp += 1;
            pair += 1;
        }
        else{
            temp = 1;
        }

        if (temp == 3){
            triple = 3;
            if (pair == 3){
                pair = 1;
            }
        }
        currNum = diceValues.at(i);
    }
    if (pair >= 2 && triple >= 3){
        score = 35;
    }
    return score;
}

// Check for straight (score = 45)
int CheckStraight(vector<int>& diceValues) {
   /* Complete the function and update the return statement */
    int score = 0;
    if (diceValues.at(0) == 1){
        for (unsigned int i = 0; i < diceValues.size(); ++i){
             if (diceValues.at(i) == (i + 1)){
                score = 45;
            }
            else{
                score = 0;
                break;
            }
        }
    }
    else if (diceValues.at(0) == 2){
        for (unsigned int i = 0; i < diceValues.size(); ++i){
            if (diceValues.at(i) == (i + 2)){
                score = 45;
            }
            else{
                score = 0;
                break;
            }
        }
   }
   else {
    score = 0;
   }
   return score;
}

// Find high score
int FindHighScore(vector<int>& diceValues) {
   /* Complete the function and update the return statement */
    const int diceSides = 6;
    unsigned int i;
    int highest = 0;
    int currScore = 0;

    for (i = 1; i <= diceSides; ++i){
        currScore = CheckSingles(diceValues, i);
        if (currScore > highest){
            highest = currScore;
        }
        else{
            continue;
        }
    }

    currScore = CheckThreeOfKind(diceValues);
    highest = CheckScore(highest, currScore);

    currScore = CheckFourOfKind(diceValues);
    highest = CheckScore(highest, currScore);

    currScore = CheckFiveOfKind(diceValues);
    highest = CheckScore(highest, currScore);

    currScore = CheckFullHouse(diceValues);
    highest = CheckScore(highest, currScore);

    currScore = CheckStraight(diceValues);
    highest = CheckScore(highest, currScore);

    return highest;
}

int main() {
   vector<int> diceValues(5);
   int highScore = 0;

   // Fill array with five values from input
   for(int i = 0; i < 5; ++i) {
      cin >> diceValues.at(i);
   }

   // Place values in ascending order
   sort(diceValues.begin(), diceValues.end());

   // Find high score and output
   highScore = FindHighScore(diceValues);
   cout << "High score: " << highScore << endl;

   return 0;
}
