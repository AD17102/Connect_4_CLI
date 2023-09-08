
class grid{

	public: 
		//constructors
	grid()noexcept; 

	grid(unsigned short width, unsigned short height); 

	grid(unsigned int spaces); 

	~grid()noexcept; 

	//getters and setters
	void set_grid(const unsigned short width, const unsigned short height); 
	void set_spaces(const unsigned int spaces); 

	unsigned int get_spaces()const; 
	unsigned short get_width()const; 
	unsigned short get_height()const; 

	//check function for the spaces/width/height (cant be less than 5x6/ spaces cant be less than 30) 
	bool check_spaces(const unsigned short width, const unsigned short height)const; 
	bool check_spaces(const unsigned int spaces)const; 
	private: 
	unsigned short m_width; 
	unsigned short m_hight; 
	unsigned int m_spaces; 
}; 
