#include<iostream>
#include<vector>

template <typename T>
struct Subrange {
	private:
		T start, end, step;

	public:
		Subrange();

		// init's start and end point for interval
		// step will be automatically calculated if it is an int type
		Subrange(T start_in, T end_in);

		// init's all data members with matching arguments
		// 
		Subrange(T start_in, T end_in, T step_in);

		~Subrange();

		std::vector<T> getRange();
}

#include "subrange.cpp"
