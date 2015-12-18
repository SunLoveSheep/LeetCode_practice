#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
		vector<int> R;

		bool findt=0;
		for (int i=0;i<nums.size()-1;i++)
		{
			findt=0;
			for (int j=i+1;j<nums.size();j++)
			{
				if (nums[j]==target-nums[i])
				{
					findt=1;
					R.push_back(i+1);
					R.push_back(j+1);
					break;
				}
			}
			if (findt==1)
			{
				break;
			}
		}

		if (findt==0)
			R.push_back(-1);

		return R;
    }
};

int main()
{
	Solution S;
	int v_length=3;
	vector<int> Numbers(v_length);
	vector<int> Result;

	Numbers[0]=3;
	Numbers[1]=2;
	Numbers[2]=4;

	Result=S.twoSum(Numbers,6);

	if (Result[0]!=-1)
	{
		cout<<"Index1: "<<Result[0]<<" Index2: "<<Result[1]<<endl;
	}
	else
	{
		cout<<"There does not exist such two numbers in the array!"<<endl;
	}

	getchar();
	return 0;
}
