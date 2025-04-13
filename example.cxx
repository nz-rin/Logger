#include "Logger.hxx"
#include <iomanip>

int main(){
	// Example usage of Logger.hxx — demonstrating variadic logging, number formatting, and error handling
	log_info("Hello");
	log_info("Variadic", "Hello", "World");
	log_error("error");
	log_error("variadic", "error", "universe");

	log_error_and_sterror("Will print success since theres no error:");

	log_info("");

	const char *c_str = "Pointer works aswell";
	log_info("C string:", c_str);
	log_info("");

	ssize_t ssizet 				= 0;
	size_t sizet 				= 2;
	char chr 					= 3;
	unsigned char uchr 			= 4;
	short shtr 					= 5;
	short ushtr					= 6;
	float fl					= 7.1;
	double dl					= 8.2;

	log_info("Loggs numbers aswell");
	log_info("ssize_t", ssizet);
	log_info("size_t", sizet);
	log_info("short", shtr);
	log_info("unsigned short", ushtr);
	log_info("float", fl);
	log_info("double", dl);

	log_ln();
	log_info("chars and unsigned chars require casting to an int/long/short first if you need the numeric value since it'll print the ascii by default");
	log_info("char", (int)chr);
	log_info("unsigned char", (short) uchr);

	log_info("");

	log_info("Since everything goes to ostream you can use std formatting functions");
	log_info("Heres 10 as:");

	log_info_noln("Hexadecimal, with \'0\' as fill, 8 char long: ");
	std::cout << std::hex << std::setw(8) << std::setfill('0') << 10 << "\n";
	//utility function to clear ostream formatting;
	log_clear_formatting();
	log_info("\033[7mANSI works too\033[0m <<<< terminal dependant thou");

	//the code is your oyster do whatever you need
	log_info_noln('\n');

	log_error_and_exit("This headerfile was made to make logging random info during dev easier and versatile.",
			"\nUsing it in the end user product my be slow and produce wierd formatting\nGood luck");

	//comment out the abouve function to prevent it from exiting
	std::cout << "this code will never run\n";

	return 0;
}
