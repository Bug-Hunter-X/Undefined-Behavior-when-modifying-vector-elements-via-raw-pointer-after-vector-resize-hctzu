std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();
*ptr = 10; // Modifying vector element through raw pointer
vec.push_back(4); //Adding an element to vector. This can cause undefined behavior