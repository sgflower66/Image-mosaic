## Assuming a csv file has:
## Image Name (ImageID) in column 1 (line[0])
## Full Resolution URL (OriginalURL) in column 3 (line[2])# 5

import sys
import urllib
from csv import reader
import pandas as pd
import os.path
import urllib.request

csv_filename = 'all_data'
#data = pd.read_csv('all_data.csv')

with open(csv_filename+".csv".format(csv_filename), 'r') as csv_file:
    data = reader(csv_file)
       #for line in data:
    for index, line in enumerate(data):
        if index in range(0,100): 

        # elif I < 100: 
        # continue 
        # else: 
        # break
            if os.path.isfile(line[0] + ".jpg"): #"image_source/" + 
                print ("Image skipped for {0}".format(line[0]))
            else:
                if line[4] != '' and line[0] != "id":
                    urllib.request.urlretrieve(line[4], line[0] + ".jpg")
                    print ("Image saved for {0}".format(line[0])) 
                else:
                    print ("No result for {0}".format(line[0])) 
        else:
            break