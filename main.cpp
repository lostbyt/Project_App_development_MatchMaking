#include <iostream>
#include "profile.hpp"

int main () {

   Profile Bob("Bob", 35, "NY", "USA", "him" );
   Bob.add_hobbies("tennis");
   Bob.add_hobbies("chess");
   std::cout << Bob.view_profile();
}