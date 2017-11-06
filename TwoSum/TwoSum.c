/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int *newnums = (int*)malloc(2 * sizeof(int));
    if ((nums == NULL) || (numsSize < 2))
    {
        return NULL;
    }
    
    for(int i = 0; i < numsSize-1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[j] == target - nums[i]){
                newnums[0] = i;
                newnums[1] = j;
                return newnums;
            }
        }
    }
    
    return NULL;
}
