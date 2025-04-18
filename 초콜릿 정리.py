# -*- coding: utf-8 -*-
"""Untitled0.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1pwxY138PKiN62W3xvIG87EBRo2lRqyVJ
"""

from google.colab import files
uploaded = files.upload()
import numpy as np

data = np.loadtxt('chocolate_rating.csv', delimiter=',')
print('차원:', data.ndim)
print('모양:', data.shape)
print('원소수:', data.size)
print(data)

ratings_mean = data[:, 3].mean()
print(ratings_mean)

high_level = data[data[:, 3] >= 4]
high_id = high_level[:, 0].astype(np.int64)
print('우수초콜릿수:', high_id.size)
print(high_id)

high_kakao = high_level[:, 2]
unique_values, value_counts = np.unique(high_kakao, return_counts=True)
print('카카오함유량:', unique_values)
print('함유량별빈도수:', value_counts)

max_index = np.argmax(value_counts)
print(unique_values[max_index])
print('우수초콜릿', high_id.size, '가지중', value_counts[max_index],
      '가지의카카오함유량이', unique_values[max_index] * 100, '%입니다.')