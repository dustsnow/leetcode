#include <iostream>
#include <vector>
using namespace std;
struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};
bool checkInInterval(int num, Interval iv){
	if(num > iv.start && num < iv.end){
		return true;
	}
	return false;
}
bool checkMergable(Interval iv1, Interval iv2){
	if( checkInInterval(iv1.start, iv2) || checkInInterval(iv1.end, iv2) ){
		return true;
	}
	return false;
}
Interval mergeTwoInterval(Interval iv1, Interval iv2){
	struct Interval result;
	if(iv1.start < iv2.start){
		result.start = iv1.start;
	}else{
		result.start = iv2.start;
	}
	if(iv1.end < iv2.end){
		result.end = iv2.end;
	}else{
		result.end = iv1.end;
	}
	return result;
}
class Solution {
public:
	vector<Interval> mergetest(vector<Interval> &intervals){
		cout << "lllll";
		return intervals;
	}
	
	vector<Interval> merge(vector<Interval> &intervals){
		bool isBreak = false;
		for(int i = 0; i < intervals.size()-2; i++){
			for(int j = i+1; j < intervals.size()-1; j++){
				if(checkMergable){
					intervals[j] = mergeTwoInterval(intervals[i], intervals[j]);
					cout << intervals[j].start;
					cout << intervals[j].end;
					isBreak = true;
					break;
				}
			}
			if(isBreak){ 
				isBreak = false;
				break;
			}
		}
		return intervals;
	}
};

int main(){
	cout << "Hello World";
	struct Interval iv1;
	iv1.start = 1;
	iv1.end = 3;
	struct Interval iv2;
	iv2.start = 2;
	iv2.end = 6;
	struct Interval iv3;
	iv3.start = 8;
	iv3.end = 10;
	struct Interval iv4;
	iv4.start = 15;
	iv4.end = 18;
	vector<Interval> mVector;
	mVector.push_back(iv1);
	mVector.push_back(iv2);
	mVector.push_back(iv3);
	mVector.push_back(iv4);
	Solution tmp;
	tmp.merge(mVector);
	return 0;
}
