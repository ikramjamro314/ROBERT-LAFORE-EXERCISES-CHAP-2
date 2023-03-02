#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<iomanip>
using namespace std;

int main(){

	// 1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
     //   enter a number of gallons, and then displays the equivalent in cubic feet.
       /*
	float cf = 7.481 ;   //  (cf=cubic foot)   1 cubic foot contains 7.481 gallons
	int nog ;    // nog= no of gallons
	cout<<" enter the number of gallons ";
	cin>> nog ;
	float icf = nog / cf;     // icf=  converted in cubic feet = no of gallons/cubic foot
	cout<<" these gallons are equivalent to "<< icf <<" cubic feet  " <<endl;

        */
    /*	2. Write a program that generates the following table:
1990 135
1991 7290
1992 11300
1993 16200
Use a single cout statement for all outputs*/
    // cout<<" 1990 135  \n 1991 7290 \n 1993 16200 \n 1992 11300 " ;
    // here \n is a escape  sequence character which generates a new  line.

    /*3. Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19,*/
    /*
    const  int a = 10;
    int b , c;
    cout << a <<endl;
    b = a;
    b += 10;
    cout<< b <<endl;
    c = --b;
    cout<<c;

   */

    /* 4. Write a program that displays your favorite poem. Use an appropriate escape sequence
for the line breaks.*/
    // cout<<"\t The beloved is with you in the midst of your seeking! \n \t He holds your hand wherever you wander, RUMI.";

/*5. A library function, islower(), takes a single character (a letter) as an argument and
returns a nonzero integer if the letter is lowercase, or zero if it is uppercase.
 This function requires the header file CCTYPE.H. Write a program that allows the user to enter
a letter, and then displays either zero or nonzero, depending on whether a lowercase or
uppercase letter was entered. */
/*
    char letter;
    cout<<"enter any letter ";
    cin>>letter;
    if(islower(letter)) //islower  function is used to recognize that whether the char is
    // in lower case or not if it is greater  it convert it into lower case..
        cout<<"1";
    else
        cout<<"0";

        */
/*6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/
    /*

    float d;//d=dollars
    cout<<"enter the cash in dollars: ";
    cin>>d;
    float pound= d/1.487;
    float franc= d/0.172;
    float deutschemark = d/0.584;
    float yen= d/0.00955;
    cout<<d<<" dollars = "<<pound<<" pounds "<<endl;
    cout<<d<<" dollars = "<<franc<<" franc "<<endl;
    cout<<d<<" dollars = "<<deutschemark<<" deutschemark "<<endl;
    cout<<d<<" dollars = "<<yen<<" yen "<<endl;
              */
    /*7. You can convert temperature from degrees Celsius to degrees Fahrenheit
 by multiplying by 9/5 and adding 32. Write a program that allows the user to
  enter a floating-point number representing degrees Celsius, and then displays
   the corresponding degrees Fahrenheit.*/
    /*
    float C;//C=temp in celsius
    cout<<"enter temperature in celsius ";
    cin>>C;
    float F=(9*C)/5+32;//F=fahrenheit formula to convert  celsius into fahrenheit
    cout<<"celsius tem is  = "<<F<<" fahrenheit" ;
     */
    /*8. When a value is smaller than a field specified with setw(), the unused locations are, by
default, filled in with spaces. The manipulator setfill() takes a single character as an
argument and causes this character to be substituted for spaces in the empty parts of a
field. Rewrite the WIDTH program so that the characters on each line between the location
name and the population number are filled in with periods instead of spaces, as in
Portcity.....2425785*/
    /*
    int  a= 10000000;
    char b;
    cout<<"enter the char :   ";
    cin>>b;
    cout<<"Sukkur "<<setfill(b)<<setw(18)<<a;
     */
    /* 9. If you have two fractions, a/b and c/d, their sum can be obtained from the formula
a c a*d + b*c
--- + --- = -----------
b d b*d
For example, 1/4 plus 2/3 is
1 2 1*3 + 4*2 3 + 8 11
--- + --- = ----------- = ------- = ----
4 3 4*3 12 12
Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form.  */
    /*
    int  a , b , c, d;
    char temp ;  //to store  the '/ ' character temperory
    cout<<"enter the first fraction : ";
    cin>> a >> temp >> b;
    cout<<"enter the second fraction : ";
    cin>> c >> temp >> d;
    float  sol1 = (a * d) + (b * c);
    float  sol2= (b * d); // To devide it by sol1.
    cout<<"the sum of these fractions is  "<<sol1 <<temp <<sol2 <<endl;
      */
    /*10. In the heyday of the British empire, Great Britain used a monetary system based on
pounds, shillings, and pence. There were 20 shillings to a pound, and 12 pence to a
shilling. The notation for this old system used the pound sign, £, and two decimal points,
so that, for example, £5.2.8 meant 5 pounds, 2 shillings, and 8 pence. (Pence is the plural
of penny.) The new monetary system, introduced in the 1950s, consists of only pounds
and pence, with 100 pence to a pound (like U.S. dollars and cents). We’ll call this new
system decimal pounds. Thus £5.2.8 in the old notation is £5.13 in decimal pounds (actually £5.1333333). Write
a program to convert the old pounds-shillings-pence format to decimal pounds. */
    /*
    float P;  //P=old pounds
    cout<<"enter the pounds ";
    cin>>P;
    float S;//s=shillings
    cout<<"enter the shelling ";
    cin>>S;
    float PE;//P=pence
    cout<<"enter the pence ";
    cin>>PE;
    float decimalpounds= S*12+PE;//convert into penny
    cout<<"decimal pounds= "<<P+(decimalpounds/240)<<" £ "  ; //convert into decimal pounds
     */
    /* 11. By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation means.)
Use this manipulator, along with setw(), to help generate the following output:
 Last name  First name  Street address      Town State
------------------------------------------------------------
 Jones      Bernard   109 Pine Lane      Littletown MI
 O’Brian    Coleen    42 E. 99th Ave.    Bigcity NY
  Wong      Harry     121-A Alabama St.   Lakeville IL*/
    /*
    cout << setiosflags(ios::left);
    cout << setw(15) << "Last name ";
    cout << setw(15) << "First name ";
    cout << setw(20) << "Street address ";
    cout << setw(15) << "Town / state "<<endl;
    cout << "------------------------------------------------------------" << endl;
    cout << setw(15) << "Jones ";
    cout << setw(15) << "Bernard ";
    cout << setw(20) << "109 Pine Lane ";
    cout << setw(15) << "Littletown MI "<<endl;
    cout << setw(15) << "O'Brian";
    cout << setw(15) << "Coleen";
    cout << setw(20) << "42 E. 99th Ave.";
    cout << setw(15) <<" Bigcity NY  "<<endl;
    cout << setw(15) <<" Wong ";
    cout << setw(15) <<" Harry  ";
    cout << setw(20) <<" 121-A Alabama St. ";
    cout << setw(15) <<" Lakeville IL "<<endl;
       */
/* 12. Write the inverse of Exercise 10, so that the user enters an amount in Great Britain’s new
decimal-pounds notation (pounds and pence), and the program converts it to the old
pounds-shillings-pence notation. An example of interaction with the program might be
Enter decimal pounds: 3.51
Equivalent in old notation = £3.10.2.
Make use of the fact that if you assign a floating-point value (say 12.34) to an integer
variable, the decimal fraction (0.34) is lost; the integer value is simply 12. Use a cast to
avoid a compiler warning. You can use statements like
float decpounds; // input from user (new-style pounds)
int pounds; // old-style (integer) pounds
float decfrac; // decimal fraction (smaller than 1.0)
pounds = static_cast<int>(decpounds); // remove decimal fraction
decfrac = decpounds - pounds; // regain decimal fraction
You can then multiply decfrac by 20 to find shillings. A similar operation obtains pence .*/
    /*
    float decpounds;//new style
    cout<<"enter the amount in decimal pounds : ";
    cin>>decpounds;
    int   pounds = decpounds;
    float fracpounds=decpounds-pounds;//lost pound which now exists in fractonal
    float decshillings=fracpounds*20;//old style shillings as 1pound have 20 shillings
    int shillings = decshillings;
    float fracshillings=decshillings-shillings;//lost shillings which now  exists  in fractional
    int penny=fracshillings*12;//old style shillings as 1 shillings=12penny
    cout<<"the decimal  pounds convert into old notation :  "<< pounds <<"." << shillings <<"." <<  penny << " £ ";
    */










