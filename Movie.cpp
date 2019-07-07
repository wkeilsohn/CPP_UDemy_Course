#include "Movie.h"

#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


Movie::Movie(string movie_name, string movie_rating, int times_watched)
{
    name = movie_name;
    rating = ratingChecker(movie_rating);
    watched = movieWatcher(times_watched);
    
    cout << "New Movie: " << name << " has been created." << endl;
    cout << "This movie has a rating of: " << rating << endl;
    cout << "You have watched this movie: " << watched << " time(s)." << endl;
}

Movie::~Movie()
{
}

string Movie::ratingChecker(string rating_value){
    for(auto i: Movie::ratings){
        if(i == rating_value){
            return i;
              break;
            }
        }
    return Movie::ratings[0];
};

int Movie::movieWatcher(int watched_value = -1)
{
    if(watched_value <= -1){
        return 0;
    }else {
        return watched_value;
    };
};