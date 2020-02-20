#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int test=0;
	long long int T,N,K,input;
	vector <long long int> vec, sums,find_min;
	cin>>T;
	while(T--){
		cin>>N>>K;
		test = 0;
		vec.clear(); vec.push_back(0);
		sums.clear(); sums.push_back(0); 
		find_min.clear();
		for(long long int i = 1; i<=N; i++){ cin>>input; vec.push_back(input%K); if(vec[i]!=0) test = 1;}	
		sums.push_back(vec[1]);
		for(long long int c=2;c<=N;c++) sums.push_back(vec[c] + sums[c-1]);
		if(test == 0){cout<<0; break;}
		for(long long int c =1; c<=N; c++){
			long long int left = sums[c];  
			long long int right = sums[N] - sums[c];
			for(long long int j = 0; j<= left; j++){	
				if((j + right)%K == 0) find_min.push_back(left - j);
			}
			}
		cout<<*min_element(find_min.begin(), find_min.end())<<endl;
		}
	return 0;
	}
