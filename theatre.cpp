#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int T,N,val,profit = 0;
	char ch;
	vector <vector<int>> vec;
    int total_profit = 0;
	cin>>T;
	while(T--){
		cin>>N;
		vec.clear();
		vec = vector <vector<int>>(5,vector<int>(5,0));
		for(int i = 1; i<=N; i++){
			cin>>ch>>val;
			if(ch=='A'){vec[1][val/3]++;}
			else if(ch=='B'){vec[2][val/3]++;}
			else if(ch=='C'){vec[3][val/3]++;}
			else if(ch=='D'){vec[4][val/3]++;}
			}
//	    for(int i = 1 ; i<5;i++){ for (int j = 1 ; j < 5;j++) cout<<vec[i][j]; cout<<endl;}
			
		profit = 0;
		int loop = 0;
		int i,j,temp_i,temp_j;
		for(int w = 0; w<4; w++){		
			int max_=-1;
			for(i = 1 ; i<5; i++){
			    for (j =1;j<5;j++){
			            if(max_ < vec[i][j]){max_ = vec[i][j]; temp_i = i; temp_j = j;}
				    }
			}
            for(int x=1; x<5; x++) vec[temp_i][x] = 0;
            for(int x=1; x<5; x++) vec[x][temp_j] = 0;
//               cout<<max_<<endl;
				if(max_ > 0 && loop ==0) profit+=max_*100;
				else if(max_ > 0 && loop ==1) profit+=max_*75;
				else if(max_ > 0 && loop ==2) profit+=max_*50;
				else if(max_ > 0 && loop ==3) profit+=max_*25;
				else profit-=100;
                loop++;
//		cout<<profit<<endl;
		}
		cout<<profit<<endl;
	    total_profit = total_profit + profit;
	}
	cout<<total_profit;
	return 0;
	}
