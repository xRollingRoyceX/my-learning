/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever -
 * Created on September 29, 2017, 10:06 AM */

//"inclds": holds all includes and usings::x-y-z
#include "inclds"

//get temps and print all double numbers, then delete doubles
int main() {
    typedef double dub;
    
    vector<dub>temps{45, 65, 3, 2, 2, 45, 21, 98, 74, 32, 21,
            41, 65, 32, 85, 45, 21, 20, 120, 95, 53, 52,21,54,32,11,
	    43, 64, 12, 41, 1.15, 413.11, 41, .54, 41, 96, 45, 11, 21};
    sort(temps.begin(), temps.end());
    
    //to hold repeated numbers, and the duplicate count
    auto cnt = 0;
    vector<dub>dubNum;
    
    /* check  if numbers are different, if so; print them. Also while
     * moving through the vector, if they are the same, they
     * will be stored in a new vector and [+(1)] will be added to cnt */
     for (decltype(temps.size()) i = 0; i != temps.size(); ++i) {
        if (temps[i - 1] != temps[i]) {
            cout << temps[i] << ' ';
        } else {
            ++cnt;
            dubNum.push_back(temps[i]);
        }
    }
    //Print the results. Also use a enhanced for loop to print duplicates
    cout << "\n\n" << cnt << " = number of of duplicates removed"
            " from the list of numbers\n" << endl;
    cout << "DUPLICATES: " << endl;
    for (auto &i : dubNum) {
        cout << i << endl;
    }
}
