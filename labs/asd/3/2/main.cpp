#include <vector>

class Stack {
    private:
        std::vector<int> data;

    public:
        void push(int val) { data.push_back(val); }

        int pop() {
            if (data.empty()) {
                return -1;
            }
            int val = data.back();
            data.pop_back();
            return val;
        }
};
