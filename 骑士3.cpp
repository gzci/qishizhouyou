#include<iostream>
using namespace std;
int g_count=0;
const int N=4;
int chess[N][N]={0};
void print(){
	for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cout<<chess[i][j]<<' ';
			}
			cout<<endl; 
		}
		cout<<endl;
} 
int canplace(int row,int col){
	if(row>=0&&row<N&&col>=0 && col<N && chess[row][col]==0)
	return 1;
	
	return 0;
	
}
void jump(int row,int col){
	int i=1;
	int setedposition=8;
	chess[row][col]=i;
	while(setedposition!=-1){
		if(canplace(row-1,col+2)){
		row= row-1;
		col=col+2;
		chess[row][col]=++i;
		setedposition=0;
	}else if(canplace(row+1,col+2)){
		row= row+1;
		col=col+2;
		chess[row][col]=++i;
		setedposition=1;
	}else if(canplace(row+2,col+1)){
		row= row+2;
		col=col+1;
			chess[row][col]=++i;
		setedposition=2;
	}else if(canplace(row+2,col-1)){
		row= row+2;
		col=col-1;
			chess[row][col]=++i;
		setedposition=3;
	} else if(canplace(row+1,col-2)){
		row= row+1;
		col=col-2;
			chess[row][col]=++i;
		setedposition=4;
	}else if(canplace(row-1,col-2)){
		row= row-1;
		col=col-2;
			chess[row][col]=++i;
		setedposition=5;
	}else if(canplace(row-2,col-1)){
		row= row-2;
		col=col-1;
			chess[row][col]=++i;
		setedposition=6;
	}else if(canplace(row-2,col+1)){
		row= row-2;
		col=col+1;
			chess[row][col]=++i;
		setedposition=7;
	}else{
		setedposition=-1;
	}
		
	}
};

int main(){

	jump(0,0);
	print();
	

	
	return 0;
}
