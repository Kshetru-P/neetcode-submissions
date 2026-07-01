class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0, h = rows * cols - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            int x = matrix[mid / cols][mid % cols];

            if (x == target)
                return true;
            else if (x < target)
                l = mid + 1;
            else
                h = mid - 1;
        }

        return false;
    }
};