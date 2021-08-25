//
//  main.cpp
//  youtube.cpp
//
//  Created by Kaitlin Jones on 8/17/21.
//

//FOLLOWING CALEB CURRY C++ ALL IN ONE TUTORIAL SERIES; YOUTUBE
/*
double power(double base, int exponent){
    
    double result = 1;
    for(int i = 0; i < exponent; i++){
        
        result = result * base;
    }
    
    return result;
}

void print_pow (double base, int exponent){
    
    double myPower = pow(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << "." << endl;
    cout << myPower << endl;
    
}

int main() {
    
    int base;
    double exponent;
    
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    
    print_pow(base, exponent);
    return 0;
}
*/
/*
int main(){
    
    short a;
    int b;
    long c;
    long long d;
        // short <= int <= long <= long long
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    
    cout << ULLONG_MAX;
    
}
*/
/*
int main(){
    
    char x = 125;
    
    cout << x << endl;
    
}
*/

//STRINGS AND STRING CLASS


    
    
   
   /* string complete_greeting = greeting  + " there";
    
    
    cout << complete_greeting << endl;
    complete_greeting += "!";
    cout << complete_greeting.length()<< endl;
    
    char name[] = "Caleb";//c string == array of characters "Caleb/0
    return 0;
    */
    
    //cin >> greeting; //stops at white space
    //cout << greeting << endl;
    //correct way to get user input from strings is getline:
    //getline(cin, greeting);
    //cout << greeting << endl;
    //cin.getline can be used for numbers

//#include <iostream>
//#include <string>

//using namespace std;

//int main (){
 /*
    string greeting = "What the hell";
    cout << greeting.length() << endl;
    cout << greeting.size() << endl;
    
    //greeting += " there!";
    //works the same as greeting.append(" there!");
    //greeting.insert(3, "        ");
    cout << greeting << endl;
    
    greeting.erase (greeting.length() - 1);
    cout << greeting << endl;
    
    greeting.replace(9, 4, "****");
    cout << greeting << endl;
 */
//STRING OPERATION METHODS
    
  /*  string greeting = "What the hell";
    greeting.replace(greeting.find("hell"), 4, "****");
    cout << greeting << endl;
  */
  /* string greeting = "What is up?";
    cout << greeting.substr(5,2) << endl;
    cout << greeting.find_first_of("aeiou") << endl;//returns index of first vowel
    cout << greeting.find_first_of("!") << endl;
    //npos == -1; used for testing; <<<<<<<<<<<<<<<<<<<<<<< READ ABOUT NPOS IN BOOK
    unsigned long x = -1;
    cout << x << endl; // same value as unfound value because unsigned long can't hold negative variable
    if (greeting.find_first_of("!") == -1) cout << "NOT FOUND!" << endl;
  */
    //STRING COMPARISON
    
   /* string greeting = "What is up?";
    if(greeting == "What is up?") cout << "EQUALS" << endl;
    if(greeting.compare("What is up?") == 0) cout << "EQUALS" << endl; //best way; used often in java
    }
   */


//CONSTANTS % Hexadecimal and Octaldecimal 3:00:00

/*
#include <iostream>
#include <string>

int main(){
    
    using namespace std;
    //RESEARCH UNICODE CONSTANTS
    //2:58:44
    
    int number = 30;//int
    cout << hex << number << endl;
    
    int number1 = 0x30;//hex
    cout << number1 << endl;
    
    int number2 = 030;//oct
    cout << number2 << endl;
}*/


//  OPERATOR PRECEDENCE AND ASSOCIATIVITY
/*
#include <iostream>
 #include <string>

 int main(){
     
     using namespace std;
     double x;
     double y;
     
     x = 10;
     (y = x) = 100;//right to left gets 100 and 100; left to right gets 10 and 100;
     cout << x << "\t" << y << endl;
}*/


//CONTROL FLOW 3:20:36

//branching
    //if statements and switch statements
    
    /* if statement syntax:
     if(expression){ ----- true or false; if true code executes if false code is skipped;
        code
     }
     else... ----------- if "if" is true it will execute if code; if false else code will execute;
     
     else if syntax:
        if(exprssion){
            code
        }
        else if (expression){
            code
        }
        else.........
     */
    
    /* switch statement syntax:
     
        switch(age){
            case 17:
                code
            break;
     
            case 18:
                code
            break;
     
            case 19:
                code
            break;
        }
     */
    
/*#include <iostream>
#include <string>
    
    
    using namespace std;
    
    int main (){
        
        int age = 18;
        
        if(age < 13){
            
            cout << "You are not old enough" << endl;
            
        }
        else if(age < 19){
            
        cout << "You're almost old enough" << endl;
            
        }
        
        else{
            
        cout << "False" << endl;
            
        }
        return 0;
        
    }
        
        string name_answer = "Claire";
        int age_answer = 63;
        string name_guess;
        
        cout << "Guess my name!:";
        cin >> name_guess;
        
        int age_guess;
        cout << "Guess my age!:";
        cin >> age_guess;
        
        if (name_guess != name_answer){
            
            if (age_guess == age_answer){
                cout << "YOU GOT IT RIGHT!" << endl;
            }
        }
        
        //logical operators : && and, || or, ! not
        //comparison operators: == equal, != not equal, < less than, >greater than, <= less than equal to, >= greater than equal to;
    }
 
 //SWITCH STATEMENTS
 
 int age;
 
 cout << "What is your age?";
 cin >> age;
 
 switch(age){
         
     case 13:
     case 14:
         cout << "you are 13 or 14." << endl;
         break;
     default:
         cout << "Catch all\n";
         break;
 }

//SWITCH STATEMENTS WITH ENUM AND ENUM CLASS 3:48:04
#include <iostream>
#include <string>
    
    
    using namespace std;
    
    int main (){
    
        enum class Season{summer, spring, fall, winter};
        Season now = Season::winter;
        
        switch(now){
                
            case Season::summer:
                break;
            case Season::spring:
                break;
            case Season::fall:
                break;
            case Season::winter:
                cout << "Stay warm!\n";
                break;
        }
        
        return 0;
}
*/

//INTRO TO LOOPS 3:51:04

//looping
    //while, for, and do while loops
        

/*
    
    I - INITIALIZE A VARIABLE
    C - CONDITION
    U - UPDATE
 
        int i = 0;                  //I
            while (i < 10){         //C
                    i++;            //U
            }
 in a while loop the code happens after the condition;
 in a do while loop the code happens at least once;
 
 //for loop:
 
 for( int i = 0; i<10; i++){
        code
 }
 
 for loops are great when you know how many time the loop needs to execute;
 while loops are great when you want the loop to execut indefinitely;
 

//3:58:00
#include <iostream>
#include <string>
    
    
    using namespace std;
    
    int main (){

        
        for (int i = 9; i >= 0; i--){
            cout << i << endl;
        }
        
        for (int i = 0; i < 10; i++){
            cout << i << endl;
        }
        
        int factorial = 5;
        for (int i = factorial - 1; i > 0; i--){
            factorial = factorial * i;
        }
        
        cout << "factorial of 5 is " << factorial << endl;
        return 0;
}
*/

//while loop:


       /*
        int i = 0;
        while (i < 10){
            
            cout << i << "\t";
            i++;
        }
        cout << endl;
        
        int a = 9;
        while (a >= 0){
            
            cout << a << "\t";
            a--;
        }
        
        cout << endl;
        
        
        
        int factorial = 5; //5 * 4 * 3 * 2 * 1
        int i = factorial - 1;
        
        while (i > 1){
            factorial *= i;
            i--;
        }
        cout << factorial << endl;
        return 0;
        
    }


//do while loop:

    //use a do while loop when you want the loop to execute at least once;


        
        string password = "hellotacos123";
        string guess;
        
        do {
            cout << "Guess the password: ";
            cin >> guess;
        }
        while (guess != password);
        
        return 0;
        
    }


//BREAK AND CONTINUE STATEMENTS 4:20:07


        string sentence = "Hello my name is Caleb";
        
        for (int i = 0; i < sentence.size(); i++){
            
        
            
            if (sentence[i] == ' '){
                 continue;
            }
            cout << sentence[i] << endl;
        }
        cout << "DONE!" << endl;
        
        return 0;
    }
//break gets you out of whatever loop you are in; continue takes a que and moves on to the next iteration of the loop; (used to skip characters)

//CONDITIONAL OPERATOR ie TURNARY OPERATOR 4:25:25

        
        int answer = 11;
        int guess;
        
        
        cout << "Guess the number: ";
        cin >> guess;
        
        // syntax: variable declaration = condition statement ? if true : if false;
        
        int points = guess == answer ? 10 : 0;
        
        // same as saying:
         
         if (guess == answer){
            points = 10;
         }
        
   
        cout << points << endl;
        
        // you could also do:
            guess == answer ? cout << "Good Job!" : cout << "Bad Job!" << endl;
        
        
        return 0;
    }
*/

//INTRO TO OUR APP 4:28:20


//creating a menu:

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
    
using namespace std;



void play_game(){
        
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    
    while (true){
        int guess;
        cin >> guess;
        
        if (guess == random){
            cout << "YOU WIN!\n" << endl;
            break;
        }
        
        else if (guess < random){
            cout << "Too low...\n";
        }
        
        else{
            cout << "Too high...\n";
        }
    }
    
 }
        
    

int main (){
     
    
    srand(time(NULL));
    int choice;
                
        do {
            cout << "0. Quit.\n" << "1. Play Game!\n";
            cin >> choice;

                switch(choice)
                {
                    case 0:
                        cout << "Thanks for nothing\n";
                        return 0;
                        
                    case 1:
                        play_game();
                        break;
                }
            
        } while (choice !=0);
        
        
        
        return 0;
    }

/* Arrays and vectors 4:48:00
 
 array:
 int guesses[100]
 
 0 based
 
 index - num where variable is located in array; index starts at 0;
    last element is size - 1 (because index starts at 0)
 
array size is static when it is declared;
make sure that your array is large enough to store the information you want to put into it.
 templatized array:
 array inside of an object;
 
 vectors:
 an array that you can add more elements to as you go;
 dynamically sized; easier to work with;
  
  */

