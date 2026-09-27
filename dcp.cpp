#include<iostream>
#include<chrono>
#include<thread>
int main()
{
    auto start_time = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Simulate
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end_time - start_time;
    std::cout << "Elapsed time: " << elapsed_time.count() << " seconds" << std::endl;
    return 0;
}