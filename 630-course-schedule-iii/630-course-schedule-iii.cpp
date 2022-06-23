class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b) {
		return a[1] < b[1];
	}
    
	int scheduleCourse(vector<vector<int>>& courses) {
		int n = courses.size();
		//Step 1
		sort(courses.begin(), courses.end(), comp);
		priority_queue<int>pq;
		int sum = 0;
		//Step 2
		for(auto it : courses) {
			int duration  = it[0];
			int deadline = it[1];
			// Step 3
			if(sum + duration <= deadline) {
				sum += duration;
				pq.push(duration);
			}
			// Step 4
			else if(pq.size() && pq.top() > duration){ 
				sum += duration - pq.top();
				pq.pop();
				pq.push(duration);
			}
		}
		// Step 5
		return pq.size();
	}
};