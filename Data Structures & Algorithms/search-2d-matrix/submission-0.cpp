class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) { return false; }

        int rows = matrix.size();                       // Number of rows
        int columns = matrix[0].size();       // Number of colums

        int l = 0;
        int h = rows * columns - 1; 

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (matrix[mid / columns][mid % columns] > target) {
                h = mid - 1;
            }

            else if (matrix[mid / columns][mid % columns] < target) {
                l = mid + 1;
            }

            else {
                return true;
            }
        }

        return false;
    }
};
