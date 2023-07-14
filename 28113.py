TIME_TO_SUBWAY, BUS, SUBWAY = map(int, input().split())

if TIME_TO_SUBWAY <= SUBWAY:
    if max(TIME_TO_SUBWAY, SUBWAY) < BUS:
        print('Subway')
    elif max(TIME_TO_SUBWAY, SUBWAY) == BUS:
        print('Anything')
    else:
        print('Bus')
else:
    print('Bus')
