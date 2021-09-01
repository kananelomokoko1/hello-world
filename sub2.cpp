#include <iostream>
#include <cstring>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

pair<int, int> findHash(vector<vector<char> >v){
	pair<int,int>p;
	for(int row=0; row<v.size();row++){
		for(int col=0; col<v[0].size(); col++){
			if(v[row][col]=='#'){
				p = make_pair(row,col);
				break;
			}
		}
	}
	return p;
}

void direction(vector<vector<char>>v, string d){
	int i=findHash(v).first;
	int j=findHash(v).second; //i will be row, j will be column position
	char not_hash, hash=v[i][j];
	//char hash = v[i][j]; //'temp' = holds the char that will be swapped with #, 'hash'=#
	//swap characters

	if(d=="LEFT"){
		if(j!=0){
			swap(v[i][j], v[i][j--]);
		}
	}
	else if(d=="RIGHT"){
		if(i!=v[0].size()-1){
			swap(v[i][j], v[i][j++]);
		}
	}
	else if(d=="UP"){
		if(i!=0){
			swap(v[i][j], v[i--][j]);
		}
	}
	else if(d=="DOWN"){
		if(i!=v.size()){
			swap(v[i][j], v[i++][j]);
		}
	}

	//print matrix
	for(int a=0; a<v.size(); a++){
		for(int b=0; b<v[0].size(); b++){
			if(b!=2){
				cout<<v[a][b]<<" ";
			}
			else{
				cout<<v[a][b]<<endl;
			}
		}
	}
}

int main(){

	string input, d; //d="direction"
	cin>> input;
	cin>>d;

	int cost=1;

	int row=3, col=3;
	vector<vector<char> > store;

	//convert string input into an array of characters
	char cstr[input.size()]; //C-string
	strcpy(cstr, input.c_str());	// String Copy

	int c=0;
	//insert cstr array elements in 2d vector
	for(int i=0; i<row;i++){
		//a vector to store column elements
		vector<char>temp;
		for(int j=0; j<col; j++){
			temp.push_back(cstr[c]);
			//for(char c:cstr){
				//temp.push_back(c);
			//}
			c++;
		}
		store.push_back(temp);
	}

	cout<<cost<<endl;
	direction(store, d);


return 0;


}

