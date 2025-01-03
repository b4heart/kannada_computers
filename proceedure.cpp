/*
Reference CPP code containing all the basics of C++ (a.k.a. C) proceedural form.
  */

#include <iostream>
#include <cmath>
#include <string>
#include <array>
#include <cstdlib>

// STLs
#include <array>
#include <vector>
#include <set>
#include <tuple>
#include <map>

// for sorting
#include <algorithm>

// for files
#include <fstream>


// for remove(file)
#include <cstdio>

using std::endl; // name space for endl only
// g++ .\proceedural.cpp -o proceedural.exe; .\proceedural.exe



void section(std::string start)
{
    std::cout << "\n****** begin: " << start << " ******" << std::endl;
}
void section(void)
{
    std::cout << "****** end ******" << std::endl;
}

void myStrings(void) {
    std::string name, line;
    float n, x, z;
    name = "world";

    // -----------------
    section("strings");
    std::cout << "A line about yourself: ";
    std::cout << "std::getline(std::cin, line)" << endl;
    line = "MyLine AutoAdded";
    std::cout << "Hi " << name << ", You said: " << line << std::endl;
    line = "I always want to say Hello: Hello!";
    std::string copy_line = line;
    std::cout << "line: " << line << endl;
    line.insert(33, name);
    std::cout << "new line after the insert: " << line << endl;
    n = name.length();
    std::cout << line << std::endl;
    std::cout << "Length of the name: " << name << " is " << n << std::endl;
    std::cout << "Comparing line with the name: " << line.compare(name) << std::endl;
    std::cout << "Finding Hello: " << line.find("Hello") << std::endl;
    std::cout << "Reverse Finding Hello: " << line.rfind("Hello") << std::endl;
    std::cout << "Erase: " << line.erase() << endl;
    line = copy_line;
    std::cout << "Find first of Hello: " << line.find_first_of("Hello") << endl;
    std::cout << "Find first not of Hello: " << line.find_first_not_of("Hello") << endl;
    std::cout << "Find last of Hello: " << line.find_last_of("Hello") << endl;
    std::cout << "Find last not of Hello: " << line.find_last_not_of("Hello") << endl;
    section();
    // -----------------
}

void myMath(void) {
    // -------------------
    int n = 7;
    section("math ops");
    std::cout << "Some math operations on the value: " << n << std::endl;
    int x = pow(n, 3);
    std::cout << "pow of 3: " << x << std::endl;
    x = sqrt(n);
    std::cout << "sqrt: " << x << std::endl;
    x = fmax(n, 10);
    std::cout << "fmax with 10: " << x << std::endl;
    section();
    // -------------------

    std::array<int, 4> a = {10, 20, 30, 40};
    std::cout << "Size of array: " << a.size() << a[2] << a.at(2) << std::endl;
}

void myConditions(void) {
    section("code conditions with rand function");
    int y = 20;
    int x = std::rand();
    std::string a = "aye", b = "bee";
    if (x > y) {
        std::cout << "Printing a:" << a << std::endl;
    }
    else if (x == y) {
        std::cout << "Things are equal!" << std::endl;
    }
    else {
        std::cout << "X is lesser and hence showing b:" << b << std::endl;
    }
    int z = x && y;
    std::cout << "Look, x is:" << x << " and y is:" << y << std::endl;
    std::cout << "x and y is: " << z << std:: endl;
    z = x || y;
    std::cout << "x or y is: " << z << std:: endl;
    z = x & y;
    std::cout << "x bit-and y is: " << z << std:: endl;
    z = x | y;
    std::cout << "x bit-or y is: " << z << std:: endl;
    z = x << y;
    std::cout << "x << y is: " << z << std:: endl;
    z = x >> y;
    std::cout << "x >> y is: " << z << std:: endl;

    a.compare(b)? std::cout << "Strings are equal\n": std::cout << "Strings are unequal\n"; 
    std::cout << "The value of 'y' to find the days of the week is :" << y;
    std::string day;
    switch(y) {
        case(1): day = "Monday";
                break;
        case(2): day = "Tuesday";
                break;
        case(3): day = "Wednesday";
                break;
        case(4): day = "Thursday";
                break;
        case(5): day = "Friday";
                break;
        case(6): day = "Saturday";
                break;
        case(7): day = "Sunday";
                break;
        default: day = "Invalid day!";
    }
    std::cout << ", so it's value is :" << day << std::endl;

    section();
}

int same(int x, int y) {
    return x * y;
}
std::string same(std::string x, std::string y) {
    return (x + " added to " + y);
}


int lateFunc(int); // function declaration
int g = 5; // global scoped variable
namespace foo {
    int cout(void) {
        std::cout << "Direct cout with out std::  & i will return true" << endl;
        return true;
    }
}
void myBasicFunctions(void) {
    section(" functions, scopes, enums, namespaces, try-catches");
    unsigned n = 4;
    std::cout << "Some Late function (a factorial operation) called after declaration:" << lateFunc(4) << std::endl;
    std::cout << "When I try to add two numbers: " << same(6,7) << std::endl;
    std::cout << "When I try to add two strings: " << same("foo", "bar") << std::endl;
    
    int g = 6;
    std::cout << "Local g: " << g << ", Global g: " << ::g << std::endl;
    std::cout << "Calling a namespace function foo::cout: " << foo::cout() << endl; 
    enum e{a=20, b, c, d, e};
    std::cout << "vaue of enum of e[d] is: " << e::d << endl;
    
    try {
        std::cout << "Throwing before generic" << endl;
        throw g;
        std::cout << "After the throw (generic) - this will NOT be printed" << endl;
    } catch (...) {
        std::cout << "The error was caught (generic)" << endl;
    }

    try {
        std::cout << "Throwing before int" << endl;
        throw g;
        std::cout << "After the throw (int) - this will NOT be printed" << endl;
    } catch (int err) {
        std::cout << "The error was caught (int): " << err << endl;
    }

    std::cout << "Done with handling exceptions!" << endl;
    section();
}

bool _reverseSort(unsigned int a, unsigned int b) {
    return a > b;
}

void myStls(void) {
    using std::cout;
    section(" Dealing with arrays and STL derieved data");
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[2];
    brr[0] = 3;
    brr[1] = 5;
    cout << "arr[3]=" << arr[3] << ", brr[1]=" << brr[1] << endl;
    cout << "sizeof bool: " << sizeof(bool) << ", sizeof int: " << sizeof(int) << ", size of arr: " << sizeof(arr) << ", Elements in arr: " << (sizeof(arr)/sizeof(*arr)) << endl;

    cout << "---> Dealing with STL array ...." << endl;
    std::array <int, 6> crr = {1, 2, 3, 4};
    for (unsigned int i = 0; i < crr.size(); i++) {
        cout << "  I: " << i << ", Value=" << crr[i] << endl;
    }
    cout << "front:" << crr.front() << ", back:" << crr.back() << ", at(2):" <<crr.at(2) << endl;

    cout << "---> Dealing with STL vector ...." << endl;
    std::vector <std::string> s;
    s.push_back("hello");
    s.push_back("world");
    s.resize(6);
    s[4] = "new entry";
    for(unsigned int i = 0; i < s.size(); i++) {
        cout << i << " -> " << s[i] << endl;
    }

    cout << "Changing the dynamics of the vector sized: " << s.size()  << " >> " << s.empty() << endl;
    s.assign(s.size(), "default value");

    for(unsigned int i = 0; i < s.size(); i++) {
        cout << i << " => " << s[i] << endl;
    }
    std::vector <std::vector<int>> d2 = {{1, 2}, {44, 4}};
    cout << "d2.size=" << d2.size() << ", d2[1][0]=" << d2[1][0] << endl;


    cout << "---> Dealing with STL set (always sorted assending and unique) ...." << endl;
    std::set <char> alpha = {'c', 'a', 'b', 'a'};
    for (auto i = alpha.begin(); i != alpha.end(); i ++) {
        cout << "i: " << *i << endl;
    }
    std::set<int> mySet = {3, 1, 4, 2, 5};
    int index = 0;
    for (const auto& element : mySet) {
        std::cout << "Index: " << index << ", Element (sorted): " << element << std::endl;
        index++;
    }

    cout << "---> Dealing with STL tuple ...." << endl;
    std::tuple <std::string, unsigned int> joe("Male", 20);
    cout << "Joe's age: " << std::get<1> (joe) << ", Joe's gender: " << std::get<0> (joe) << endl;

    cout << "---> Dealing with STL map ...." << endl;
    std::map <std::string, unsigned int> signal {
        {"red", 1},
        {"yellow", 2}, 
        {"green", 3},
    };
    cout << "Green is: " << signal["green"] << endl;
    std::pair <std::string, unsigned int> w{"white", 4};
    std::tuple <std::string, unsigned int> b("blue", 5);
    signal.insert(w);
    // signal.insert(b); // you cannot do this.

    for(auto x : signal) {
        cout << " The color " << x.first << " is represented by " << x.second << endl;
    }

    cout << "---> Dealing with STL vector-sorting ...." << endl;
    std::vector <unsigned int> v = {345, 4542,2347,46734,845, 563};
    cout << "Before sort ..." << endl;
    for (auto i: v) {
        cout << "The vector is: " << i << endl;
    }
    cout << "After default sort ..." << endl;
    std::sort(v.begin(), v.end());
    for (auto i: v) {
        cout << "The vector is: " << i << endl;
    }
    cout << "After custom (reverse) sort ..." << endl;
    std::sort(v.begin(), v.end(), _reverseSort); // note it's _reverseSort and not _reverseSort() or _reverseSort(v.begin(), v.end())
    for (auto i: v) {
        cout << "The vector is: " << i << endl;
    }

    section();
}


void myFiles(void) {
    section("Dealing with files");
    std::string line;
    std::string filename = "some_file.txt";

    std::ofstream myf(filename);
    myf << "Something to write and contemplate..." << endl;
    myf << ".. why not, let me write another line..." << endl;
    myf.close();
    std::cout << "Just wrote the file: " << filename << endl;


    std::ifstream rf(filename);
    if (rf.is_open()) {
        unsigned int lno = 1;
        while(std::getline(rf, line)) {
            std::cout << "Read the line #" << lno << " : " << line << endl;
            lno++;
        }
        rf.close();

        try {
            short x = remove(filename.c_str());
            if (x == 0) {
                std::cout << "Successfully removed the file: " << filename << endl;
            }
            else {
                std::cout << "Was unable to remove the file: " << filename << endl;
            }
        }
        catch (...) {
            std::cout << "I was unable to remove the file: " << filename << endl;
        }
            

    }
    myf.close();

    section();
}


#define EL std::endl

int main(int argc, char const *argv[]) {
    // -----------------
    section("arguments");
    std::cout << "The arguments count: " << argc << ". The code: " << argv[0] << EL;
    section();
    // -----------------    
    myStrings();
    myMath();
    myConditions();
    myBasicFunctions();
    myStls();
    myFiles();
    return 0;
}

int lateFunc(int x) {
    if (x == 1) {
        return 1;
    }
    else {
        return (x * lateFunc(x-1));
    }
}
