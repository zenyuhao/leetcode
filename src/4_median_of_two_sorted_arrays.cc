#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3;
        int last_j = 0;

        nums1.push_back(-1);
        nums2.push_back(-1);

        vector<int>::iterator aa = nums1.begin();
        vector<int>::iterator bb = nums2.begin();

        vector<int>::iterator* a = &aa;
        vector<int>::iterator* b = &bb;


        while( **a != -1) {


            if(**a <= **b) {
                printf("%d\n", **a);
                nums3.push_back(**a);
                (*a)++;
            }

            vector<int>::iterator* c = a;
            a = b;
            b = c;

        }

        for(size_t i=0; i< nums3.size(); ++i){
            printf("%d,", nums3[i]);
        }

        while(**a != -1) {
            nums3.push_back(**a);
            (*a)++;
        }

        while(**b != -1) {
            nums3.push_back(**b);
            (*b)++;
        }

        for(size_t i=0; i< nums3.size(); ++i){
            printf("%d,", nums3[i]);
        }

        return 0;
    }
};


int main() {
    int nums1[] = {1, 2, 4, 5, 8, 13};
    int nums2[] = {3, 4, 6, 7, 14};
    Solution s;

    vector<int> a(nums1, nums1+7);
    vector<int> b(nums2, nums2+5);
    s.findMedianSortedArrays(a, b);
    return 0;
}
