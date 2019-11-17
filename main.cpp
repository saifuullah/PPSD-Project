/**

This is Movie ticket booking system
User can use it to book different movies avalible in list
We can also edit any movie data, and add new movie and delete movies

**/

#include <iostream>
#include <string>
#include <stdio.h>

/**This is customer class
//
// This class contain only Customer Data ::
// Include Setters and Getters
//
//
//
*/


using namespace std;
class customer
{
  private:
      //private Data
      string phone_number;
      string name;
      int book_seat;
      int movieId;
  public:

      //Constructer
   customer()
   {
       phone_number="Null";
       name="NULL";
       book_seat=0;
       movieId=0;
   }

                                    //Below is Setters And Getters
   void setMovieId(int x)
   {
       movieId=x;
   }
   int getMovieId()
   {
       return movieId;
   }
   void setPhone(string ph)
   {  phone_number=ph; }

   void setName(string n)
   {  name=n; }

   void bookSeat(int s)
   { book_seat=s; }




  string getPhone()
  {  return phone_number; }

  int getBookSeat()
  {  return book_seat; }

  string getName()
  {  return name; }


};


/**    ##########  Class Movie
**                This Class contain Data About movies
**
**
*/

class BookingSystem
{
  private:  //Private Data

        int total_price;
        int id_number;
        int movie_price;      ///These are data types
        int seats;            ///that will be used to store
        int seat_left;
        string name;          ///related data
        string show_date;
        string format;
        string show_time;




public:
  BookingSystem()   //Constructer
  {
      total_price=0;
      id_number=0;
      movie_price=0;
      seats=0;
      seat_left=0;
      name="NULL";
      show_date="NULL";
      format="NULL";
      show_time="NULL";


  }

  //Setters and getters
  void setTotalPrice(int x)
  { total_price=x; }

  void setId(int x)
  { id_number=x; }


void setMoviePrice(int x)
{   movie_price=x; }


void setSeatLeft(int x)
{seat_left=seat_left-x; }


string setName(string x)
{name=x;}

string setFormat(string x)
{format=x;}

string setShowDate(string x)
{ show_date=x; }

string setShowTime(string x)
{ show_time=x; }





void setSeat(int x)
{
    seats=x;
    seat_left=x;
}
 int getPrice()
  { return total_price; }

  int getId()
  { return id_number; }


int getMoviePrice()
{   return movie_price; }

int getSeat()
{return seats; }


int getSeatLeft()
{return seat_left;}


string getName()
{return name;}

string getFormat()
{return format;}

string getShowDate()
{ return show_date; }

string getShowTime()
{ return show_time; }




};
/**
**   class functions
**         This class contain functions that will perform different function on data
**
*/



class functions{
public:
customer cus[1000];       //Max of 1000 customers

int cus_current_place=0;  //Indexer for movie array
BookingSystem  bookingSysObj[20];   //object of booking system
const int movie_limit=20;
int movie_stored=0;
int current_place=0;










/**********************************************************************************
***************************************  Display Function  *************************
***************************************  Display Function  *************************
***********************************************************************************/

void display_list()
{

    cout<<"--------------------------------------------------------------------------------------------------"<<endl;
 for(int x=0; x<20; x++)
    {
        if(bookingSysObj[x].getId()!=0)
        {
            cout<<"Movie Id        :  "<<bookingSysObj[x].getId()<<endl;
            cout<<"Movie Name      :  "<<bookingSysObj[x].getName()<<endl;
            cout<<"Movie Format    :  "<<bookingSysObj[x].getFormat()<<endl;
            cout<<"Movie Show Date :  "<<bookingSysObj[x].getShowDate()<<endl;
            cout<<"Movie Show Time :  "<<bookingSysObj[x].getShowTime()<<endl;
            cout<<"Movie Price     :  "<<bookingSysObj[x].getMoviePrice()<<endl;
            cout<<"Movie Seats     :  "<<bookingSysObj[x].getSeat()<<endl;
        }
    }

    cout<<"-------------------------------------------------------------------------------------------------"<<endl;


}   //END




void addNewMovie()
{                         ///This is Add new movie function:

    if(movie_limit==movie_stored)  //check for if list is full
   { cout<<endl<<"Sorry, New movie cannot be added"<<endl;
    cout<<"Movie limit is full (20) "<<endl;
    cout<<"Delete a movie, than try again .!!"<<endl<<endl; }

    ///If list is not full add new movie than
else
{
    cout<<"Dear User, You are going to add a new movies "<<endl;
    cout<<"Please Enter Information about New Movie"<<endl;
    cout<<"***********************************************"<<endl<<endl;


    int nid;
    cout<<"Enter the Id of new movie :  ";
    cin>>nid;
    bookingSysObj[current_place].setId(nid);


    string nname;
    cout<<"Enter the Name of New movie :  ";
    cin>>nname;
    bookingSysObj[current_place].setName(nname);

    string nfor;
    cout<<"Enter the Format of New movie (2D or 3D) :  ";
    cin>>nfor;
    bookingSysObj[current_place].setFormat(nfor);


    string ntime;
    cout<<"Enter the Time of New movie :  ";
    cin>>ntime;
    bookingSysObj[current_place].setShowTime(ntime);


    string ndate;
    cout<<"Enter the Date of New movie -->format(12/4/2000) :  ";
    cin>>ndate;
    bookingSysObj[current_place].setShowDate(ndate);


    int nprice;
    cout<<"Enter the Price of New movie :  ";
    cin>>nprice;
    bookingSysObj[current_place].setMoviePrice(nprice);

    int nseat;
    cout<<"Enter The Seats in New movie  :  ";
    cin>>nseat;
    bookingSysObj[current_place].setSeat(nseat);

    cout<<endl<<"Please wait ......."<<endl<<"New Movie Has been added successfully  "<<endl;

    current_place++;
    movie_stored++;

}//else ENd

}//End




};
int main()
{
    functions f_Obj;
    f_Obj.addNewMovie();
    f_Obj.display_list();
    return 0;
}
