class Solution {
public:
    string interpret(string command) {
        string result;

        for(size_t i = 0; i < command.size(); ++i)
        {
            if(command[i] == 'G')
            {
                result.push_back(command[i]);
            }
            if(command[i] == '(')
            {
                if(command[i + 1] == ')')
                {
                    result.push_back('o');
                    ++i;
                }
                else
                {
                    result += "al";
                    i += 3;
                }
            }
        }

        return result;
    }
};