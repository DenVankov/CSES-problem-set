### Sorting and searching

1. [Distinct Numbers](distinctNumbers.cpp)  
https://cses.fi/problemset/task/1621   
//simple sort

2. [Apartments](apartments.cpp)  
https://cses.fi/problemset/task/1084  
//two pointers - from begin

3. *[Ferris Wheel](ferrisWheel.cpp)  
https://cses.fi/problemset/task/1090  
//two pointers - from begin and end

4. *[Concert Tickets](concertTickets.cpp)  
https://cses.fi/problemset/task/1091  
//multiset<greater<>> + lower_bound

5. [Restaurant Customers](restaurantCustomers.cpp)  
https://cses.fi/problemset/task/1619  
//Sweep line(In\Out points)

6. [Movie Festival](movieFestival.cpp)  
https://cses.fi/problemset/task/1629  
//standart greedy from CLRS

    //while can take the nearsert

7. *[Sum of Two Values](sumOfTwoValues.cpp)  
https://cses.fi/problemset/task/1640   
//two pointers - from begin and end

8. [Maximum Subarray Sum](maximumSubarraySum.cpp)  
https://cses.fi/problemset/task/1643  
//cur = max(cur + x[j], x[j]);
//sum = max(sum, cur);

9. *[Stick Lengths](sticklengths.cpp)  
https://cses.fi/problemset/task/1074  
//take mid

10. [Playlist](playlist.cpp)  
https://cses.fi/problemset/task/1141  
//take unique subarray by queue + set(online bin search)

11. [Towers](towers.cpp)  
https://cses.fi/problemset/task/1073
//multiset + upper_bound + erase

12. *[Traffic Lights](trafficLights.cpp)  
https://cses.fi/problemset/task/1163   
//multiset<classcomparator>(by length) + increasing and decreasing sets + erase + rbegin(get max)

13. *[Room Allocation](roomAllocation.cpp)  
https://cses.fi/problemset/task/1164   
//in/out+1 algo + occupied map of rooms + free rooms(was used) 

14. *[Factory Machines](factoryMachines.cpp)  
https://cses.fi/problemset/task/1620  
//binary search(implicit) - try to hack answer

15. *[Nearest Smaller Values](nearestSmallerValues.cpp)  
https://cses.fi/problemset/task/1645  
//sort by val and run from left to right and push idx to set

"*" - This means that the task caused difficulties. 