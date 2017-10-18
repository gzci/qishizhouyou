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
	int i=1;
	int setedposition=8;
	chess[row][col]=i;
	while(setedposition!=-1){
		if(chess[row-1][col+2]==0){
		row= row-1;
		col=col+2;
		chess[row][col]=++i;
		setedposition=0;
		print();
		cout<<"row"<<row<<"col"<<col<<endl;
	}else if(chess[row+1][col+2]==0){
		row= row+1;
		col=col+2;
		chess[row][col]=++i;
		setedposition=1;
//		print();
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
		print();
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
		
	}
	
}
//void EightQueen(int row,int col){
//	
//	
//
//	
//		for(;CanPlace(row,col)==-1;){
//			if(CanPlace(row,j)){
//				
//				chess[row][j]=1;//放1 
//				
//				EightQueen(row+1,j);//这里每次返回到上一个row j也是上一个j 就是上次皇后的位置 
//				
//				chess[row][j]=0;//回溯 backtracking 
//				
//			}
//		} 
//	
//};

int main(){

	print();
	CanPlace(3,0);
	print();
	

	
	return 0;
}
