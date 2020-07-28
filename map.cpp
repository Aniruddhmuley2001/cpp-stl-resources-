#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std; 

int main()  
{
  // Initializing a map with integer keys
  // and corresponding string values
  map<int, string> Employees; 

  //Inserting values in map using insert function
  Employees.insert ( std::pair<int, string>(101,"Jon") );
  Employees.insert ( std::pair<int, string>(103,"Daenerys") );
  Employees.insert ( std::pair<int, string>(104,"Arya") );

  // Inserting values using Array index notation
  Employees[105] = "Sansa";  
  Employees[102] = "Tyrion"; 
  
  cout << "Size of the map is " << Employees.size() << endl << endl;  

  // Printing values in the map
  cout << endl << "Default Order of value in map:" << endl;  
  for( map<int,string>::iterator iter=Employees.begin(); iter!=Employees.end(); ++iter)  
  {  
    cout << (*iter).first << ": " << (*iter).second << endl;  
  }  
  
  // Finding the value corresponding to the key '102'
  std::map<int, string>::iterator it = Employees.find(102);
  if (it != Employees.end()){
    std::cout <<endl<< "Value of key = 102 => " << Employees.find(102)->second << '\n';
  }
}  
