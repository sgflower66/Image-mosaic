import cv2
import numpy as np
from matplotlib import pyplot as plt

# img = cv2.imread('final_photo.jpg')
# blur = cv2.blur(img,(5,5))
# plt.imsave('process_final.jpg',blur) 

def addImage(img1_path, img2_path):
    img1 = cv2.imread(img1_path)
    img = cv2.imread(img2_path)
    h, w, _ = img1.shape
    # same size
    img2 = cv2.resize(img, (w,h), interpolation=cv2.INTER_AREA)
    #cv2.imwrite('img2.jpg', img2)
    #print img1.shape, img2.shape
    #alpha，beta，gamma can adjust
    alpha = 0.6
    beta = 1-alpha
    gamma = 0
    img_add = cv2.addWeighted(img1, alpha, img2, beta, gamma)
    # return img_add
    cv2.imwrite('process_final.jpg', img_add)

imgadd = addImage('original/2.jpg', 'final_photo.jpg' )
cv2.imwrite('process_final2.jpg', imgadd)
#plt.imsave('process_final.jpg', img_add) 

