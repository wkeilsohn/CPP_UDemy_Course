#include "Movie.h"
#include "Movies.h"

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;


Movies::Movies()
{
}

Movies::~Movies()
{
}

void Movies::addMovie(Movie new_movie)
{

    if(find(this->movie_names.begin(), this->movie_names.end(), new_movie.name) != this->movie_names.end()){
        cout << "Movie already in collection." << endl;
    } else {
        this->movie_lst.push_back(new_movie);
        this->movie_names.push_back(new_movie.name);
        cout << "Movie added to collection." << endl;
    };
};

void Movies::viewMovies()
{
    auto vec_size = movie_names.size();
    
    if(vec_size > 0){
        cout << "The following movies are present in your collection: ";
        for(auto i: movie_names)
        cout << i << endl;   
    }else{
        cout << "There are no movies in your collection." << endl;
    }
};


void Movies::incrementWatch(string movie_name)
{
    bool in_col = false;
    ptrdiff_t col_num;
    
    for(auto i: movie_names){
        if(movie_name == i){
            in_col = true;
            col_num = find(movie_names.begin(), movie_names.end(), i) - movie_names.begin();
            break;
        }
    }
    
    if(in_col){
        this->movie_lst[col_num].watched++;
        cout << "You have increased the times you have watched this film." <<endl;
        cout << "Your current total times watched is: " << movie_lst[col_num].watched <<endl;
    } else{
        cout << "That movie is not currently in your collection.";
    }
};

void Movies::removeMovie(string movie_name)
{
    int mov_num = 0;
    
    for(Movie i: movie_lst){
        if(movie_name == i.name){
            movie_names.erase(movie_names.begin() + mov_num);
            movie_lst.erase(movie_lst.begin() + mov_num);
            cout << "The movie: " << i.name << " has been removed from your collection." << endl;
        }else{
            cout << "That movie was not in your collection prior to this attempt." << endl;
        }
        mov_num ++;
    }

};