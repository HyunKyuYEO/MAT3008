import cv2
import sys
import numpy as np


def bi_interpolation(image):
    print("가로, 세로 배수를 입력하세요")
    mul_x = float(input())
    mul_y = float(input())
    height, width, channel = image.shape

    new_width = int(mul_x * width)
    new_height = int(mul_y * height)
    new_img = np.full((new_height, new_width, 3), 255, dtype=np.uint8)

    for i in range(0, new_height-1):
        for j in range(0, new_width-1):
            origin_x = int(j/mul_x)
            origin_y = int(i/mul_y)

            dx1 = j / mul_x-origin_x
            dx2 = 1 - dx1
            dy1 = i / mul_y-origin_y
            dy2 = 1 - dy1

            px1 = image[origin_y, origin_x]
            px2 = image[origin_y + 1, origin_x]
            px3 = image[origin_y, origin_x + 1]
            px4 = image[origin_y + 1, origin_x + 1]

            w1 = dx2 * dy2
            w2 = dx1 * dy2
            w3 = dx2 * dy1
            w4 = dx1 * dy1

            new_img[i, j] = w1*px1 + w2*px2 + w3*px3 + w4*px4
    return new_img


img = cv2.imread("airplane.jpg", cv2.IMREAD_ANYCOLOR)
if img is None:
    print("No Image")
    sys.exit()

result_img = bi_interpolation(img)
cv2.imshow("AirPlane_Original", img)
cv2.imshow("AirPlane_Output", result_img)
cv2.waitKey()
cv2.destroyAllWindows()
