class Solution {
public:
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
sort(arr.begin(), arr.end());
vector<vector<int>> ret;
int diff = INT_MAX;
for (int i = 1; i < (int)arr.size(); ++i) {
if (diff == arr[i] - arr[i - 1]) {
ret.push_back({arr[i - 1], arr[i]});
} else if (diff > arr[i] - arr[i - 1]) {
ret.clear();
ret.push_back({arr[i - 1], arr[i]});
diff = arr[i] - arr[i - 1];
}
}
return ret;
}
};