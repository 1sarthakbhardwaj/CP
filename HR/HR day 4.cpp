using namespace std;
#include <iostream>
            
class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
  
    if(initialAge < 0){
        cout << "Age is not valid, setting age to 0"
        age = 0;
    }
    else{
        age = initialAge;
    }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        // Increment the age of the person in here

    }

int main(){