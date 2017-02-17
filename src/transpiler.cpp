#include "../h/utils.h"

const int DATA_SIZE=600000;

const bool debug=false;

string transpileCode(string& code, int start); //send it some source and the index after the '[', it will return the index after ']'
string transpileFile(string filename);
void showDebug(char lastCmd);
int findMatchingBrase(string& code, int start);
string currentFIle="";

int main(int argc, char ** argv)
{
	//cout << "William's brainfuck interpreter, array size is " << DATA_SIZE << endl << endl;
	
	//cout << "enter code: ";
	
	string infilename;
	string outSourceFile="transpiled/source.c";
	string outBinFile="transpiled/bin";
	
	if (argc>1)
	{
		infilename=string(argv[1]);
	}
	else
	{
		cout << "please specify a source file" << endl;
		exit(0);
	}
	
	string out = "";
	
	out+=
		"#include <stdio.h>\n"
		"int main(void) {\n"
		"	printf(\"Hello, World!\\n\");\n"
		"}";
	
	//transpileFile(filename);
	
	writeFile(outSourceFile, out, false);
	
	string cmd = "gcc -std=c99 '"+outSourceFile+"' -o '"+outBinFile+"'";
	
	cout << "running '"+cmd+"'" << endl;
	
	string cmdOut = runCmd(cmd);
	
	cout << cmdOut << endl;
}

string transpileFile(string filename)
{
	string code;
	
	string oldCurrentFile = currentFIle;
	
	currentFIle = getDirOfPath(currentFIle)+filename;
	
	cout << currentFIle << endl;
	
	loadFile(currentFIle, code, false);
	
	if (code.empty())
	{
		cout << "could not load '" << currentFIle << "'" << endl;
		exit(-1);
	}
	
	string out=transpileCode(code, 0);
	
	currentFIle = oldCurrentFile;
	
	return out;
}

string transpileCode(string& code, int start)
{
	/*
	int i=start;
	bool quit=false;
	
	while (i<(int)code.size() && !quit)
	{
		bool comment=false;
		
		switch (code[i])
		{
		case '<':
			offset--;
			if (offset<0)
			{
				cout << endl << "you went too far left" << endl;
				exit(-1);
			}
			min=std::min(min, offset);
			break;
			
		case '>':
			offset++;
			if (offset>=DATA_SIZE)
			{
				cout << endl << "you went too far right" << endl;
				exit(-1);
			}
			max=std::max(max, offset);
			break;
			
		case '+':
			data[offset]++;
			break;
			
		case '-':
			data[offset]--;
			break;
			
		case '.':
			putchar(data[offset]);
			break;
			
		case ',':
			data[offset]=getchar();
			break;
			
		case '[':
			if (data[offset])
			{
				i=runCode(code, i+1);
				i--;
			}
			else
			{
				i=findMatchingBrase(code, i);
				i--;
			}
			break;
			
		case ']':
			if (data[offset])
			{
				i=start;
				i--;
			}
			else
			{
				quit=true;
				break;
			}
			break;
			
		case '"':
			
			int j;
			for (j=i+1; code[j]!='"'; j++)
			{
				if (j+1>=(int)code.size())
				{
					cout << "no closing quote" << endl;
					exit(-1);
				}
			}
			
			{
				string filename=code.substr(i+1, j-i-1);
			
				runFile(filename);
			}
			
			i=j;
			break;
			
		default:
			comment=true;
			break;
		}
		
		if (!comment && debug)
		{
			showDebug(code[i]);
		}
		
		i++;
	}
	
	return i;
	*/
	
	return "//this is some code\n";
}

int findMatchingBrase(string& code, int start)
{
	int count=0;
	int i=start;
	
	do {
		
		if (i>(int)code.size())
		{
			cout << endl << "'[' without matching ']'" << endl;
			exit(-1);
		}
		
		if (code[i]=='[')
			count++;
		else if (code[i]==']')
			count--;
			
		i++;
		
	} while(count>0);
	
	return i;
}
