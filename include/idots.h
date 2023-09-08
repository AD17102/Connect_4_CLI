
#include <string>
namespace dots{

	class idots{
	

		public: 
			//ownership of a dot/puck
			virtual void set_owner(const std::string owner); 
			virtual void set_owner(const char *  owner); 
			virtual void get_owner()const; 

			//color
			virtual void set_color(const std::string color); 
			virtual void set_color(const char * color); 
			virtual void get_color()const; 

			//position/coordinates
			virtual std::string get_coordinates()const; 
			virtual void set_coordinates(const unsigned short width, const unsigned short height); 
			virtual void set_coordinates(const unsigned int spaces); 

	}; 
}


