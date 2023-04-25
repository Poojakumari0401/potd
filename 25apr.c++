public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    vector<int> result = {-1, -1};
        if (nums.empty()) {
            return result;
        }
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                // Find the leftmost occurrence of target
                int start = mid;
                while (start >= left && nums[start] == target) {
                    start--;
                }
                result[0] = start + 1;
                // Find the rightmost occurrence of target
                int end = mid;
                while (end <= right && nums[end] == target) {
                    end++;
                }
                result[1] = end - 1;
                return result;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};