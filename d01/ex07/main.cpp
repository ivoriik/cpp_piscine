#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int			is_valid(int argc, char **argv, std::ifstream &f)
{
	if (argc != 4) {
		std::cout << "Usage: ./replace [filename] [dest] [src]" << std::endl;
		return (0);
	}
	else if (!*argv[1] || !*argv[2] || !*argv[3]) {
		std::cout << "Error: parameters are not valid" << std::endl;
		return (0);
	}
	f.open(argv[1]);
	if (f.fail()) {
		std::cout << "Error: cannot open file"  << std::endl;
		return (0);
	}
	return (1);
}

int			main(int argc, char **argv)
{
	std::string		fname;
	std::ifstream	inp;

	if (!is_valid(argc, argv, inp))
		return (-1);
	fname = argv[1];
	for (size_t i = 0; i < fname.length(); ++i)
		fname[i] = toupper(fname[i]);
	// fname += ".replace";
	// outp.open(fname, std::ios::trunc);
	// if (outp.fail()){
	// 	std::cout << "Error::Unable ot create file: " << fname << std::endl;
	// 	exit(1);
	// }
	// std::string text;
	// std::stringstream buffer;
	// buffer << inp.rdbuf();
	// text = buffer.str();
	// size_t i = 0;
	// while((i = text.find(s1, i)) != std::string::npos){
	// 	text.replace(i, s1.length(), s2);
	// 	i += s2.length();
	// }
	// outp << text << std::endl;
	// outp.close();
	// inp.close();
	std::stringstream buffer;
	std::string contents;
	buffer << inp.rdbuf();
	contents = buffer.str();

	// Replace everything
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	size_t match;
	while ((match = contents.find(s1)) != std::string::npos)
	{
		contents.replace(match, s1.length(), s2);
		match += s2.length();
	}

	// Write it to a file
	std::ofstream	outp(fname + ".replace");

	if (!outp.good())
	{
		std::cout << "Error: could not open file " << fname
			<< ".replace" <<  std::endl;
		return (1);
	}

	outp << contents;

	// Close the stream, and exit
	outp.close();
	inp.close();
	return (0);
}