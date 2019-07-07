#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Movie.h"
#include "Movies.h"

using namespace std;



int main()
{
	Movie Aliens = Movie("Aliens", "R", 42);
    Movies m1;
    
    m1.addMovie(Aliens);
    m1.viewMovies();
    m1.incrementWatch("Aliens");
    m1.removeMovie("Aliens");
    m1.viewMovies();
    
    
	
    return 0;
}
