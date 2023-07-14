ax, ay, az = map(int, input().split())
cx, cy, cz = map(int, input().split())

# (az + bx, ay * by, ax + bz) = (cx, cy, cz)
bx = int(cx - az)
by = int(cy / ay)
bz = int(cz - ax)

print(bx, by, bz)


