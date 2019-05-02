# sickness
### Problem Statement
Leo's small hometown of Yongin (용인시) is in its flu season, and a new virulent disease has spread over the town, called "Profestus" for its infusion of festering acne. Leo, overcome with this disease, is confined to his home. In rage, he calls all of his neighbours and records when they interacted with another person in order to trace back the disease to the "patient zero" (the first person with the disease). However, he has no idea how to trace back the interactions to find the patient zero. So, he gives the interactions to you in the hope that you can puzzle it out.  
All interactions are bidirectional and involve only two people. If an infected person interacts with an uninfected person, the uninfected person becomes infected.  
People are 0-indexed.

### Input Format
The first line of input will contain one integer `n`: the number of neighbours Leo has.
The second line of input contains `n` integers, where each integer `S[i]` is either 0 (the `i`-th person doesn't have the sickness) or 1 (the `i`-th person has the sickness).  
The next `n-1` lines of input contain two integers, `a` and `b`, showing that person `a` interacted with person `b`.

### Output Format
One integer, the index of the "patient zero."
