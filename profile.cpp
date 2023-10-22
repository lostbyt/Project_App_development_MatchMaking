#include "profile.hpp"
#include <iostream>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
   : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}; 

std::string Profile::view_profile() {
   std::string bio;
   std::string hobbiesList;
   bio += "Name: " + name + '\n' + "City: " + city + '\n' + "Age: " + std::to_string(age) + '\n' + "Country: " + country + '\n' + "Pronouns: " + pronouns + '\n' + "Hobbies: " + '\n';

   for (int i= 0; i < hobbies.size(); i++) {
      hobbiesList += "  -" + hobbies[i] + '\n';
   }

   bio += hobbiesList;
   return bio;
}

void Profile::add_hobbies(std::string new_hobby) {
   hobbies.push_back(new_hobby);
}