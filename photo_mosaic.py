import photomosaic as pm
import matplotlib.pyplot as plt
image = plt.imread('original/2.jpg') # big photo 
	
pool = pm.make_pool('image_source/*.jpg')# def small image source：https://www.kaggle.com/alamson/safebooru/version/1

mosaic = pm.basic_mosaic(image,pool,(50,50)) # make 50*50 photomosaic
plt.imsave('final_photo.jpg',mosaic) 
