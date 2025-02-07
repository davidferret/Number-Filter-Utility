# Number Filter Utility

This C project helps you generate a list of natural numbers and filter out the ones that contain or are divisible by the digit you choose. The way it works is pretty simple: it creates an array of numbers from 1 to 100, checks which ones are divisible by a number you pick, let's say 7 or contain the digit 7, and then saves those filtered numbers to a text file. You'll also get to see both the original and filtered numbers printed right on the console, making it easy to follow along.

I created this project just to have a bit of fun with numbers and explore how easily we can filter out specific ones. I thought it would be a cool way to demonstrate basic number operations while keeping it interactive.

## Example Output
```
Enter a digit to filter numbers containing it or divisible by it: 5
Original array: 1 2 3 ... 99 100

Numbers containing digit 5 or divisible by 5:
5 10 15 25 35 45 50 51 52 53 54 55 56 57 58 59 60 65 75 85 95 

Filtered numbers saved to 'filtered_numbers.txt'.

```

