#include "shell.h"
/**
 * _Errors- Function to print error to stderr
 *@program : pointer to program
 *@param: char pointer to the Passed command
 *@message: Description erorr to be printed
 *@Qexe: No of executions Executions
 **/
void _Errors(char *program, char *param, char *message, int Qexe)
{

	char buf[256];
	char sint[11];

	IntegerToString(Qexe, sint);

	_String_copy(buf, program);
	_String_Conc(buf, ": ");
	_String_Conc(buf, sint);
	_String_Conc(buf, ": ");
	_String_Conc(buf, param);
	_String_Conc(buf, ": ");
	_String_Conc(buf, message);
	_String_Conc(buf, "\n");

	write(STDERR_FILENO, &buf, _String_Length(buf));

}
