#include<iostream>
#include<vector>

using namespace std;

class Node{
    string state; //state
    vector<vector<char>>matrix; //stores board
    //neighbours are the values on the board next to our hash, I guess
    vector<pair<int, int>>neighbours; //neighbours are nodes too 
    //stores the x-y location of neighbours of e.g #

    Node(string s, vector<vector<char>> m, vector<pair<int,int>n){
        state = s;
        matrix = m;
        neighbours = n;
    }

};

bool goalTest(Node initial, Node final){
    if(initial.matrix == final.matrix){
        return true;
    }
    else{
        return false;
    }
}

vector<vector<char>> stringToBoard(string input){
    int row = 3, col = 3;
    vector<vector<char>> board;
    for(int i=0; i<row;i++){
		//a vector to store column elements
		vector<char>temp;
		for(int j=0; j<col; j++){
			temp.push_back(cstr[c]);
			c++;
		}
		board.push_back(temp);
	}
    return board;
}

void BFS(Node node, Node goal){
    //node = initial state; goal = final goal state;

    int cost = 0;
    if(goalTest(node, goal)==true){
        //return node;
    }
    else{
        vector<Node>frontier;
        frontier.push_back(node);
        vector<Node>visited;

        while(frontier.size()!=0){ // while what though
                /*if(frontier.size()==0){
                    break;
                }
                else{*/
                pop_back(frontier);
                push_back(node);
                for(){

                }
            //}
            
        }

    }

    
    
}

int main(){
    string initial, goal;
    cin>>initial;
    cin>>goal;
    Node 
}