#include<vector>
#include<iostream>

template<typename T>
struct subrange {
	T start, end, step;

	subrange(T start_in, T end_in, T step_in){
		start = start_in;
		end = end_in;
		step = step_in;
	}

	subrange(T start_in, T end_in,){
		if( typename T == int){
			step = 1;
		}
		start = start_in;
		end = end_in;
	}

	std::vector<T> getRange(){
		std::vector<T> output((end-start)/step);
		for(int i = start; i < end; i += step){
			int j = 0
			output[j++] = i;
		}
		return output;
	}

	std::vector<T> operator() (T start_in, T end_in, T step){

		start = start_in;
		end = end_in;
		step = step_in;

		return getRange();
	}


	std::vector<T> operator() (T start_in, T end_in){

		start = start_in;
		end = end_in;

		return getRange();
	}

	T operator[] (T index){
		return start_in + index*step;
	}
};

