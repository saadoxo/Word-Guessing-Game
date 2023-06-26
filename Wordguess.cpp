#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;


bool check(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '_')
        {
            return false;
        }
    }

    return true;
} 
 

int main()
{
	
	
	
// Srand randomizes time which is accessed by compiler using time(Null)	


//time(NULL) function is provided by <time.h> library file	

    srand(time(NULL));


// Answers stored in a array


    string word[10] = {"apple", "mercedes", "despacito", "cucumber", "chair", "pubg", "giraffe", "africa", "television", "cactus"};

// Hints of the answers stored in a array as answers can be a bit harder to guess.


    string hint[10] = {"fruit", "car", "song", "vegetable", "furniture", "game", "animal", "county", "electronic device", "plant"};



// randomizes the number based upon number of values in array.

// Forumula rand() % n where n is number of words in an array.

    int randomNumber = rand() % 10;


//Randomizes the words in array word using randonNumber function we created.

    string ans = word[randomNumber];


//Gets the size of number of alphabets in the word that randomNumber fucntion randomizes.

//size() function is provided by C++ standard library file std.


    int size = ans.size(); 

// Outputs a random hint in array hint
    cout << endl << "Hint :  It is a " << hint[randomNumber] << endl << endl;



// Checks how much alphabets are in that word that randomNumber chooses and puts the same amount of blanks.

// amount of alphabets = amount of blanks

//amount of alphabets is accessed by size() function


    char blank[size];

    for (int i = 0; i < size ; i++)
    {
        blank[i] = '_';
    }
    
    
    
    
// it does the same as the above function but instead of blanks it adds spaces.



    for (int i = 0; i < size ; i++)
    {
        cout << blank[i] << " ";
    }



    cout << endl << endl;




    bool flag = true;
    bool flag2;
    char letter;


    while(flag != false) 
    {
        cout << "Input letter: ";
        cin >> letter;

        letter = tolower(letter);

        flag2 = false;

        for (int i = 0; i < size ; i++) 
        {
            if (letter == ans[i])
            {
                blank[i] = letter;
                flag2 = true;
            }
        }

        if (flag2 == false)
        {
            cout << endl << "Letter is not in the word, try again!" << endl << endl;
        }

        cout << endl;

        for (int i = 0; i < size ; i++)
        {
            cout << blank[i] << " ";
        }

        cout << endl << endl;

        if (check(blank, size))
        {
            cout << "You Won!!!";
            flag = false;
        }
 
    } 

    return 0;
}
