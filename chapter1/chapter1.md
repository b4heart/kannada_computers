# kannada-computers
## Chapter 1


### Difference b/w Computer Science and Computer Engineering
#### Computer Science
* Software centric
* Calculus
* Linear Algebra
* Differential Equations
* Design and Analysis of Algorithms
* Design Patterns
* Theory of Computation
* Discrete Math

#### Computer Engineering
* Hardware centric

* Calculus
* Linear Algebra
* Differential Equations
* Circuit Analysis
* Digital Electronics
* Signal Processing
* Embedded Systems
* Continuos Math

### Other Electives
* Machine learning, Deep Learning, Generatie AI
* Operating Systems
* Computer Architecture


### Design Principles
1. item Divide & Conquer
1. item Increase Grouping
1. item Reduce Dependency
1. item Increase Abstraction
1. item Increase Reusability
1. item Anticipate Deprecation
1. item Design for Portability
1. item Design for Testability
1. item Design for Idiots
1. item Design for Flexibility

### Types of programming languages

#### Based on the style
* Procedural (C)
* Functional (Scala)
* Object-oriented programming languages (OOP) (Java)
* Scripting (Perl)
* Logic programming (Prolog)


### Object Oriented Programming
* Abstraction
* Encaptulation
* Inheritence
* Polymorphism


#### Based on the execution
* Compiled
* Interpreted


#### Based on coding
* High level
* Assembly
* Low level


### SOLID software principles
* Single Responsibily
* OpenClose
* Liskov Substitution
* Interface Segregation
* Dependency Inversion

### KISS principle 
#### Keep It Simple Silly


### During the discussion
```cpp
#include<iostream>

// How to Run: g++ .\chapter1.cpp -o .\chapter1.exe; .\chapter1.exe 6 

int sum(int a, int b) {
    int x;
    x = a + b;
    std::cout << "I am the sum function!" << std::endl;
    return x;
}

int main(int argc, const char *argv[]) {
    std::cout << "Hello Hrudai!" << std::endl;
    int v = sum(1, 3);
    std::cout << v << std::endl;
    std::cout << "The count is: " << argc << std::endl;
    if (argc > 1) {
        std::cout << "The first element is: " << argv[1] << ". Its number is: " << atoi(argv[1]) << std::endl;
        if (atoi(argv[1]) < 5) {
            std::cout << "Hrudai, you have to eat!" << std::endl;
        }
        else {
            std::cout << "Hrudai, you had good food!" << std::endl;
        }
    }
    return 0;
}
```

```python
import sys

# How to Run: >python .\chapter1.py h

print("Hello Hrudai")
print("The argument count:", len(sys.argv))
if len(sys.argv) > 1:
    v = int(sys.argv[1])
    if v < 5: 
        print("You have to eat!")
    else:
        print("You had good food!")    
```

### Try this yourself!
```cpp

#include <iostream>
#include <string>

using std::endl;

void section(std::string start="") {
    if (start != "") {
        std::cout << "\n****** begin: " << start << " ******" << endl;
    }
    else {
        std::cout << "****** end: " << "" << " ******" << endl;
    }
    
}

int main(int argc, char const *argv[]) {
    std::string name, line;
    float n, x, z;
    name = "world";

    // -----------------
    section("arguments");
    std::cout << "The arguments count: " << argc << ". The code: " << argv[0] << endl;
    section();
    // -----------------

    return 0;
}

# Execute it: 
# >  g++ .\chapter1.cpp -o chapter1.exe; .\chapter1.exe hello world 1 2 3
```