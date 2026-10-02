## 01. Trie Delete

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/trie-delete/1)

### Problem Description

**Task:** A Trie stores a collection of lowercase English strings. Given a string key, implement the deleteKey(key) function to remove key from the Trie. If key is not present, the Trie should remain unchanged.

> **Note:** For input, the driver uses a string array words[]. It inserts all strings from words[] into the Trie, calls deleteKey(key), and then prints all strings that are still present in the Trie.

#### Examples

##### Example 1

- **Input:**
```text
words[] = ["gfg", "geeks", "practice"], key = "geeks"Output: ["gfg", "practice"]Explanation: The key "geeks" is deleted from the Trie
```

##### Example 2

- **Input:**
```text
words[] = ["the", "a", "there", "answer", "any", "by", "bye", "their"], key = "the"Output: ["a", "there", "answer", "any", "by", "bye", "their"] Explanation: The key "the" is removed from the Trie. The nodes that are shared with other strings, such as "there" and "their", are preserved because those strings still exist in the Trie.
```

#### Constraints

- **1.** `1 ≤ words.size() ≤ 10⁴¹ ≤ |key| ≤ 50`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(|Key|)
- **Expected Auxiliary Space Complexity:** O(|Key|)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-02 08:38:39
- **Status:** Correct
- **Marks:** 4

```cpp
/* Trie Node Structure:
class TrieNode {
	public:
	TrieNode* children[26];
	bool isEndOfWord;
	TrieNode() {
		for (int i = 0; i < 26; ++i) {
			children[i] = nullptr;
		}
		isEndOfWord = false;
	}
}; */
class Trie {
	private:
	TrieNode* root;
	public:
	Trie() { root = new TrieNode(); }
	
	void insert(const string & key) {
		TrieNode * node = root;
		for (int i = 0; i<key.length(); i++) {
			if (node->children[key[i]-'a'] == nullptr) {
				node->children[key[i]-'a'] = new TrieNode();
			}
			node = node->children[key[i]-'a'];
		}
		node->isEndOfWord = true;
	}
	
	bool search(const string & key) {
		TrieNode * node = root;
		for (int i = 0; i<key.length(); i++) {
			if (node->children[key[i]-'a'] == nullptr) {
				return false;
			}
			node = node->children[key[i]-'a'];
		}
		return node->isEndOfWord;
	}
	
	void deleteKey(const string& key) {
		// code here
		TrieNode * node = root;
		for (int i = 0; i<key.length(); i++) {
			if (node->children[key[i]-'a'] == nullptr) {
				return;
			}
			node = node->children[key[i]-'a'];
		}
		if (node->isEndOfWord) {
			node->isEndOfWord = false;
		}
	}
};
```

*Generated on: 10/2/2026, 8:39:02 AM*