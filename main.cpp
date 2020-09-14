#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

string str;
int main ()
{
  ifstream file; 
  file.open("input.txt");
 vector <string> tokens; 
 vector <string> names;

  while (getline(file, str)) 
  {
   // cout << str << "\n";
    stringstream check(str);
    string inter;
    
      while(getline(check, inter, ',')) 
    { 
        tokens.push_back(inter); 
    } 
    
  }

  string name[500];
  for(int i = 0; i < tokens.size(); i++)
  {
    name[i]=tokens[i];
  }
  
  for(int i = 2; i < tokens.size(); i++) 
  {
      
       cout << "Welcome, ";
       cout << name[i+1] <<"\t\t\t\t";
       cout<< name[i] <<"\n"; 
        i++;
  }
        
  return 0;
}

  
