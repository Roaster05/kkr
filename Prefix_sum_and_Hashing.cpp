/* 
Here we Pre compute things and use them in such a way for diffrent queries,When Time complexity gives a issue
=>use prefix array whether 1D or 2D and using diffrent array index for diffrent queries.
used for calculatimg something from index L to index R or from start to index L and index R to last.




Special :-
use prefix sum when given add an element x from index L to index R then we add the x at index L and subtract from index R+1
so now the prefix sum of this array gives the same resultant.
PROBLEM:- https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbUtFQVM5bDROejU1Rk95UTdsSVNuUi10TlUxd3xBQ3Jtc0ttZmtESEZTS3RXNk8wV1Rqd0ttNlV4d0lDaEUwTE1HTkJWQUJTMFN1WXBJdjhiaUwyV2ZYU2tUdzFHVzFDbEZFcDVfUjItcUFtRHlqdG9tT1VGSHlXNzJkUVRCbEhHMFRIM1U4ZzIwRUtlVzByN2d6WQ&q=https%3A%2F%2Fwww.hackerrank.com%2Fchallenges%2Fcrush%2Fproblem&v=4wqDE1zNUwc


prob-https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbmRMcDdDdDlPcVk3TlEzQ09aRGFYSlI4dml1Z3xBQ3Jtc0ttdDY3bWRMSXpoclk4Q1FCbUNsbnRjV1hua1dMZXJpei1sN0drZ3pHZHJ0ekxmaXlwbFlKeENsaDFhQWJCV0RUUldYZXJsMWxsYVdwR1lpakRETm5lSXo3bmVUeEZkcEI4VFNlbXNaLVBtekdhWXJQOA&q=https%3A%2F%2Fcodeforces.com%2Fcontest%2F1426%2Fproblem%2FD&v=nZe7P674xZo
*/