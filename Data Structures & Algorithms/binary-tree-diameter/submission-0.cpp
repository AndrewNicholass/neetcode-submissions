/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    int diameter = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == nullptr){
            return 0;
        }

        stack<pair<TreeNode*, bool>> st;

        unordered_map<TreeNode*, int>mp;

        st.push({root, false});

        while(!st.empty()){
            TreeNode* node = st.top().first;
            bool visited = st.top().second;
        
            st.pop();

            if(!visited){

                //push ulang tapi ganti jadi visited
                st.push({node, true});

                //push kiri kanan
                if(node->right){
                    st.push({node->right, false});
                }

                if(node->left){
                    st.push({node->left, false});
                }

            }else{
                
                int left = 0;
                int right = 0;

                //kalo punya anak, ambil height anaknya
                if(node->left){
                    left = mp[node->left];
                }
                if(node->right){
                    right = mp[node->right];
                }

                //update diameternya
                diameter = max(diameter, left + right);

                //masukin ke hashmap tingginya
                mp[node] = 1 + max(left, right);

            }
        
        }

        return diameter;
    }
};
