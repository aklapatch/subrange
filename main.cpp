#include<vector>
#include<iostream>

// represents a range of integers
struct subrange {
	int start, end;

	// sets start and end
	subrange(int start_in, int end_in){
		start = start_in;
		end = end_in;
	}
	
	// returns vector with the range of values
	std::vector<int> getRange(){
		std::vector<int> output(end - start + 1);

		int j=0;
		for(int i = start; i <= end; ++i){
			output[j++]=i;
		}

		return output;
	}

	// return vector with the selected range and step of 1
	static std::vector<int> get(int start, int end){	
		std::vector<int> output(end-start + 1);

		int j=0;
		for(int i = start; i <= end; ++i){
			output[j++]=i;
		}

		return output;
	}
};

int main(){

	// output subrange to vector
	subrange test = subrange(19,26);
	std::vector<int> out = test.getRange();

	// output results of constructor
	std::cout << "two parameter constructor: ";
	for(int i = 0; i < out.size(); ++i){
		std::cout << out[i] << "\t";
	}
	std::cout << "\n";

	// get results of static method
	out = subrange::get(34, 42);
	std::cout << "Static get operation: ";

	// output results
	for(int i = 0; i < out.size(); ++i){
		std::cout << out[i]<< "\t";
	}
	std::cout << "\n";

	return 0;
}
