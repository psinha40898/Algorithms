/******************************************************************************

IIRC This was a project where the input to vertices was given in input txt in  a very specific format!..?

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
   fstream inputFile;
   vector<string> userString; 
   int edge_node[2] = {};
   int i;

   inputFile.open("input.txt",ios::in); //open a file to perform read operation using file object
   if (inputFile.is_open()){   //checking whether the file is open
      string tp;
      
      while(getline(inputFile, tp))
      { //read data from file object and put it into string.
      userString.push_back(tp);
      }
      inputFile.close(); //close the file object.
      }
        for (int i=0; i<userString.size(); i++)
      {
          cout<<userString[i] <<"\n";
      }
      
      std::string s = userString[0];
std::string delimiter = ",";

size_t pos = 0;
std::string token;
i =0;
while ((pos = s.find(delimiter)) != std::string::npos) {
    token = s.substr(0, pos);
    std::cout << token << std::endl;
    edge_node[i] = stoi(token);
    i++;
    s.erase(0, pos + delimiter.length());
}
std::cout << s << std::endl;

//  ta da!
string  a = "a";
std::cout<< int(a[0] - 97);



std::cout <<edge_node[0] << std::endl;
std::cout<<userString[1][2];

// for int i < edge node [edge]
// edge(adj, int(userString[1][0] - 96), int(userString[1][2] - 96) )
return 0;
}
