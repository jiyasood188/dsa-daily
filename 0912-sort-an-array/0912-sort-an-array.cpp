class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {
        int randomIndex = low + rand() % (high - low + 1);
        swap(nums[low], nums[randomIndex]);

        int pivot = nums[low];
        int i = low;
        int j = high;

        while (i < j) {

            while (i <= high - 1 && nums[i] <= pivot) {
                i++;
            }

            while (j >= low + 1 && nums[j] > pivot) {
                j--;
            }

            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[low], nums[j]);
        return j;
    }

    void quicksort(vector<int>& nums, int low, int high) {
        if (low < high) {

            int pivotIndex = partition(nums, low, high);

            quicksort(nums, low, pivotIndex - 1);
            quicksort(nums, pivotIndex + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};