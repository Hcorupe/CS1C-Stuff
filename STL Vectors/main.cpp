#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>


/*
 *
 * Programmer :Harrison Corupe
 * Class      :CS1C
 * Date       :9/11/19
 * Asgnment#  :HW05 STL Vectors
 *
 *
 *
 *
 * 1) What is the STL?
 *
 * The Standard Template Library (STL) is a set of C++ template classes to provide common programming
 * data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes,
 * algorithms, and iterators. It is a generalized library and so, its components are parameterized.
 *
 *
 * 2) Which vector operations change the size of a vector after its construction?
 *
 * Vectors are sequence containers representing arrays that can change in size. Just like arrays,
 * vectors use contiguous storage locations for their elements, which means that their elements can
 * also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays.
 *
 * .insert, .push_back, .pop_back, .resize
 *
 * 3)What is the STL array container and how does it differ from the built-in array and from a vector?
 *
 * A container array/std::array are fixed in size is a templated class and have built in member functions to access
 * them. Built in arrays require size to be known and have no built in functions. Vectors will alow for a dynamic
 * array size.
 *
 * 4) How does the vector member function resize differ from reserve
 * Vectors have the ability to resize itself automatically like dynamic arrays when an element is inserted
 * or deleted, the container handle their storage automatically. The main difference between vector resize()
 * and vector reserve() is that resize() is used to change the size of vector where reserve() doesn't.
 *
 * 5) What should begin() and end() do for a container?
 *
 *  1. begin() :- This function is used to return the beginning position of the container.
 *
 *  2. end() :- This function is used to return the after end position of the container.
 *
 *
 * 6) Give an example of using the vector push_back()
 *   modifier.
 *      std::vector<int> myvector;
 *
 *      int myint;
 *
 *      myvector.push_back (myint);
 *
 *
 */

using namespace std;

vector <int> lotto (int, int);
int randomInt (int i) {return std::rand() % i;}

int main()
{

    // SEEDING RANDOM //
    srand(time(NULL));
    // DEFINING RANGE OF LOTTERY NUMBERS TO BE PLAYED AND NUMBER OF PICKS //
    int range = 0;
    int picks = 0;


        cout << "\nPlease enter range of numbers to be played: ";
        cin >> range;
        cout << "Please enter number of picks to be pulled : ";
        cin >> picks;

        vector <int> resultV = lotto (range, picks);

        cout << "\nYour Lotto picks are: " << endl;
        for (int i = 0; i < picks; ++i)
            cout << resultV.at(i) << " ";

    return 0;
}



vector <int> lotto (int range, int picks) {

    // DECLARING VECTOR FOR LOTTERY POOL AND VECTOR FOR LOTTERY PICKS //
    vector<int> mainList;
    vector<int> picksList;

    // POPULATING LOTTERY POOL VECTOR //
    for (int i = 1; i < range; ++i)
        mainList.push_back(i);

    // SHUFFLING LOTTERY POOL VECTOR //
    random_shuffle(mainList.begin(), mainList.end(),randomInt);

    // ALLOCATING VECTOR WITH PRE DETERMINED SIZE FROM USER INPUT //
    picksList.reserve(picks);
    // POPULATING LOTTERY PICKS VECTOR //
    for (int j = 0; j < picks; ++j)
        picksList.push_back(mainList.at(j));

    return picksList;
}