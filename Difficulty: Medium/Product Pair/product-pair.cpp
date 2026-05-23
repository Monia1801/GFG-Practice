class Solution {
	public:
	bool isProduct(vector<int>& arr, long long target) {
		// code here
		int cnt=0;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] != 0 && target%arr[i] == 0) {
				if (find(arr.begin() + i+1, arr.end(), target/arr[i]) != arr.end())
					return true;
			}
			else if(arr[i]==0) cnt++;
		}
		if(cnt==arr.size() && target==0) return true;
		return false;
	}
};
