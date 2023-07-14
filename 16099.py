T = int(input())
for _ in range(T):
    i_t, w_t, i_e, w_e = map(int, input().split(' '))
    if (i_t * w_t > i_e * w_e):
        print("TelecomParisTech")
    elif (i_t * w_t == i_e * w_e):
        print("Tie")
    else:
        print("Eurecom")



