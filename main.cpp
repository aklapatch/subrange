#include<vector>
#include<iostream>

// represents a range of intengers
struct subrange {
	int start, end, step;

	// sets start and end
	subrange(int start_in, int end_in){
		step = 1;
		start = start_in;
		end = end_in;
	}

	// sets start, end and step
	subrange(int start_in, int end_in, int step_in){
		step = step_in;
		start = start_in;
		end = end_in;
	}
	
	// returns vector with the range of values
	std::vector<int> getRange(){
		int size = ( (end-start)%step != 0 ) ? (end-start)/step +1 : (end-start)/step;
		std::vector<int> output(size);

		int j=0;
		for(int i = start; i <= end; i+=step){
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
	subrange test(10,20,4);

	std::vector<int> out = test.getRange();
	
	// test getRange method
	std::cout << "getRange operation: ";
	for(int i = 0; i < out.size(); ++i){
		std::cout << out[i] << "\t";
	}
	std::cout << "\n";

	// test static get method
	out = subrange::get(34, 42);
	std::cout << "static get operation: ";
	for(int i = 0; i < out.size(); ++i){
		std::cout << out[i]<< "\t";
	}
	std::cout << "\n";

	return 0;
}
