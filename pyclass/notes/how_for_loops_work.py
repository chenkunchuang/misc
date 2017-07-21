'''

for (i=0 ; i<10 ; i++) { // *i* is a loop induction variable that has the loop state
    printf("%d\n", i);
    i = 5;               // changing *i* changes the loop
}
printf("%d\n", i);

i=0;
while (i<10) {
    printf("%d\n", i);
    i = 5;
    i++;
}
printf("%d\n", i);


'''

for i in range(10):
    print i
    i = 5
print i

it = iter([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
while True:
    try:
        i = next(it)
    except StopIteration:
        break
    print i
    i = 5
print i

i = 0
while i<10:
    print i
    i = 5
    i += 1
print i
