#include <iostream>
using std::cout;      
using std::endl;                        

//C++ Preprocessor #defines   //https://www.youtube.com/watch?v=D_rgDGBB3_M&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk
//Stages to output and compile code:1st Stage(Preprocessor run - does a copy/paste), 2nd Stage(Compiler run - parses the file, generates the code to run,spits out .obj file that has code in it), 3rd Stage(The Linker - takes those obj files then does a fix-up and kicks out an .exe file or a .dll depending on the setup)
//1st Step:Preprocessor ->	always start with the symbol "pound(#)" or "hash(#)", ex. #include <iostream> then copy/paste
//2nd Step:Compiler		
//3rd Step:Linker

#define PI 3.1415927			// another sample of Preprocessor

void main()
{
	cout << PI << endl; 
}