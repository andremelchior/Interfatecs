from math import radians, sin

while True:
    a, b, ang = input().split()
    a, b, ang = float(a), float(b), float(ang)
		
    if a == 0 and b == 0 and ang == 0:
        break
    
    area = 0.5 * a * b * sin(radians(ang))
		
    print(f'{area:.4f}')
