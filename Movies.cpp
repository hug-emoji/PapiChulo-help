#include <iostream>
#include <string>
#include "Movies.h"
#include "Movie.h"







 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

  /*************************************************************************
    add_movie expects the name of the movie, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    // you implement this method

    // checking if movie with such name already stored.
    for(auto const& storedMovie: movies){
        if(name == storedMovie.get_name()){
            return false;
        }
    }

    movies.emplace_back(name, rating, watched);
    return true;
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
   //15

//Only static functions are called with class name.
//classname::Staicfunction();
//Non static functions have to be called using objects.
bool Movies::increment_watched(std::string name) {
   // you implement this method
   for(std::string i{name};;){
        for(auto s{0}; s < movies.size(); ++s)
        {
            if(i == (movies.at(s)).name){
                Movie *add = new Movie{"None","None", 0};
                (*add).increment_watched();
                delete add;
                return true;
            }
        }
   }
   return false;
}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const {
   // You implement this method
   for(auto element: movies){
        std::cout << element.get_name() << std::endl; // element is a movie object
   }

}