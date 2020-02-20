#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector <long long int> nums1, nums2;
	long long int T,N,result,value;
	cin>>T;
	while(T--){
		cin>>N;
		result = 0;
		nums1.clear();
		nums2.clear();
		for(int i = 0; i<N;i++){ cin>>value; nums1.push_back(value);}	
		for(int i = 0; i<N;i++){ cin>>value; nums2.push_back(value);}			
		sort(nums1.begin(),nums1.end());
		sort(nums2.begin(),nums2.end());
		for(int i = 0;i<N;i++){result+=min(nums1[i],nums2[i]);}
		cout<<result<<endl;
		}
	return 0;
	}
