#include <string>
#include <vector>

class Profile {
   std::string name;
   std::string city;
   std::string country;
   std::string pronouns;
   std::vector<std::string> hobbies;
   int age;

   public:

   Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns= "they/them");

   std::string view_profile();

   void add_hobbies(std::string new_hobby);
};