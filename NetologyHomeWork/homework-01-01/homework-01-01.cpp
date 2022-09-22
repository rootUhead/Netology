#include <iostream>
#include <fstream>
#include <string>

int main(int argc, const char* argv[]) {

	std::string file_name = { "in.txt" };
	std::ifstream data(file_name);
	if (data.is_open()) {

		unsigned int size_M = 0;
		data >> size_M;
		int* arr_M = new int[size_M];
		for (int i = 0; i < size_M; ++i) {
			data >> arr_M[i];
		}
		unsigned int size_N = 0;
		data >> size_N;
		int* arr_N = new int[size_N];
		for (int i = 0; i < size_N; ++i) {
			data >> arr_N[i];
		}
		data.close();
		std::ofstream out("out.txt");
		out << size_N << std::endl;
		if (size_N > 0){
			out << arr_N[size_N - 1] << " ";
			for (int i = 0; i < size_N - 1; ++i) {
				out << arr_N[i] << " ";
			}
			out << std::endl;
		}
		delete[] arr_N;
		out << size_M << std::endl;
		if (size_M > 0){
			for (int i = 1; i < size_M; ++i) {
				out << arr_M[i] << " ";
			}
			out << arr_M[0] << std::endl;
		}
		delete[] arr_M;
		out.close();
		return 0;
	}
	else
	{

		std::cout << "File " << file_name << " does not exist in curent dirrectory" << std::endl;
		return 1;
	}

}
