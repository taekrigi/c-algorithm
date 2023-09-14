/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int* output = (int *)malloc(numsSize * sizeof(int) * 2);
    
    for (int i = 0; i < numsSize * 2; i++) {
        output[i] = nums[i % numsSize];
    }

    *returnSize = numsSize * 2;

    return output;
}
