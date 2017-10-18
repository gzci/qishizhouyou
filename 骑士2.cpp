#include<iostream>
using namespace std;
int g_count=0;
const int N=8;
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
int CanPlace(int row,int col){
	
	int setedposition=8;
	
	
		if(chess[row-1][col+2]==0){
		
		setedposition=0;
//		print();
	}else if(chess[row+1][col+2]==0){
		row= row+1;
		col=col+2;
		chess[row][col]=++i;
		setedposition=1;
	}else if(chess[row+2][col+1]==0){
		row= row+2;
		col=col+1;
			chess[row][col]=++i;
		setedposition=2;
	}else if(chess[row+2][col-1]==0){
		row= row+2;
		col=col-1;
			chess[row][col]=++i;
		setedposition=3;
	} else if(chess[row+1][col-2]==0){
		row= row+1;
		col=col-2;
			chess[row][col]=++i;
		setedposition=4;
	}else if(chess[row-1][col-2]==0){
		row= row-1;
		col=col-2;
			chess[row][col]=++i;
		setedposition=5;
	}else if(chess[row-2][col-1]==0){
		row= row-2;
		col=col-1;
			chess[row][col]=++i;
		setedposition=6;
	}else if(chess[row-2][col+1]==0){
		row= row-2;
		col=col+1;
			chess[row][col]=++i;
		setedposition=7;
	}else{
		setedposition=-1;
	}
		
	return setedposition;
	 
	
}
void EightQueen(int row,int col){
		int i=1;
		chess[row][col]=i;
		while(CanPlace(row,col)!=-1){
			 if(CanPlace(row,col)==0){
			 	row= row-1;
				col=col+2;
			chess[row][col]=++i;
			 CanPlace(row,col);
			 }
		}
	

	
		
		} 
	
};

int main(){

	
	CanPlace(5,5);
	print();
	

	
	return 0;
}
