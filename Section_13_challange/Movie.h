#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Movie
{
public:
    Movie(string movie_name, string movie_rating, int times_watched);
    
    ~Movie();
    
    string name;
    string rating;
    int watched;

    vector<string> ratings{"No Rating", "G", "PG", "PG-13", "R"}; 
    
    string ratingChecker(string rating_value);
    
    int movieWatcher(int watched_value);
    
    //friend Movies::Movie(const Movie &new_movie);

};

#endif // MOVIE_H
