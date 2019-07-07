#ifndef MOVIES_H
#define MOVIES_H

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "Movie.h"

using namespace std;

class Movies
{
public:
    Movies();
    ~Movies();
    
    void addMovie(Movie new_movie);
    void viewMovies();
    void incrementWatch(string movie_name);
    void removeMovie(string movie_name);
    
    vector<Movie> movie_lst;
    vector<string> movie_names;

private:
    //vector<Movie> movie_lst;

};

#endif // MOVIES_H
