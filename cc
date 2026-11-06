{
 "cells": [
  {
   "cell_type": "markdown",
   "id": "9dd28b13-31cc-47ed-a5ab-8b1d06e00451",
   "metadata": {},
   "source": [
    "### 1. list vs. numpy"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "2fcfb586-bfce-470a-a117-e37f6141e403",
   "metadata": {},
   "outputs": [],
   "source": [
    "import numpy as np"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 4,
   "id": "510b7c7c-79b1-4de2-aac4-56e6e0c138fb",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2]\n",
      "[1 2]\n"
     ]
    }
   ],
   "source": [
    "# list\n",
    "a = [1,2]\n",
    "\n",
    "# numpy\n",
    "b = np.array([1,2])\n",
    "\n",
    "print(a)\n",
    "print(b)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "id": "8ff44b35-64a2-47e8-806e-010c12306bc2",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 'abc', [1, 2, 3], (2, 4)]\n"
     ]
    },
    {
     "ename": "ValueError",
     "evalue": "setting an array element with a sequence. The requested array has an inhomogeneous shape after 1 dimensions. The detected shape was (5,) + inhomogeneous part.",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mValueError\u001b[39m      Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[6]\u001b[39m\u001b[32m, line 6\u001b[39m\n\u001b[32m      3\u001b[39m \u001b[38;5;28mprint\u001b[39m(a)\n\u001b[32m      5\u001b[39m \u001b[38;5;66;03m# numpy\u001b[39;00m\n\u001b[32m----> \u001b[39m\u001b[32m6\u001b[39m b = \u001b[43mnp\u001b[49m\u001b[43m.\u001b[49m\u001b[43marray\u001b[49m\u001b[43m(\u001b[49m\u001b[43m[\u001b[49m\u001b[32;43m1\u001b[39;49m\u001b[43m,\u001b[49m\u001b[32;43m2\u001b[39;49m\u001b[43m,\u001b[49m\u001b[33;43m'\u001b[39;49m\u001b[33;43mabc\u001b[39;49m\u001b[33;43m'\u001b[39;49m\u001b[43m,\u001b[49m\u001b[43m[\u001b[49m\u001b[32;43m1\u001b[39;49m\u001b[43m,\u001b[49m\u001b[32;43m2\u001b[39;49m\u001b[43m,\u001b[49m\u001b[32;43m3\u001b[39;49m\u001b[43m]\u001b[49m\u001b[43m,\u001b[49m\u001b[43m(\u001b[49m\u001b[32;43m2\u001b[39;49m\u001b[43m,\u001b[49m\u001b[32;43m4\u001b[39;49m\u001b[43m)\u001b[49m\u001b[43m]\u001b[49m\u001b[43m)\u001b[49m\n",
      "\u001b[31mValueError\u001b[39m: setting an array element with a sequence. The requested array has an inhomogeneous shape after 1 dimensions. The detected shape was (5,) + inhomogeneous part."
     ]
    }
   ],
   "source": [
    "# list\n",
    "a = [1,2,'abc',[1,2,3],(2,4)]\n",
    "print(a)\n",
    "\n",
    "# numpy --> error \n",
    "b = np.array([1,2,'abc',[1,2,3],(2,4)])"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 12,
   "id": "19b5fd0d-185e-4c59-ae79-8157735c2f82",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "(1, 2, 3, 4, 2)\n",
      "{1, 2, 3, 4}\n",
      "{'v1': 20, 'v2': 30}\n",
      "dict_keys(['v1', 'v2'])\n",
      "dict_values([20, 30])\n",
      "30\n"
     ]
    }
   ],
   "source": [
    "# tuple\n",
    "a = (1,2,3,4,2)\n",
    "print(a)\n",
    "\n",
    "# set \n",
    "b = {1,2,3,4,2} # 중복을 허용하지 않음\n",
    "print(b)\n",
    "\n",
    "# dictionary\n",
    "c = {'v1': 20, 'v2': 30} # : 왼쪽에 있는 것은 key, \n",
    "                         # : 오른쪽에 있는 것은 value \n",
    "print(c)\n",
    "print(c.keys())\n",
    "print(c.values())\n",
    "print(c['v2'])"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "75a1b1cc-55cf-480d-9b7c-991a37af40c1",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 요소별 연산(element-wise operation)\n",
    "# [1, 2] + [3, 4] = [4, 6]\n",
    "\n",
    "# broadcasting\n",
    "# 1 + [1, 2, 3] --> [1, 1, 1] + [1, 2, 3]"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "5f1cdd3b-5c6c-488d-9ae9-6aa7ac87b150",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3] <class 'list'>\n",
      "[1 2 3] <class 'numpy.ndarray'>\n"
     ]
    }
   ],
   "source": [
    "# 1st:\n",
    "\n",
    "a = [1,2,3]\n",
    "b = np.array([1,2,3])\n",
    "\n",
    "print(a, type(a))\n",
    "print(b, type(b))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "1c5f188f-3644-4572-951b-f226d6998c01",
   "metadata": {},
   "outputs": [],
   "source": [
    "'''\n",
    "a = np.array() # 함수의 경우, 함수명 다음에 () 괄호가 있음\n",
    "               # 왜냐하면, 인자를 외부에서 받아들이기 위해\n",
    "'''         \n",
    "\n",
    "# 주석 (한줄짜리)\n",
    "'''\n",
    "여러 줄의 주석\n",
    "'''"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "id": "8ce7b97a-51dc-4aa8-823b-4a8b4eaeb010",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1 2 3]\n",
      "<class 'numpy.ndarray'>\n",
      "int64\n"
     ]
    }
   ],
   "source": [
    "a = np.array((1,2,3))\n",
    "\n",
    "b = np.array([4,5,6]) \n",
    "print(a)\n",
    "\n",
    "# dtype을 지정하지 않음\n",
    "c = np.array([4,5,6])\n",
    "print(type(c))\n",
    "print(c.dtype)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 22,
   "id": "ef9cebf0-05a8-41dc-9091-7bb8c0de2058",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3, 4, 5] <class 'list'>\n",
      "[1 2 3 4 5] <class 'numpy.ndarray'>\n"
     ]
    }
   ],
   "source": [
    "# 비교 1: 자료 생성\n",
    "\n",
    "# 리스트\n",
    "lst = [1, 2, 3, 4, 5]\n",
    "\n",
    "# 넘파이 배열\n",
    "arr = np.array([1, 2, 3, 4, 5])\n",
    "\n",
    "print(lst, type(lst))\n",
    "print(arr, type(arr))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "b8bab7cf-f067-4baf-9013-89f6a89c17f6",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 조심!!!!\n",
    "# dtype을 설정할 때, uint16을 자주 unit16로 표현함"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "f128c497-4cb2-40f1-94a3-36d91a1512a8",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 이미지는 0 (검은색) ~ 255 (하얀색) 사이의 값을 가짐\n",
    "# 0~255 --> 256 = 2^(8)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "1b44f45d-176e-494f-9e43-d8fdb02d3bf9",
   "metadata": {},
   "outputs": [],
   "source": [
    "'''\n",
    "np.array(object, dtype) : 파이썬 리스트나 튜플로부터 배열 생성\n",
    "- object : 배열을 생성하는 데 사용할 데이터 (주로 파이썬 리스트나 튜플)\n",
    "- dtype : 배열에 사용할 원하는 데이터 타입 (optional) \n",
    "          (생략 시, NumPy가 데이터를 보고 가장 적합한 타입을 자동으로 추론함)\n",
    "    - 부호가 있는 정수 (signed integers): int8, int16, int32, int64\n",
    "    - 부호가 없는 정수 (unsigned integers): uint8, uint16, uint32, uint64\n",
    "    - 부동 소수점 수 (floating-point numbers): float16, float32, float64\n",
    "    - 복소수 (complex numbers): complex64, complex128\n",
    "    - 불리언 (boolean): bool_ (True/False)\n",
    "    \n",
    "- 가장 많이 쓰이는 타입: uint8, int32 (or int64), and float32\n",
    "- 영상 처리: uint8이 표준 \n",
    "            픽셀 값은 0~255 사이인데, 이 범위가 딱 8비트(1바이트) 안에 \n",
    "            들어가기 때문에 메모리를 매우 효율적으로 씀\n",
    "- 머신러닝/딥러닝: 성능 최적화를 위해 float64보다 float32를 더 선호\n",
    "                  연산 속도가 더 빠르고 메모리 사용량을 절반으로 줄일 수 있음\n",
    "'''"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 20,
   "id": "57251780-ab82-4166-b7ea-1abf30aa6575",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1 2 3] int64\n",
      "[1. 2. 3.] float64\n",
      "[1. 2. 3.] float16\n",
      "[1 2 3] int16\n",
      "[False False  True] bool\n"
     ]
    }
   ],
   "source": [
    "# numpy data type\n",
    "\n",
    "a = np.array([1,2,3])\n",
    "print(a, a.dtype) # int64\n",
    "\n",
    "b = np.array([1, 2, 3.0])\n",
    "print(b, b.dtype) # float64\n",
    "\n",
    "# dtype을 데이터 생성시 지정\n",
    "c = np.array([1, 2, 3.0], dtype=np.float16)\n",
    "print(c, c.dtype)\n",
    "\n",
    "d = np.array([1, 2, 3.0], dtype=np.int16)\n",
    "print(d, d.dtype)\n",
    "\n",
    "e = np.array([0, 0.0, 3.0], dtype=np.bool_)\n",
    "print(e, e.dtype) # boolean에서 거짓은: 0, 0.0"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 22,
   "id": "f0a8fa9f-00c1-4a16-8a32-ceca20742e58",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3, 2, 3, 4]\n"
     ]
    },
    {
     "ename": "TypeError",
     "evalue": "can only concatenate list (not \"int\") to list",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mTypeError\u001b[39m       Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[22]\u001b[39m\u001b[32m, line 11\u001b[39m\n\u001b[32m      9\u001b[39m \u001b[38;5;66;03m# list (1)\u001b[39;00m\n\u001b[32m     10\u001b[39m a = [\u001b[32m1\u001b[39m, \u001b[32m2\u001b[39m, \u001b[32m3\u001b[39m]\n\u001b[32m---> \u001b[39m\u001b[32m11\u001b[39m d = \u001b[43ma\u001b[49m\u001b[43m \u001b[49m\u001b[43m+\u001b[49m\u001b[43m \u001b[49m\u001b[32;43m1\u001b[39;49m\n\u001b[32m     12\u001b[39m \u001b[38;5;28mprint\u001b[39m(d)\n",
      "\u001b[31mTypeError\u001b[39m: can only concatenate list (not \"int\") to list"
     ]
    }
   ],
   "source": [
    "# 연산 비교\n",
    "\n",
    "# list (1)\n",
    "a = [1, 2, 3]\n",
    "b = [2, 3, 4]\n",
    "c = a + b # list + list는 각 list를 concat (연결)\n",
    "print(c)\n",
    "\n",
    "# list (2)\n",
    "a = [1, 2, 3]\n",
    "d = a + 1 # error: list + integer라서..list+list만 가능\n",
    "print(d)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 24,
   "id": "05476a5c-67a7-4147-b371-d930d1af430f",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3, 1, 2, 3]\n",
      "====================\n"
     ]
    }
   ],
   "source": [
    "# 연산 비교\n",
    "\n",
    "# list (2)\n",
    "a = [1, 2, 3]\n",
    "b = a * 2\n",
    "print(b)\n",
    "\n",
    "# 시퀀스 자료형 (list, tuple, string,..)에다가 \n",
    "# * 연산자를 취하면, 시퀀스 자료형이 반복됨\n",
    "\n",
    "print('='*20)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 18,
   "id": "348dec59-6a3b-4064-acce-cf041b79421e",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3, 4, 5, 6]\n"
     ]
    },
    {
     "ename": "TypeError",
     "evalue": "can only concatenate list (not \"int\") to list",
     "output_type": "error",
     "traceback": [
      "\u001b[1;31m---------------------------------------------------------------------------\u001b[0m",
      "\u001b[1;31mTypeError\u001b[0m                                 Traceback (most recent call last)",
      "Cell \u001b[1;32mIn[18], line 12\u001b[0m\n\u001b[0;32m      9\u001b[0m c \u001b[38;5;241m=\u001b[39m a \u001b[38;5;241m+\u001b[39m b\n\u001b[0;32m     10\u001b[0m \u001b[38;5;28mprint\u001b[39m(c)\n\u001b[1;32m---> 12\u001b[0m d \u001b[38;5;241m=\u001b[39m a \u001b[38;5;241m+\u001b[39m \u001b[38;5;241m1\u001b[39m\n",
      "\u001b[1;31mTypeError\u001b[0m: can only concatenate list (not \"int\") to list"
     ]
    }
   ],
   "source": [
    "# 비교 2: 연산 차이\n",
    "\n",
    "# 리스트로 뎃셈연산 수행 ==> 에러 발생\n",
    "\n",
    "a = [1, 2, 3]\n",
    "b = [4, 5, 6]\n",
    "\n",
    "c = a + b\n",
    "print(c)\n",
    "\n",
    "d = a + 1"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 25,
   "id": "70f96896-210f-4071-9bf3-d2eb8db2e285",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "<class 'list'>\n",
      "[1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3]\n",
      "========================================\n"
     ]
    }
   ],
   "source": [
    "# 비교 2: 연산 차이\n",
    "\n",
    "# 리스트로 곱셈 연산 수함 ==> 예상과는 다른 결과\n",
    "\n",
    "a = [1, 2, 3]\n",
    "print(type(a))\n",
    "\n",
    "f = a*4\n",
    "print(f)\n",
    "print('='*40) # 시퀀스 자료형 (list, tuple, string)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 27,
   "id": "efb39e96-a6fa-46c5-87a7-26be6e9af5d6",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3]\n",
      "[1, 2, 3, 10]\n"
     ]
    },
    {
     "ename": "AttributeError",
     "evalue": "'tuple' object has no attribute 'append'",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mAttributeError\u001b[39m  Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[27]\u001b[39m\u001b[32m, line 7\u001b[39m\n\u001b[32m      4\u001b[39m \u001b[38;5;28mprint\u001b[39m(a)\n\u001b[32m      6\u001b[39m b = (\u001b[32m1\u001b[39m,\u001b[32m2\u001b[39m,\u001b[32m3\u001b[39m)\n\u001b[32m----> \u001b[39m\u001b[32m7\u001b[39m \u001b[43mb\u001b[49m\u001b[43m.\u001b[49m\u001b[43mappend\u001b[49m(\u001b[32m4\u001b[39m)\n",
      "\u001b[31mAttributeError\u001b[39m: 'tuple' object has no attribute 'append'"
     ]
    }
   ],
   "source": [
    "a = [1, 2, 3]\n",
    "print(a)\n",
    "a.append(10)\n",
    "print(a)\n",
    "\n",
    "b = (1,2,3)\n",
    "b.append(4)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 30,
   "id": "bd5c8f1a-65ca-4b89-84f5-50da500d9923",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[5, 7, 9, 11]\n"
     ]
    }
   ],
   "source": [
    "# list로 연산은 불가능??\n",
    "\n",
    "# 리스트로 연산하는 방법\n",
    "a = [1,2,3,4]\n",
    "b = [4,5,6,7]\n",
    "result = [] # empty list\n",
    "\n",
    "for i in range(len(a)):\n",
    "    result.append(a[i] + b[i])\n",
    "    #print(result)\n",
    "print(result)    "
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 33,
   "id": "c64956f8-d18d-4af9-abdc-2e96194ef7d0",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[3 5 7 9]\n",
      "[20 30 40 50]\n"
     ]
    }
   ],
   "source": [
    "# numpy로 연산\n",
    "\n",
    "a = np.array([1,2,3,4])\n",
    "b = np.array([2,3,4,5])\n",
    "#print(type(a), type(b))\n",
    "\n",
    "c = a + b\n",
    "print(c)\n",
    "\n",
    "d = b * 10\n",
    "print(d)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 30,
   "id": "c9dd0512-7599-41ef-95ba-3f618659e7ec",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1 2 3]\n",
      "----------\n",
      "[3 4 5]\n",
      "----------\n",
      "[-1  0  1]\n",
      "----------\n",
      "[0.5 1.  1.5]\n",
      "----------\n",
      "[2 4 6]\n",
      "----------\n",
      "[3 6 9]\n",
      "----------\n",
      "[ 2  8 18]\n"
     ]
    }
   ],
   "source": [
    "# 비교 2: 연산 차이\n",
    "\n",
    "# NumPy로 사칙연산 ==> works as intended\n",
    "a = np.array([1,2,3]) # 1d array\n",
    "print(a), print('-'*10)\n",
    "\n",
    "b = a + 2\n",
    "c = a - 2\n",
    "d = a / 2\n",
    "e = a * 2\n",
    "print(b), print('-'*10)\n",
    "print(c), print('-'*10)\n",
    "print(d), print('-'*10)\n",
    "print(e), print('-'*10)\n",
    "\n",
    "f = np.array([2, 4, 6])\n",
    "print(a + f), print('-'*10)\n",
    "print(a * f)  "
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 38,
   "id": "b0746057-8d9a-461b-ad49-460b0db0e4ca",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[1, 2, 3], [4, 5, 6]]\n",
      "[[1 2 3]\n",
      " [4 5 6]]\n",
      "(2, 3)\n",
      "int64\n"
     ]
    },
    {
     "ename": "AttributeError",
     "evalue": "'list' object has no attribute 'shape'",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mAttributeError\u001b[39m  Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[38]\u001b[39m\u001b[32m, line 23\u001b[39m\n\u001b[32m     20\u001b[39m \u001b[38;5;28mprint\u001b[39m(numpy_mat.shape)\n\u001b[32m     21\u001b[39m \u001b[38;5;28mprint\u001b[39m(numpy_mat.dtype)\n\u001b[32m---> \u001b[39m\u001b[32m23\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[43mlist_mat\u001b[49m\u001b[43m.\u001b[49m\u001b[43mshape\u001b[49m) \u001b[38;5;66;03m# list는 .shape 속성이 없어서 에러 발생\u001b[39;00m\n",
      "\u001b[31mAttributeError\u001b[39m: 'list' object has no attribute 'shape'"
     ]
    }
   ],
   "source": [
    "# 비교 3: 다차원 데이터\n",
    "\n",
    "# 다차원 데이터를 표현하기 위해서,\n",
    "# 리스트는 중첩 리스트로 표현하지만 느리고 불편함.\n",
    "# NumPy는 다차원 배열(n차원 tensor)을 직접 지원.\n",
    "\n",
    "list_mat = [[1, 2, 3], \n",
    "            [4, 5, 6]]\n",
    "\n",
    "numpy_mat = np.array([[1, 2, 3], \n",
    "                      [4, 5, 6]])\n",
    "\n",
    "print(list_mat)\n",
    "print(numpy_mat)\n",
    "\n",
    "# A: (2,3) // B: (2,3) --> A*B (연산 불가능)\n",
    "# A: (2,3) // B: (3,3) --> A*B (연산 가능: 2,3)\n",
    "\n",
    "# .shape 속성: 배열의 형태를 알려줌\n",
    "print(numpy_mat.shape)\n",
    "print(numpy_mat.dtype)\n",
    "\n",
    "print(list_mat.shape) # list는 .shape 속성이 없어서 에러 발생"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 41,
   "id": "17a01fa2-3fb8-4386-a169-c5bc489ab260",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 2, 3]\n",
      "[4, 5, 6]\n",
      "==========\n",
      "2\n",
      "6\n",
      "==========\n",
      "[1 2 3]\n",
      "[4 5 6]\n",
      "2\n",
      "6\n",
      "2\n",
      "6\n",
      "2\n",
      "6\n"
     ]
    },
    {
     "ename": "TypeError",
     "evalue": "list indices must be integers or slices, not tuple",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mTypeError\u001b[39m       Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[41]\u001b[39m\u001b[32m, line 39\u001b[39m\n\u001b[32m     36\u001b[39m \u001b[38;5;28mprint\u001b[39m(numpy_mat[(\u001b[32m0\u001b[39m,\u001b[32m1\u001b[39m)])\n\u001b[32m     37\u001b[39m \u001b[38;5;28mprint\u001b[39m(numpy_mat[(\u001b[32m1\u001b[39m,\u001b[32m2\u001b[39m)])\n\u001b[32m---> \u001b[39m\u001b[32m39\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[43mlist_mat\u001b[49m\u001b[43m[\u001b[49m\u001b[32;43m0\u001b[39;49m\u001b[43m,\u001b[49m\u001b[32;43m1\u001b[39;49m\u001b[43m]\u001b[49m)   \u001b[38;5;66;03m# 에러 발생\u001b[39;00m\n",
      "\u001b[31mTypeError\u001b[39m: list indices must be integers or slices, not tuple"
     ]
    }
   ],
   "source": [
    "# 비교 3: 다차원 데이터 indexing\n",
    "\n",
    "'''\n",
    "list_mat = [[1, 2, 3], \n",
    "            [4, 5, 6]]\n",
    "'''\n",
    "\n",
    "# 리스트 조회 (indexing, 색인 검색)\n",
    "print(list_mat[0])    # 0번째 행 인덱싱: [1,2,3]이 검색됨\n",
    "print(list_mat[1])    # 1번째 행 인덱싱: [4,5,6]이 검색됨\n",
    "print('='*10)\n",
    "\n",
    "print(list_mat[0][1]) # 2가 조회됨\n",
    "print(list_mat[1][2]) # 6이 조회됨\n",
    "print('='*10)\n",
    "\n",
    "\n",
    "'''\n",
    "numpy_mat = np.array([[1, 2, 3], \n",
    "                      [4, 5, 6]])\n",
    "'''                      \n",
    "# numpy 조회 (indexing, 색인 검색)\n",
    "print(numpy_mat[0])    # 0번째 행 인덱싱\n",
    "print(numpy_mat[1])    # 1번째 행 인덱싱\n",
    "\n",
    "# 단계적으로 인덱싱 (약간 느림) -> 비추\n",
    "print(numpy_mat[0][1]) # 0번째 행 인덱싱 후, \n",
    "                       # 그 행에서 1번째 열 선택 (2번 접근)\n",
    "print(numpy_mat[1][2]) # 1번째 행 인덱싱 후, \n",
    "                       # 그 행에서 2번째 열 선택 (2번 접근)\n",
    "\n",
    "# 한 번에 다차원 인덱싱 (위 보다 더 빠름) -> 추천\n",
    "print(numpy_mat[0,1])  # 0행 1열 요소 인덱싱 (1번 접근)\n",
    "print(numpy_mat[1,2])  # 1행 2열 요소 인덱싱 (1번 접근)\n",
    "\n",
    "print(numpy_mat[(0,1)])\n",
    "print(numpy_mat[(1,2)])\n",
    "\n",
    "print(list_mat[0,1])   # 에러 발생"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 46,
   "id": "2998ef70-9bac-44cb-8b3d-179815946fac",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "<class 'list'>\n",
      "<class 'numpy.ndarray'>\n",
      "list with for loop: 1.096510410308838\n",
      "list comprehension: 0.5183031558990479\n",
      "numpy             : 0.02409505844116211\n"
     ]
    }
   ],
   "source": [
    "# 비교 4: 성능(속도) 차이\n",
    "\n",
    "# NumPy는 C 언어 기반의 벡터화 연산(vectorized operations)을 \n",
    "# 사용하므로, 리스트보다 훨씬 빠름\n",
    "\n",
    "import time\n",
    "\n",
    "# print(time.time()) # 현재 시간을 알려줌\n",
    "lst = list(range(10000000)) # 0~999999\n",
    "print(type(lst))\n",
    "\n",
    "arr = np.array(lst)\n",
    "print(type(arr))\n",
    "\n",
    "start_time = time.time()    # 13시 38분 01초\n",
    "\n",
    "result = []\n",
    "for i in range(len(lst)):\n",
    "    result.append(lst[i]*2)\n",
    "    \n",
    "end_time = time.time()      # 13시 38분 04초\n",
    "total_time = end_time - start_time  \n",
    "\n",
    "# list comprehension\n",
    "start_time2 = time.time()\n",
    "\n",
    "result2 = [x*2 for x in lst]\n",
    "\n",
    "end_time2 = time.time()\n",
    "\n",
    "total_time2 = end_time2 - start_time2  \n",
    "\n",
    "# numpy\n",
    "start_time3 = time.time()\n",
    "\n",
    "result3 = arr*2\n",
    "\n",
    "end_time3 = time.time()\n",
    "\n",
    "total_time3 = end_time3 - start_time3  \n",
    "\n",
    "print(f'list with for loop: {total_time}')\n",
    "print(f'list comprehension: {total_time2}')\n",
    "print(f'numpy             : {total_time3}')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 40,
   "id": "5d048872-3ba4-4861-9540-223ea6037982",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "리스트 연산(for문):     0.12458658218383789\n",
      "리스트 연산(list comp): 0.055814266204833984\n",
      "넘파이 연산:            0.0019893646240234375\n"
     ]
    }
   ],
   "source": [
    "# 비교 4: 성능 차이\n",
    "\n",
    "# NumPy는 C 언어 기반의 벡터화 연산(vectorized operations)을 \n",
    "# 사용하므로, 리스트보다 훨씬 빠름\n",
    "\n",
    "import time\n",
    "\n",
    "lst = list(range(1000000))\n",
    "arr = np.array(lst)\n",
    "\n",
    "# 리스트 곱셈 (for문)\n",
    "start = time.time()\n",
    "lst2 = []\n",
    "for i in range(len(lst)):\n",
    "    lst2.append(lst[i] * 2)\n",
    "print(\"리스트 연산(for문):    \", time.time() - start)\n",
    "\n",
    "# 리스트 곱셈 (list comprehension)\n",
    "start = time.time()\n",
    "lst3 = [x * 2 for x in lst]\n",
    "print(\"리스트 연산(list comp):\", time.time() - start)\n",
    "\n",
    "# 넘파이 곱셈\n",
    "start = time.time()\n",
    "arr2 = arr * 2\n",
    "print(\"넘파이 연산:           \", time.time() - start)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "1b77af1e-5028-4c79-8597-d0678fbda270",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": 23,
   "id": "a50e1103-c0fe-4816-86e5-19917756ee5c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[11, 22, 33, 44]\n",
      "[11 22 33 44]\n"
     ]
    }
   ],
   "source": [
    "# 벡터화 연산\n",
    "# - 반복문 (for)을 사용하지 않고도 배열 전체에 대해 한 번에 연산을 수행하는 방식\n",
    "\n",
    "# 일반 파이썬 방식\n",
    "a = [1, 2, 3, 4]\n",
    "b = [10, 20, 30, 40]\n",
    "c = []\n",
    "for i in range(len(a)):\n",
    "    c.append(a[i] + b[i])\n",
    "print(c)  # [11, 22, 33, 44]\n",
    "\n",
    "# NumPy 벡터화 연산\n",
    "import numpy as np\n",
    "\n",
    "a = np.array([1, 2, 3, 4])\n",
    "b = np.array([10, 20, 30, 40])\n",
    "c = a + b\n",
    "print(c)  # [11 22 33 44]"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "02597a23-d384-4264-84e7-ef999e2a4543",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "attachments": {},
   "cell_type": "markdown",
   "id": "5c9d036f-7af0-4888-b203-4daadc34ac7b",
   "metadata": {},
   "source": [
    "### 2. NumPy 주요 함수의 특징 및 장점"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 49,
   "id": "4e726a52-3d88-4289-93ec-9b68a5c01531",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[1 2 3]\n",
      " [4 5 6]\n",
      " [4 5 6]\n",
      " [4 5 6]]\n",
      "<class 'numpy.ndarray'>\n",
      "(4, 3)\n",
      "2\n",
      "12\n",
      "int32\n"
     ]
    }
   ],
   "source": [
    "# 배열 속성 확인 관련\n",
    "\n",
    "arr = np.array([[1, 2, 3], \n",
    "                [4, 5, 6],\n",
    "                [4, 5, 6],\n",
    "                [4, 5, 6]], dtype=np.int32)\n",
    "\n",
    "print(arr)\n",
    "print(type(arr))\n",
    "print(arr.shape) # (4,3)\n",
    "print(arr.ndim)  # 2-D\n",
    "print(arr.size)  # 요소의 전체 개수: 행*열=4*3=12\n",
    "print(arr.dtype)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "13cbbdd7-18c2-4d67-97c4-ec8b4d44078e",
   "metadata": {},
   "outputs": [],
   "source": [
    "'''\n",
    "데이터 타입 변형 (형변형)\n",
    "\n",
    "1. ndarray.astype() 메소드\n",
    "- usage:\n",
    "    - a.astype(‘typename’): 예) a.astype(‘float32’)\n",
    "    - a.astype(np.dtype)  : 예) a.astype(np.int32)\n",
    "\n",
    "2. np.dtype(variable)\n",
    "- np.uint??(variable), np.int??(variable)\n",
    "- np.float??(variable), np.complex??(variable)\n",
    "- np.bool_(variable)\n",
    "- 여기서 ?? 는 8, 16, 32, 64와 같은 비트 수를 의미\n",
    "'''"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 55,
   "id": "b40c57b4-b834-4c5b-92ad-10ca7f5cfe0f",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[0 1 2 3 4 5 6 7 8 9] int64\n",
      "[0. 1. 2. 3. 4. 5. 6. 7. 8. 9.] float16\n",
      "[0 1 2 3 4 5 6 7 8 9] uint8\n",
      "[False  True  True  True  True  True  True  True  True  True] bool\n"
     ]
    }
   ],
   "source": [
    "# converting the data type\n",
    "\n",
    "#a = np.array([0,1,2,3,5,6,7,8,9])\n",
    "# 조심1: unit16 vs. uint16\n",
    "# 조심2: np.arrange vs. np.arange\n",
    "# arange = a(rray) + range 인 것처럼 보임...\n",
    "\n",
    "a = np.arange(10)\n",
    "print(a, a.dtype)\n",
    "\n",
    "b = a.astype('float16')\n",
    "print(b, b.dtype)\n",
    "\n",
    "c = a.astype(np.uint8)\n",
    "print(c, c.dtype)\n",
    "\n",
    "d = np.bool_(a)\n",
    "print(d, d.dtype)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "160b2b3e-04a4-44c8-8686-7855a0cfeb3a",
   "metadata": {},
   "outputs": [],
   "source": [
    "'''\n",
    "np.arange([start=0, ] stop [, step=1, dtype=float64])\n",
    "- start: 구간의 시작값 (default is 0)\n",
    "- stop : 구간의 끝 \n",
    "         주의: 이 값 자체는 범위에 포함되지 않습니다. \n",
    "         (정수의 경우 stop - 1까지만 생성)\n",
    "- step : 값들 사이의 간격 (default is 1)\n",
    "\n",
    "- NOTE: 기본적으로 \"1차원 배열(벡터)\"만 생성\n",
    "- 다차원 배열을 만들려면, 반드시 reshape()과 같은 \n",
    "  \"배열 형태 변환(Shape Transformation)\" 함수를 함께 사용해야 함\n",
    "'''"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 63,
   "id": "16dfb478-a790-4a70-84ad-0a797fe00776",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[0 1 2 3 4]\n",
      "[5.  5.5 6.  6.5 7.  7.5 8.  8.5 9.  9.5]\n",
      "<class 'numpy.ndarray'>\n",
      "<class 'range'>\n",
      "[5, 6, 7, 8, 9]\n",
      "range(5, 10)\n"
     ]
    }
   ],
   "source": [
    "b = np.arange(5)\n",
    "print(b)\n",
    "\n",
    "c = np.arange(5, 10, 0.5)\n",
    "print(c)\n",
    "print(type(c))\n",
    "\n",
    "# d = list(range(5, 10, 0.5))\n",
    "# e = list(range(5.2, 10, 1))\n",
    "f = range(5,10)\n",
    "print(type(f))\n",
    "print(list(f))\n",
    "print(f)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "946a9e3d-d738-4962-bedb-914f45f3ff0c",
   "metadata": {},
   "outputs": [],
   "source": [
    "'''\n",
    "np.arange() vs. range()\n",
    "- 사용법: np.arange() 함수의 사용법은 파이썬 내장 함수인 range()와 거의 동일\n",
    "- 반환 객체의 차이:\n",
    "    - range()는 range 객체(반복 가능한 객체)를 반환\n",
    "    - np.arange()는 넘파이 배열(ndarray)을 반환\n",
    "- 실수(소수점) 지원 여부:\n",
    "    - range()는 정수만 지원\n",
    "    - np.arange()는 실수(소수점) 단위의 간격(step)을 사용할 수 있음\n",
    "'''"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 67,
   "id": "a1b69ba8-dba9-43bb-9267-1711e8e28648",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "(2, 3)\n",
      "[[ True  True False]\n",
      " [ True  True  True]]\n",
      "False\n",
      "True\n"
     ]
    }
   ],
   "source": [
    "# 논리 관련\n",
    "arr = np.array([[1, 2, -3], \n",
    "                [4, 5, 6]], dtype=np.int32)\n",
    "\n",
    "print(arr.shape)\n",
    "print(arr > 0)\n",
    "print((arr > 0).all())\n",
    "print((arr > 0).any())"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 68,
   "id": "f64986cf-a663-46d4-8f5c-38f1b72fa540",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "21\n",
      "21\n",
      "====================\n",
      "3.5\n",
      "3.5\n",
      "====================\n",
      "1.707825127659933\n",
      "1.707825127659933\n",
      "====================\n",
      "[[1 4]\n",
      " [2 5]\n",
      " [3 6]]\n",
      "[[1 4]\n",
      " [2 5]\n",
      " [3 6]]\n",
      "[[1 4]\n",
      " [2 5]\n",
      " [3 6]]\n"
     ]
    }
   ],
   "source": [
    "# 넘파이 모듈의 함수 이름과 다차원 배열의 메소드 이름이 동일한 경우가 많음\n",
    "\n",
    "arr = np.array([[1, 2, 3],\n",
    "                [4, 5, 6]])\n",
    "# 합\n",
    "print(np.sum(arr))    # 모듈 함수 (numpy.sum)\n",
    "print(arr.sum())      # ndarray 메서드\n",
    "print('='*20)\n",
    "\n",
    "# 평균\n",
    "print(np.mean(arr))   # numpy 함수\n",
    "print(arr.mean())     # ndarray 메서드\n",
    "print('='*20)\n",
    "\n",
    "# 표준편차 (std)\n",
    "print(np.std(arr))    # numpy.std(arr)\n",
    "print(arr.std())      # arr.std()\n",
    "print('='*20)\n",
    "\n",
    "# 전치행렬\n",
    "print(np.transpose(arr))  # numpy 함수\n",
    "print(arr.transpose())    # 메서드\n",
    "print(arr.T)              # 약식 메서드 (동일)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 69,
   "id": "fbd11337-0000-4df2-8293-5ae5d89cda05",
   "metadata": {},
   "outputs": [],
   "source": [
    "import math\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 69,
   "id": "e3a10f6e-5f14-4895-b0f3-4a23864afc2d",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1, 4, 9, 16, 25]\n",
      "[ 1  4  9 16 25]\n"
     ]
    }
   ],
   "source": [
    "# 파이썬 연산 vs. 넘파이의 벡터화 연산\n",
    "\n",
    "# 제곱 연산하는 파이썬 방식 (for문 사용)\n",
    "data = [1, 2, 3, 4, 5]\n",
    "result = []\n",
    "\n",
    "for x in data:\n",
    "    result.append(x ** 2)\n",
    "    \n",
    "print(result)\n",
    "\n",
    "# 제곱 연산하는 NumPy 벡터화 연산\n",
    "arr = np.array([1, 2, 3, 4, 5])\n",
    "result_arr = arr ** 2\n",
    "print(result_arr)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "id": "378a3eff-f42c-436f-aa4f-73f529dd9478",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "abs:    [1 2 3]\n",
      "sqrt:   [1. 2. 3.]\n",
      "exp:    [1.         2.71828183]\n",
      "log:    [0. 1.]\n",
      "sin:    [0.0000000e+00 1.0000000e+00 1.2246468e-16]\n",
      "cos:    [ 1.000000e+00  6.123234e-17 -1.000000e+00]\n",
      "isnan:  [False  True False]\n"
     ]
    }
   ],
   "source": [
    "# 단항 ufunc (universal functions)\n",
    "\n",
    "# 1. np.abs() - 절댓값\n",
    "arr_abs = np.array([-1, 2, -3])\n",
    "print(f\"abs:    {np.abs(arr_abs)}\")      # [1 2 3]\n",
    "\n",
    "# 2. np.sqrt() - 제곱근\n",
    "arr_sqrt = np.array([1, 4, 9])\n",
    "print(f\"sqrt:   {np.sqrt(arr_sqrt)}\")     # [1. 2. 3.]\n",
    "\n",
    "# 3. np.exp() - 지수함수 (e^x)\n",
    "arr_exp = np.array([0, 1])\n",
    "print(f\"exp:    {np.exp(arr_exp)}\")      # [1.         2.71828183]\n",
    "\n",
    "# 4. np.log() - 자연로그 (ln)\n",
    "# np.e는 자연상수 e를 의미\n",
    "arr_log = np.array([1, np.e])\n",
    "print(f\"log:    {np.log(arr_log)}\")      # [0. 1.]\n",
    "\n",
    "# 5. np.sin() & np.cos() - 삼각함수\n",
    "# np.pi는 원주율(π)을 의미합니다.\n",
    "arr_trig = np.array([0, np.pi/2, np.pi])\n",
    "print(f\"sin:    {np.sin(arr_trig)}\")     # [0. 1. 0. (매우 작은 근사치)]\n",
    "print(f\"cos:    {np.cos(arr_trig)}\")     # [1. 0. -1.]\n",
    "\n",
    "# 6. np.isnan() - 결측치(NaN) 확인\n",
    "# np.nan은 Not a Number의 약자로, 데이터가 없음을 뜻합니다.\n",
    "arr_nan = np.array([1, np.nan, 3])\n",
    "print(f\"isnan:  {np.isnan(arr_nan)}\")    # [False  True False]"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 70,
   "id": "1773f29f-a886-4afd-a6e5-7e25f5c6dba0",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "입력 배열 x: [10 20 30]\n",
      "입력 배열 y: [ 5 25]\n",
      "------------------------------\n"
     ]
    },
    {
     "ename": "ValueError",
     "evalue": "operands could not be broadcast together with shapes (3,) (2,) ",
     "output_type": "error",
     "traceback": [
      "\u001b[31m-------------------------------------------------\u001b[39m",
      "\u001b[31mValueError\u001b[39m      Traceback (most recent call last)",
      "\u001b[36mCell\u001b[39m\u001b[36m \u001b[39m\u001b[32mIn[70]\u001b[39m\u001b[32m, line 10\u001b[39m\n\u001b[32m      7\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[33mf\u001b[39m\u001b[33m\"\u001b[39m\u001b[33m입력 배열 y: \u001b[39m\u001b[38;5;132;01m{\u001b[39;00my\u001b[38;5;132;01m}\u001b[39;00m\u001b[33m\"\u001b[39m), \u001b[38;5;28mprint\u001b[39m(\u001b[33m\"\u001b[39m\u001b[33m-\u001b[39m\u001b[33m\"\u001b[39m * \u001b[32m30\u001b[39m)\n\u001b[32m      9\u001b[39m \u001b[38;5;66;03m# 산술 연산 ufunc\u001b[39;00m\n\u001b[32m---> \u001b[39m\u001b[32m10\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[33mf\u001b[39m\u001b[33m\"\u001b[39m\u001b[33madd(x, y)      : \u001b[39m\u001b[38;5;132;01m{\u001b[39;00m\u001b[43mnp\u001b[49m\u001b[43m.\u001b[49m\u001b[43madd\u001b[49m\u001b[43m(\u001b[49m\u001b[43mx\u001b[49m\u001b[43m,\u001b[49m\u001b[38;5;250;43m \u001b[39;49m\u001b[43my\u001b[49m\u001b[43m)\u001b[49m\u001b[38;5;132;01m}\u001b[39;00m\u001b[33m\"\u001b[39m)      \u001b[38;5;66;03m# [15 45 60]\u001b[39;00m\n\u001b[32m     11\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[33mf\u001b[39m\u001b[33m\"\u001b[39m\u001b[33msubtract(x, y) : \u001b[39m\u001b[38;5;132;01m{\u001b[39;00mnp.subtract(x,\u001b[38;5;250m \u001b[39my)\u001b[38;5;132;01m}\u001b[39;00m\u001b[33m\"\u001b[39m) \u001b[38;5;66;03m# [ 5 -5  0]\u001b[39;00m\n\u001b[32m     12\u001b[39m \u001b[38;5;28mprint\u001b[39m(\u001b[33mf\u001b[39m\u001b[33m\"\u001b[39m\u001b[33mmultiply(x, y) : \u001b[39m\u001b[38;5;132;01m{\u001b[39;00mnp.multiply(x,\u001b[38;5;250m \u001b[39my)\u001b[38;5;132;01m}\u001b[39;00m\u001b[33m\"\u001b[39m) \u001b[38;5;66;03m# [ 50 500 900]\u001b[39;00m\n",
      "\u001b[31mValueError\u001b[39m: operands could not be broadcast together with shapes (3,) (2,) "
     ]
    }
   ],
   "source": [
    "# 이항 (binary) ufunc \n",
    "\n",
    "x = np.array([10, 20, 30])\n",
    "y = np.array([5, 25, 30])\n",
    "\n",
    "print(f\"입력 배열 x: {x}\")\n",
    "print(f\"입력 배열 y: {y}\"), print(\"-\" * 30)\n",
    "\n",
    "# 산술 연산 ufunc\n",
    "print(f\"add(x, y)      : {np.add(x, y)}\")      # [15 45 60]\n",
    "print(f\"subtract(x, y) : {np.subtract(x, y)}\") # [ 5 -5  0]\n",
    "print(f\"multiply(x, y) : {np.multiply(x, y)}\") # [ 50 500 900]\n",
    "print(f\"divide(x, y)   : {np.divide(x, y)}\")   # [2.  0.8 1. ]\n",
    "print(f\"power(x, 2)    : {np.power(x, 2)}\")    # [100 400 900] \n",
    "\n",
    "# 비교 및 선택 ufunc\n",
    "print(f\"maximum(x, y)  : {np.maximum(x, y)}\")  # [10 25 30] \n",
    "print(f\"greater(x, y)  : {np.greater(x, y)}\")  # [ True False False] \n",
    "print(f\"equal(x, y)    : {np.equal(x, y)}\")    # [False False  True] \n",
    "\n",
    "# 3. 비교 ufunc의 결과를 인덱스로 사용 (불리언 인덱싱)\n",
    "mask = np.greater(x, y)\n",
    "print(f\"x가 y보다 큰 원소들만 추출: {x[mask]}\")  # [10]"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "182ac9c1-29dd-413b-ae4c-835150df71f4",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.13.11"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}

{
 "cells": [
  {
   "cell_type": "markdown",
   "id": "0c7a237c-d6b0-41bd-b7a3-a9e58aad255b",
   "metadata": {},
   "source": [
    "# Pandas"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 1,
   "id": "ce3e8f1f-ac95-4f26-8caf-a7233503835b",
   "metadata": {},
   "outputs": [],
   "source": [
    "import pandas as pd"
   ]
  },
  {
   "cell_type": "markdown",
   "id": "14ff8f7c-edfb-481c-a975-f84140b93d24",
   "metadata": {},
   "source": [
    "### 6. 데이터 값 변환"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "1de9439e-e4b7-4495-af61-a233b2318e06",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 데이터 값 변환하기: map(), replace(), apply()\n",
    "\n",
    "# - 간단한 매핑은 map()\n",
    "# - 결측 없이 치환은 replace()\n",
    "# - 논리 기반 변환은 apply()\n",
    "# - 데이터프레임 매핑은 applymap()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "58bf0345-477d-493a-86d7-7d8ac183a71b",
   "metadata": {},
   "outputs": [],
   "source": [
    "# map() 함수\n",
    "# - Series의 각 값을 다른 값으로 1:1 매핑하여 변환하는 함수 (데이터프레임 전체가 아님)\n",
    "# - 범주형 (문자) 데이터를 분석 가능한 숫자형으로 바꿀 때 주로 사용\n",
    "\n",
    "# 특징 \n",
    "# - 기본적으로 Series 전용 함수 \n",
    "#   -- BUT, Pandas 2.1.0 부터 df.applymap (데이터프레임 전용)이 df.map으로 통합됨\n",
    "#   -- 단, 데이터프레임 전체에 적용할 때는 주로 함수 (lambda 등)를 사용함\n",
    "# - 딕셔너리, 함수 (lambda), 또는 다른 Series를 입력으로 받을 수 있음 (주로 딕셔너리 기반)\n",
    "# - 딕셔너리 사용 시, 매핑되지 않은 값은 자동으로 NaN 처리 \n",
    "#   -- replace() 함수는 매핑되지 않은 값을 그대로 유지함"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "f5278e54-e0c5-4c6c-918f-e5a18c6f36f0",
   "metadata": {},
   "outputs": [],
   "source": [
    "# replace() 함수\n",
    "# - Series 또는 DataFrame 전체에서 특정 값/패턴을 다른 값으로 치환하는 함수\n",
    "\n",
    "# 특징 \n",
    "# - Series뿐만 아니라 DataFrame 전체에도 적용 가능\n",
    "# - 매핑되지 않은 (교체 대상이 아닌) 값들은 원래 값을 그대로 유지\n",
    "#   -- map 함수처럼 NaN으로 변환하지 않음\n",
    "# - 단일 값, 리스트, 딕셔너리는 물론 정규 표현식까지 지원\n",
    "#   -- 정규 표현식 사용 시 regex=True 파라미터를 반드시 명시해야 함\n",
    "# - inplace=True 파라미터를 통해 원본데이터 수정 가능"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "f4814370-e58c-4a0b-982a-f5c392895c9e",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "4d199485-1577-42ee-a4ea-0391a2e3f814",
   "metadata": {},
   "outputs": [],
   "source": [
    "# apply()\n",
    "# - Series 또는 DataFrame에 사용자가 직접 만든 함수를 적용하는 함수\n",
    "# - 조건이 여러 개 or 단순 매핑이 아닌 논리 기반 변환에 매우 유용\n",
    "\n",
    "# 특징\n",
    "# - Series, DataFrame 모두 사용 가능\n",
    "# - map / replace보다 훨씬 유연함\n",
    "# - 복잡한 조건문 (if-elif-else), 수학적 계산식을 자유롭게 작성 가능\n",
    "# - (일회성 로직 처리를 위해) lambda 함수와 결합하여 많이 사용됨\n",
    "\n",
    "# map / replace로 처리하기 어려운 경우:\n",
    "# - 예1: 키 열과 몸무게 열을 동시에 조합하여 BMI 지수 계산하기\n",
    "# - 예2: age < 18 -> 'Child', 18~59 -> 'Adult', 60 이상 -> 'Senior'\n",
    "#      -> 다단계 조건 필요\n",
    "# - 예3: 문자열 데이터에 정밀한 파이썬 내장 함수나 외부 가공 로직 적용 시\n",
    "\n",
    "# Note) apply 함수는 자유도가 높은 대신, 내부적으로 파이썬 루프를 돌기 때문에 \n",
    "# 판다스의 내장 최적화 함수 (replace, fillna 등)나 벡터화 연산보다 속도가 느림"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "f166b969-3393-40de-87fe-eef5198046db",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 참고) lambda 함수\n",
    "# - 람다 함수는 이름 없이 한 줄로 정의하여 바로 사용할 수 있는 일회성 함수\n",
    "\n",
    "# 언제 사용하나?\n",
    "# - 짧은 계산식 또는 조건식을 간결하게 한 줄로 표현할 때\n",
    "# - apply(), map(), sort_values(key=), groupby 등과 함께 사용할 때\n",
    "# - 함수 정의가 필요하지만 이름을 붙일 필요가 없는 상황\n",
    "# - 즉, '작고 단순한 함수를 잠깐 사용하고 싶을 때' 사용\n",
    "\n",
    "# 기본 문법\n",
    "# lambda 매개변수: 표현식\n",
    "# - 익명성: def와 달리 이름이 없어 한 번 쓰고 버리는 용도에 최적화\n",
    "# - 단일 표현식: 오직 1개의 표현식만 작성 가능\n",
    "# - 자동 반환: return 키워드를 명시하지 않아도, 표현식의 계산 결과가 자동 반환"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 187,
   "id": "dd65d0e6-aa73-4d10-87ff-4f546b1ca237",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "8\n",
      "8\n",
      "16\n"
     ]
    }
   ],
   "source": [
    "# 참고) lambda 함수\n",
    "\n",
    "# 예제1: 두 수의 합\n",
    "add = lambda x, y: x + y\n",
    "print(add(3, 5))   # 8\n",
    "\n",
    "# 동일한 def 함수:\n",
    "def add(x, y):\n",
    "    return x + y\n",
    "print(add(3, 5))\n",
    "\n",
    "# 예제2: 제곱 함수\n",
    "square = lambda x: x * x\n",
    "print(square(4))   # 16"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "f58db09b-8bda-44ef-9e84-0487bcbbda6e",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "    name   gender\n",
      "0    Liz        F\n",
      "1    Jin        M\n",
      "2    Ian        F\n",
      "3  Alien  Unknown\n",
      "========================================\n",
      "    name   gender  gender_num\n",
      "0    Liz        F           1\n",
      "1    Jin        M           0\n",
      "2    Ian        F           1\n",
      "3  Alien  Unknown          -1\n",
      "========================================\n",
      "    name   gender  gender_num  gender_num2\n",
      "0    Liz        F           1            1\n",
      "1    Jin        M           0            0\n",
      "2    Ian        F           1            1\n",
      "3  Alien  Unknown          -1           -1\n",
      "========================================\n",
      "    name   gender  gender_num  gender_num2  gender_num3\n",
      "0    Liz        F           1            1            1\n",
      "1    Jin        M           0            0            0\n",
      "2    Ian        F           1            1            1\n",
      "3  Alien  Unknown          -1           -1           -1\n",
      "========================================\n",
      "    name   gender  gender_num  gender_num2  gender_num3  name_len  name_len2\n",
      "0    Liz        F           1            1            1         3          3\n",
      "1    Jin        M           0            0            0         3          3\n",
      "2    Ian        F           1            1            1         3          3\n",
      "3  Alien  Unknown          -1           -1           -1         5          5\n"
     ]
    }
   ],
   "source": [
    "# apply(): 논리 기반 변환\n",
    "\n",
    "# 기본 사용법1: Series.apply + lambda\n",
    "df = pd.DataFrame({'name': ['Liz', 'Jin', 'Ian', 'Alien'],\n",
    "                   'gender': ['F', 'M', 'F', 'Unknown']})\n",
    "print(df), print('='*40)\n",
    "\n",
    "# 'F' -> 1, 'M' -> 0, 나머지 모든 값은 -1\n",
    "# lambda는 단일표현식만 허용해서 if-elif-else 형태로 넣을 수 없음\n",
    "# -> else 뒤에 다시 if-else를 중첩하는 문법을 사용\n",
    "df['gender_num'] = df['gender'].apply(\n",
    "    lambda x: 1 if x == 'F' else (0 if x == 'M' else -1))\n",
    "print(df), print('='*40)\n",
    "\n",
    "# 가독성을 위해 명시적인 함수 정의 (if-elif-else 사용 가능)\n",
    "def gender_to_num(x):\n",
    "    if x == 'F': return 1\n",
    "    elif x == 'M': return 0\n",
    "    else: return -1\n",
    "\n",
    "# 함수 이름 자체를 인자로 전달 (괄호 ()는 붙이지 않음!)\n",
    "df['gender_num2'] = df['gender'].apply(gender_to_num)\n",
    "print(df), print('='*40)\n",
    "\n",
    "df['gender_num3'] = df['gender'].map(gender_to_num)\n",
    "print(df), print('='*40)\n",
    "\n",
    "# df['gender_num3'] = df['gender'].replace(gender_to_num) # 에러\n",
    "\n",
    "df['name_len'] = df['name'].apply(lambda x: len(x))\n",
    "df['name_len2'] = df['name'].map(lambda x: len(x))\n",
    "print(df)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "id": "661c394d-ba7d-4c2c-b77f-25d56ca40f92",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name  math  eng  sci\n",
      "0   Liz    80   85   90\n",
      "1   Ian    90   70   88\n",
      "2  Yuna    75   95   82\n",
      "========================================\n",
      "math    81.666667\n",
      "eng     83.333333\n",
      "sci     86.666667\n",
      "dtype: float64\n",
      "========================================\n",
      "   name  math  eng  sci  total\n",
      "0   Liz    80   85   90    255\n",
      "1   Ian    90   70   88    248\n",
      "2  Yuna    75   95   82    252\n"
     ]
    }
   ],
   "source": [
    "# apply(): 논리 기반 변환\n",
    "\n",
    "# 기본 사용법2: DataFrame.apply() – 행/열 단위 연산\n",
    "df = pd.DataFrame({'name': ['Liz', 'Ian', 'Yuna'],\n",
    "                   'math': [80, 90, 75],\n",
    "                   'eng':  [85, 70, 95],\n",
    "                   'sci':  [90, 88, 82]})\n",
    "print(df), print('='*40)\n",
    "\n",
    "# 1. 열 단위 apply – axis=0 (기본값)\n",
    "# - 수치형 열만 따로 선택한 뒤,위에서 아래로(세로 방향) 함수를 적용\n",
    "# - 람다 함수의 인자 'col'에는 각 과목별 '열(Series)'이 하나씩 통째로 전달됨\n",
    "col_mean = df[['math', 'eng', 'sci']].apply(lambda col: col.mean(), axis=0)\n",
    "print(col_mean), print('='*40)\n",
    "\n",
    "# 2. 행 단위 apply – axis=1\n",
    "# - 왼쪽에서 오른쪽으로(가로 방향) 한 사람의 성적을 훑으며 함수를 적용\n",
    "# - 람다 함수의 인자 'row'는 한 사람(행)의 전체 정보가 담긴 Series 객체임\n",
    "# - 각 행에 대해 math + eng + sci 합계를 구해서 'total' 열로 추가\n",
    "df['total'] = df.apply(lambda row: row['math'] + row['eng'] + row['sci'], axis=1)\n",
    "print(df)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 9,
   "id": "b598ec41-bcb3-43de-bd51-9d695cc89a4c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name  height  weight\n",
      "0   Kim     175      65\n",
      "1   Lee     160      70\n",
      "2  Park     180      55\n",
      "========================================\n",
      "   name  height  weight       status\n",
      "0   Kim     175      65       Normal\n",
      "1   Lee     160      70   Overweight\n",
      "2  Park     180      55  Underweight\n"
     ]
    }
   ],
   "source": [
    "# apply(): 논리 기반 변환\n",
    "\n",
    "# 기본 사용법2: DataFrame.apply() – 행/열 단위 연산\n",
    "df_health = pd.DataFrame({\n",
    "    'name': ['Kim', 'Lee', 'Park'],\n",
    "    'height': [175, 160, 180],\n",
    "    'weight': [65, 70, 55]\n",
    "})\n",
    "print(df_health), print('='*40)\n",
    "\n",
    "# 여러 열을 조합하여 계산하는 함수 정의\n",
    "# 여기서 인자로 들어오는 'row'는 데이터프레임의 '한 행(Row)'을 의미\n",
    "def calculate_bmi_status(row):\n",
    "    # cm 단위를 m 단위로 변환하여 BMI 계산\n",
    "    height_m = row['height'] / 100\n",
    "    bmi = row['weight'] / (height_m ** 2)\n",
    "    \n",
    "    if bmi >= 25:\n",
    "        return 'Overweight'\n",
    "    elif bmi >= 18.5:\n",
    "        return 'Normal'\n",
    "    else:\n",
    "        return 'Underweight'\n",
    "\n",
    "# DataFrame에 apply 적용 (가로 방향으로 한 행씩 함수에 투입)\n",
    "df_health['status'] = df_health.apply(calculate_bmi_status, axis=1)\n",
    "print(df_health)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "032c1378-be29-45c7-8968-41f8d7a611e0",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "25ef1321-eca5-4443-a630-60cd0e9ac69f",
   "metadata": {},
   "outputs": [],
   "source": [
    "# applymap() 함수\n",
    "# - 데이터프레임의 모든 단일 요소 (element-wise)를 하나씩 순회하며 지정된 함수를 적용함\n",
    "# - 참고) Pandas 2.1.0 버전부터 deprecated (향후 삭제 예정) 상태임\n",
    "# - 공식적으로는 applymap() 대신 df.map()을 사용해야 함\n",
    "# - map() 함수를 데이터프레임 전체에 적용할 때는 주로 함수 (lambda 등)를 사용함"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "f3119d6f-2008-443c-bed9-25d4fc37e77f",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  9\n",
      "1  5  3\n",
      "==========\n",
      "   A  B\n",
      "0  1  9\n",
      "1  5  3\n"
     ]
    },
    {
     "name": "stderr",
     "output_type": "stream",
     "text": [
      "C:\\Users\\User\\AppData\\Local\\Temp\\ipykernel_50364\\2385396648.py:9: FutureWarning: DataFrame.applymap has been deprecated. Use DataFrame.map instead.\n",
      "  df_old = df.applymap(lambda x: int(x))\n"
     ]
    }
   ],
   "source": [
    "# applymap() 함수\n",
    "\n",
    "df = pd.DataFrame({\n",
    "    'A': [1.234, 5.678],\n",
    "    'B': [9.012, 3.456]\n",
    "})\n",
    "\n",
    "# 실행 시 \"FutureWarning: DataFrame.applymap has been deprecated\" 경고가 뜸\n",
    "df_old = df.applymap(lambda x: int(x))\n",
    "print(df_old), print('='*10)\n",
    "\n",
    "# 추천 방식)\n",
    "# map 함수를 데이터프레임 전체에 적용할 때는 주로 함수 (lambda 등)를 사용함\n",
    "df_new = df.map(lambda x: int(x))\n",
    "print(df_new)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "6080eda7-9fd2-43ee-9913-2d6e670635cf",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "markdown",
   "id": "324e0df3-6b68-41f9-a4db-f5008e80e8ed",
   "metadata": {},
   "source": [
    "### 7. 데이터 정렬"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "bd816f93-1d5b-4892-a570-146f3aeff1b8",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 데이터 정렬\n",
    "\n",
    "# - 값 기준 정렬: df.sort_values()\n",
    "#   -- 컬럼에 들어있는 실제 데이터 (값)를 기준으로 행들의 순서를 바꿈\n",
    "#   -- 특정 기준 열을 지정해 주어야 함\n",
    "#   -- 예) 성적 높은 순, 나이 적은 순\n",
    "\n",
    "# - 인덱스 기준 정렬: df.sort_index()\n",
    "#   -- 행 번호 또는 행 이름을 기준으로 행들의 순서를 바꿈\n",
    "#   -- 데이터 자체를 정렬한다기보다는, 정렬로 인해 뒤죽박죽 섞여버린 행들의 순서 \n",
    "#  (인덱스)를 원상복구하거나, 시계열 데이터에서 날짜 인덱스를 순서대로 정렬할 때 주로 사용\n",
    "#   -- 예) 학번 순, 날짜 순\n",
    "\n",
    "# 주의) pd.sort_values(), pd.sort_index()는 존재하지 않음"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "b47c84eb-f1de-4b88-812d-bd931ecedc31",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 7.1 값 (value) 기준 정렬\n",
    "\n",
    "# 사용법:\n",
    "# df.sort_values(by, ascending=True, inplace=False, na_position='last')\n",
    "# - by (필수): 정렬의 기준이 될 컬럼명 \n",
    "#   -- 여러 열을 기준으로 삼고 싶다면 리스트 ['math', 'eng'] 형태로 전달\n",
    "# - ascending\n",
    "#   -- True (기본값)는 오름차순 (1➔9 / A➔Z), False는 내림차순 (9➔1 / Z➔A)\n",
    "# - na_position\n",
    "#   -- 결측치를 맨 뒤로 ('last', 기본값), 맨 앞으로 보낼지 ('first') 결정"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 109,
   "id": "761bb52c-a16d-4554-a3d7-eb07107fcc35",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "1   Ann   NaN   85.0\n",
      "2  None  25.0    NaN\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "3   Bob   NaN   75.0\n",
      "1   Ann   NaN   85.0\n",
      "2  None  25.0    NaN\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "3   Bob   NaN   75.0\n",
      "1   Ann   NaN   85.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n"
     ]
    }
   ],
   "source": [
    "# 7.1 값 (value) 기준 정렬\n",
    "\n",
    "data = {'name':  ['Tom', 'Ann', None, 'Bob'],\n",
    "        'age':   [20,     None, 25,    None],\n",
    "        'score': [90,      85,  None,  75]}\n",
    "df = pd.DataFrame(data)\n",
    "print(df), print(\"=\"*20)\n",
    "\n",
    "# 7.1.1 오름차순 정렬 (기본값)\n",
    "print(df.sort_values(by='age')), print(\"=\"*20)\n",
    "\n",
    "# 7.1.2 내림차순 정렬\n",
    "print(df.sort_values(by='name', ascending=False)), print(\"=\"*20)\n",
    "\n",
    "# 7.1.3 여러 열 기준으로 정렬\n",
    "print(df.sort_values(by=['age', 'score'])), print(\"=\"*20)\n",
    "\n",
    "# 7.1.4 여러 열 각각 정렬 방향 다르게\n",
    "print(df.sort_values(by=['age', 'score'], ascending=[True, False]))\n",
    "print(\"=\"*20)\n",
    "\n",
    "# 7.1.5 결측치 (NaN) 위치 조절 (na_position='last' 기본값)\n",
    "print(df.sort_values(by='age', na_position='last')), print(\"=\"*20)\n",
    "print(df.sort_values(by='age', na_position='first'))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "3874d55a-79de-4408-9cc4-7856cb9a2e4f",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 7.2 인덱스 (index) 기준 정렬\n",
    "\n",
    "# 사용법:\n",
    "# df.sort_index(axis=0, ascending=True, inplace=False)\n",
    "# - axis: 기본값은 0 (행 인덱스 정렬)\n",
    "#   -- 만약 axis=1을 주면 컬럼명 (열 이름)을 알파벳 순으로 정렬"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 21,
   "id": "6715e5ee-3dcc-40e2-a839-55a31a88120c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name   age  score\n",
      "2   Tom  20.0   90.0\n",
      "3   Ann   NaN   85.0\n",
      "1  None  25.0    NaN\n",
      "0   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Bob   NaN   75.0\n",
      "1  None  25.0    NaN\n",
      "2   Tom  20.0   90.0\n",
      "3   Ann   NaN   85.0\n",
      "====================\n",
      "   name   age  score\n",
      "3   Ann   NaN   85.0\n",
      "2   Tom  20.0   90.0\n",
      "1  None  25.0    NaN\n",
      "0   Bob   NaN   75.0\n",
      "====================\n",
      "    age  name  score\n",
      "2  20.0   Tom   90.0\n",
      "3   NaN   Ann   85.0\n",
      "1  25.0  None    NaN\n",
      "0   NaN   Bob   75.0\n"
     ]
    }
   ],
   "source": [
    "# 7.2 인덱스 (index) 기준 정렬\n",
    "\n",
    "data = {'name':  ['Tom', 'Ann', None, 'Bob'],\n",
    "        'age':   [20,     None, 25,    None],\n",
    "        'score': [90,      85,  None,  75]}\n",
    "index = [2, 3, 1, 0]\n",
    "\n",
    "df = pd.DataFrame(data, index = index)\n",
    "print(df), print(\"=\"*20)\n",
    "\n",
    "# 7.2.1 행 인덱스 오름차순 (기본값)\n",
    "print(df.sort_index()), print(\"=\"*20)\n",
    "\n",
    "# 7.2.2 행 인덱스 내림차순\n",
    "print(df.sort_index(ascending=False)), print(\"=\"*20)\n",
    "\n",
    "# 7.2.3 열(column) 인덱스 정렬 \n",
    "# name - age - score ==> age - name - score 순으로 정렬\n",
    "print(df.sort_index(axis=1))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "id": "9cb69196-d90f-42c8-aaa4-9b53401bd40a",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name   age  score\n",
      "2   Tom  20.0   90.0\n",
      "3   Ann   NaN   85.0\n",
      "1  None  25.0    NaN\n",
      "0   Bob   NaN   75.0\n",
      "====================\n",
      "  name   age  score\n",
      "2  Tom  20.0   90.0\n",
      "3  Ann   NaN   85.0\n",
      "====================\n",
      "   name   age  score\n",
      "2   Tom  20.0   90.0\n",
      "1  None  25.0    NaN\n",
      "3   Ann   NaN   85.0\n",
      "0   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Bob   NaN   75.0\n",
      "1  None  25.0    NaN\n",
      "2   Tom  20.0   90.0\n",
      "3   Ann   NaN   85.0\n"
     ]
    }
   ],
   "source": [
    "# 7.3 정렬 예제1)\n",
    "\n",
    "data = {'name':  ['Tom', 'Ann', None, 'Bob'],\n",
    "        'age':   [20,     None, 25,    None],\n",
    "        'score': [90,      85,  None,  75]}\n",
    "index = [2, 3, 1, 0]\n",
    "\n",
    "df = pd.DataFrame(data, index = index)\n",
    "print(df), print(\"=\"*20)\n",
    "\n",
    "# - 가장 높은 점수 TOP 2\n",
    "df1 = df.sort_values(by='score', ascending=False).head(2)\n",
    "print(df1), print(\"=\"*20)\n",
    "\n",
    "# - 나이 적은 순 + 점수 높은 순 정렬\n",
    "df2 = df.sort_values(by=['age','score'], ascending=[True, False])\n",
    "print(df2), print(\"=\"*20)\n",
    "\n",
    "# - 시간순 정렬 (시계열)\n",
    "df3 = df.sort_index()   \n",
    "print(df3)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 19,
   "id": "414ee60e-a035-4821-a01e-cb5f334805d6",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "1   Ann   NaN   85.0\n",
      "2  None  25.0    NaN\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "1   Ann   NaN   85.0\n",
      "2  None  25.0    NaN\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "1   Ann   NaN   85.0\n",
      "2  None  25.0    NaN\n",
      "3   Bob   NaN   75.0\n",
      "====================\n",
      "None\n",
      "====================\n",
      "   name   age  score\n",
      "0   Tom  20.0   90.0\n",
      "2  None  25.0    NaN\n",
      "1   Ann   NaN   85.0\n",
      "3   Bob   NaN   75.0\n"
     ]
    }
   ],
   "source": [
    "# 7.4 sort_values, sort_index()는 기본적으로 원본을 변경하지 않음\n",
    "\n",
    "data = {'name':  ['Tom', 'Ann', None, 'Bob'],\n",
    "        'age':   [20,     None, 25,    None],\n",
    "        'score': [90,      85,  None,  75]}\n",
    "df = pd.DataFrame(data)\n",
    "print(df), print(\"=\"*20)\n",
    "\n",
    "# 원본 유지\n",
    "print(df.sort_values(by='age')), print('='*20)       \n",
    "print(df), print('='*20)\n",
    "\n",
    "# 원본 변경 (inplace=True)\n",
    "df2 = df.copy()\n",
    "print(df2), print('='*20)\n",
    "# inplace=True는 \"원본만 수정하고 반환값은 None\"\n",
    "print(df2.sort_values(by='age', inplace=True)), print('='*20)\n",
    "print(df2)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "3041b5e6-34a6-4192-82fc-c3692d3c9012",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "markdown",
   "id": "dfe5c1b5-9c1e-4912-96a5-d7cca3140bb3",
   "metadata": {},
   "source": [
    "### 8. 데이터 병합"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "7dd132aa-07be-497e-afe7-135b803bbbd9",
   "metadata": {},
   "outputs": [],
   "source": [
    "# pd.concat([df1, df2]): 물리적인 '이어 붙이기'\n",
    "# - 단순히 위아래로 쌓거나 좌우로 붙임\n",
    "# - df1.concat(df2) 형태로는 사용하지 못함\n",
    "\n",
    "# pd.merge(df1, df2): SQL 스타일의 '논리적 병합' \n",
    "# - 특정 공통 컬럼 (Key)을 기준으로 결합\n",
    "# - df1.merge(df2) 형태로도 사용가능\n",
    "\n",
    "# df1.join(df2): 인덱스 (index) 기준의 '간편 merge' \n",
    "# - 행 인덱스를 기준으로 좌우 결합\n",
    "# - pd.join(df1, df2) 형태로는 사용하지 못함"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 23,
   "id": "3c663940-75ad-461f-acdc-9a70112c79c5",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 8.1 pd.concat()\n",
    "# - 여러 DataFrame / Series를 하나로 이어 붙이는 함수\n",
    "# - 특정 키를 기준으로 값을 매칭하는 merge와 달리, \n",
    "#   오직 행/열의 위치와 이름 (인덱스)만을 기준으로 이어 붙임\n",
    "\n",
    "# 기본 구조\n",
    "# pd.concat(objs, axis=0, join='outer', ignore_index=False)\n",
    "# - objs : 리스트 또는 딕셔너리 형태\n",
    "#   -- 결합할 판다스 객체들을 대괄호로 묶어서 전달 -> 예) [df1, df2, df3]\n",
    "# - axis=0 (기본값): 위 + 아래 (세로 방향)로 쌓아서 행을 늘림\n",
    "# - axis=1 : 왼쪽 + 오른쪽 (가로 방향)으로 붙여서 열을 늘림\n",
    "# - join='outer' (기본값): 결합되는 객체들의 합집합\n",
    "#   -- 서로 축의 이름이 맞지 않아도 모두 살리고, 비는 곳은 NaN으로 채움\n",
    "# - join='inner' : 결합되는 객체들의 교집합\n",
    "#   -- 서로 공통으로 존재하는 일치하는 이름의 축만 남기고 나머지는 버림\n",
    "# - ignore_index = False (기본값)\n",
    "#   -- True로 설정하면 기존 데이터프레임들이 가지고 있던 인덱스를 무시하고, \n",
    "#      합쳐진 최종 결과물에 0부터 새로 시작하는 깔끔한 인덱스를 부여함"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "id": "533f7a43-d058-4f4e-87df-3fa0f40a165d",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  3\n",
      "1  2  4\n",
      "====================\n",
      "   A  B\n",
      "0  5  7\n",
      "1  6  8\n",
      "====================\n",
      "   A  B\n",
      "0  1  3\n",
      "1  2  4\n",
      "0  5  7\n",
      "1  6  8\n",
      "====================\n",
      "   C  D\n",
      "0  5  7\n",
      "1  6  8\n",
      "====================\n",
      "     A    B    C    D\n",
      "0  1.0  3.0  NaN  NaN\n",
      "1  2.0  4.0  NaN  NaN\n",
      "0  NaN  NaN  5.0  7.0\n",
      "1  NaN  NaN  6.0  8.0\n",
      "====================\n",
      "     A    B    C    D\n",
      "0  1.0  3.0  NaN  NaN\n",
      "1  2.0  4.0  NaN  NaN\n",
      "2  NaN  NaN  5.0  7.0\n",
      "3  NaN  NaN  6.0  8.0\n"
     ]
    }
   ],
   "source": [
    "# 8.1 pd.concat()\n",
    "\n",
    "# 행 방향 연결 (axis=0): 아래로 붙이기\n",
    "# - index가 지정되어 있지 않을 때\n",
    "dic1 = {'A': [1, 2],\n",
    "        'B': [3, 4]}\n",
    "dic2 = {'A': [5, 6],\n",
    "        'B': [7, 8]}\n",
    "df1 = pd.DataFrame(dic1)\n",
    "df2 = pd.DataFrame(dic2)\n",
    "print(df1), print('='*20), print(df2), print('='*20) \n",
    "\n",
    "# df1, df2의 컬럼 이름이 'A', 'B' 임\n",
    "df_12 = pd.concat([df1, df2], axis=0)\n",
    "print(df_12), print('='*20)\n",
    "\n",
    "# df3의 컬럼 이름이 'C', 'D' 임\n",
    "dic3 = {'C': [5, 6],\n",
    "        'D': [7, 8]}\n",
    "df3 = pd.DataFrame(dic3)\n",
    "print(df3), print('='*20)\n",
    "\n",
    "df_13 = pd.concat([df1, df3], axis=0)\n",
    "print(df_13), print('='*20)\n",
    "\n",
    "# concat의 옵션으로 ignore_index=True\n",
    "df_13_idx = pd.concat([df1, df3], axis=0, ignore_index=True)\n",
    "print(df_13_idx)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "id": "b2fb506f-30ea-4247-82a4-6e92bcb3b4a3",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  3\n",
      "3  2  4\n",
      "====================\n",
      "   A  B\n",
      "1  5  7\n",
      "2  6  8\n",
      "====================\n",
      "   A  B\n",
      "0  1  3\n",
      "3  2  4\n",
      "1  5  7\n",
      "2  6  8\n",
      "====================\n",
      "   A  B\n",
      "0  1  3\n",
      "1  5  7\n",
      "2  6  8\n",
      "3  2  4\n"
     ]
    }
   ],
   "source": [
    "# 8.1 pd.concat()\n",
    "\n",
    "# 행 방향 연결 (axis=0): 아래로 붙이기\n",
    "# - index가 지정되어 있을 때\n",
    "dic1 = {'A': [1, 2],\n",
    "        'B': [3, 4]}\n",
    "index1 = [0, 3]\n",
    "\n",
    "dic2 = {'A': [5, 6],\n",
    "        'B': [7, 8]}\n",
    "index2 = [1, 2]\n",
    "\n",
    "df1 = pd.DataFrame(dic1, index = index1)\n",
    "df2 = pd.DataFrame(dic2, index = index2)\n",
    "print(df1), print('='*20), print(df2), print('='*20) \n",
    "\n",
    "df_12 = pd.concat([df1, df2], axis=0)\n",
    "print(df_12), print('='*20)\n",
    "\n",
    "# index 정렬\n",
    "df_12_sorted = pd.concat([df1, df2], axis=0).sort_index()\n",
    "print(df_12_sorted)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "cb54e6db-3f10-472c-af22-04a0f98d87fb",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  3\n",
      "1  2  4\n",
      "====================\n",
      "   A  B\n",
      "0  5  7\n",
      "1  6  8\n",
      "====================\n",
      "   A  B  A  B\n",
      "0  1  3  5  7\n",
      "1  2  4  6  8\n",
      "====================\n",
      "   C  D\n",
      "0  5  7\n",
      "1  6  8\n",
      "====================\n",
      "   A  B  C  D\n",
      "0  1  3  5  7\n",
      "1  2  4  6  8\n"
     ]
    }
   ],
   "source": [
    "# 8.1 pd.concat()\n",
    "\n",
    "# 열 방향 연결 (axis=1): 옆으로 붙이기\n",
    "# - index가 지정되어 있지 않을 때\n",
    "dic1 = {'A': [1, 2],\n",
    "        'B': [3, 4]}\n",
    "dic2 = {'A': [5, 6],\n",
    "        'B': [7, 8]}\n",
    "\n",
    "df1 = pd.DataFrame(dic1)\n",
    "df2 = pd.DataFrame(dic2)\n",
    "print(df1), print('='*20), print(df2), print('='*20) \n",
    "\n",
    "# df1, df2의 컬럼 이름이 'A', 'B' 임\n",
    "df_12 = pd.concat([df1, df2], axis=1)\n",
    "print(df_12), print('='*20)\n",
    "\n",
    "dic3 = {'C': [5, 6],\n",
    "        'D': [7, 8]}\n",
    "df3 = pd.DataFrame(dic3)\n",
    "print(df3), print('='*20)\n",
    "\n",
    "# df3의 컬럼 이름이 'C', 'D' 임\n",
    "df_13 = pd.concat([df1, df3], axis=1)\n",
    "print(df_13)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 17,
   "id": "bc260234-e0ae-4a6a-887d-9a4416fa95ad",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  3\n",
      "3  2  4\n",
      "====================\n",
      "   A  B\n",
      "1  5  7\n",
      "2  6  8\n",
      "====================\n",
      "     A    B    A    B\n",
      "0  1.0  3.0  NaN  NaN\n",
      "3  2.0  4.0  NaN  NaN\n",
      "1  NaN  NaN  5.0  7.0\n",
      "2  NaN  NaN  6.0  8.0\n",
      "====================\n",
      "   C  D\n",
      "3  5  7\n",
      "4  6  8\n",
      "====================\n",
      "     A    B    C    D\n",
      "0  1.0  3.0  NaN  NaN\n",
      "3  2.0  4.0  5.0  7.0\n",
      "4  NaN  NaN  6.0  8.0\n"
     ]
    }
   ],
   "source": [
    "# 8.1 pd.concat()\n",
    "\n",
    "# 열 방향 연결 (axis=1): 옆으로 붙이기\n",
    "# - index가 지정되어 있을 때\n",
    "dic1 = {'A': [1, 2],\n",
    "        'B': [3, 4]}\n",
    "index1 = [0, 3]\n",
    "\n",
    "dic2 = {'A': [5, 6],\n",
    "        'B': [7, 8]}\n",
    "index2 = [1, 2]\n",
    "\n",
    "df1 = pd.DataFrame(dic1, index = index1)\n",
    "df2 = pd.DataFrame(dic2, index = index2)\n",
    "print(df1), print('='*20), print(df2), print('='*20) \n",
    "\n",
    "df_12 = pd.concat([df1, df2], axis=1)\n",
    "print(df_12), print('='*20)\n",
    "\n",
    "dic3 = {'C': [5, 6],\n",
    "        'D': [7, 8]}\n",
    "index3 = [3, 4]\n",
    "\n",
    "df3 = pd.DataFrame(dic3, index = index3)\n",
    "print(df3), print('='*20)\n",
    "\n",
    "df_13 = pd.concat([df1, df3], axis=1)\n",
    "print(df_13)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 19,
   "id": "9ec22d30-a5fc-447f-8587-6a64404d216c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   A  B\n",
      "0  1  3\n",
      "1  2  4\n",
      "====================\n",
      "   A  C\n",
      "1  5  7\n",
      "2  6  8\n",
      "====================\n",
      "   A\n",
      "0  1\n",
      "1  2\n",
      "1  5\n",
      "2  6\n",
      "====================\n",
      "   A  B  A  C\n",
      "1  2  4  5  7\n"
     ]
    }
   ],
   "source": [
    "# 8.1 pd.concat()\n",
    "\n",
    "# join = 'inner': 결합되는 객체들의 교집합\n",
    "dic1 = {'A': [1, 2],\n",
    "        'B': [3, 4]}\n",
    "index1 = [0, 1]\n",
    "\n",
    "dic2 = {'A': [5, 6],\n",
    "        'C': [7, 8]}\n",
    "index2 = [1, 2]\n",
    "\n",
    "df1 = pd.DataFrame(dic1, index = index1)\n",
    "df2 = pd.DataFrame(dic2, index = index2)\n",
    "print(df1), print('='*20), print(df2), print('='*20)\n",
    "\n",
    "# pd.concat(..., axis=0, join='inner')에서 axis=0 -> 컬럼 기준 교집합\n",
    "df_12_axis0 = pd.concat([df1, df2], join = 'inner')\n",
    "\n",
    "# pd.concat(..., axis=1, join='inner')에서 axis=1 -> 인덱스 기준 교집합\n",
    "df_12_axis1 = pd.concat([df1, df2], axis=1, join = 'inner')\n",
    "print(df_12_axis0), print('='*20)\n",
    "print(df_12_axis1)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "082a117d-9877-43fb-90cf-eaa014e85a19",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "83d68381-6e7f-4c02-8a03-48507e131932",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - 두 데이터프레임을 사용자가 지정한 공통 컬럼 (Key)의 '값'을 \n",
    "#   기준으로 가로 (열 방향)로 결합함\n",
    "# - 데이터의 순서나 행의 개수가 달라도 공통 Key 값만 일치하면, \n",
    "#   알아서 짝을 찾아 매칭함  -> SQL의 JOIN 연산과 완벽히 동일\n",
    "\n",
    "# 사용법\n",
    "# - 두 데이터프레임에 지정된 on (공통 열)을 기준으로 병합\n",
    "# - 매칭되지 않는 데이터는 how 매개변수의 설정에 따라 처리됨 \n",
    "#   -- 조건 기반 조인 (inner, left, right, outer)\n",
    "\n",
    "# 기본 구조\n",
    "# pd.merge(df1, df2, how='inner', on=None, left_on=None, right_on=None)\n",
    "# df1.merge(df2 , how='inner', on=None, left_on=None, right_on=None))\n",
    "\n",
    "# - df1, df2 (필수)\n",
    "#   -- 병합할 두 개의 데이터프레임\n",
    "#   -- 왼쪽에 둘 df (df1)과 오른쪽에 둘 df (df2)을 순서대로 지정\n",
    "\n",
    "# - on (기준 열의 이름이 같을 때 사용) \n",
    "#   -- 병합의 기준이 되는 공통 컬럼들의 이름을 지정\n",
    "#   -- df1, df2에 동일한 이름의 컬럼이 존재해야 함\n",
    "#   -- on=None일 때, 공통되는 컬럼을 자동 merge key로 사용\n",
    "#   -- 단일 컬럼: on = 'key_column'\n",
    "#   -- 복수 컬럼: on = ['key_column_1', 'key_column_2']\n",
    "\n",
    "# - left_on, right_on (기준 열의 이름이 다를 때 사용)\n",
    "#   -- 두 데이터프레임의 연결고리 데이터 내용은 같지만, \n",
    "#      컬럼명이 서로 다르게 저장되어 있을 때 사용\n",
    "#   -- 예) left_on='사원번호', right_on='사번'\n",
    "\n",
    "# - how (병합 방식을 결정)\n",
    "#   -- 매칭되지 않는 데이터를 어떻게 처리할지 결정\n",
    "#   -- how = 'inner' (기본값): 공통 키만 병합 (교집합)\n",
    "#   -- how = 'left' : df1 기준으로 병합 (df1 전체 + df2의 교집합)\n",
    "#   -- how = 'right': df2 기준으로 병합 (df2 전체 + df1의 교집합)\n",
    "#   - - how = 'outer': 전체 키 병합 (합집합)"
   ]
  },
  {
   "attachments": {
    "b9b56b54-6328-430c-9604-65cd530d97d5.png": {
     "image/png": "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"
    }
   },
   "cell_type": "markdown",
   "id": "ff209dc8-9613-4c9a-8b7c-8bc45e08ff93",
   "metadata": {},
   "source": [
    "![image.png](attachment:b9b56b54-6328-430c-9604-65cd530d97d5.png)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 32,
   "id": "c0fa116c-d89c-4052-82ef-d997ee0e4fe2",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "     name  age\n",
      "0     Liz   23\n",
      "1     Ian   18\n",
      "2  Wonhee   20\n",
      "====================\n",
      "   name  group\n",
      "0   Liz    IVE\n",
      "1  Moka  illit\n",
      "2   Ian    H2H\n",
      "====================\n",
      "  name  age group\n",
      "0  Liz   23   IVE\n",
      "1  Ian   18   H2H\n",
      "====================\n",
      "  name  age group\n",
      "0  Liz   23   IVE\n",
      "1  Ian   18   H2H\n",
      "====================\n",
      "     name  age group\n",
      "0     Liz   23   IVE\n",
      "1     Ian   18   H2H\n",
      "2  Wonhee   20   NaN\n",
      "====================\n",
      "   name   age  group\n",
      "0   Liz  23.0    IVE\n",
      "1  Moka   NaN  illit\n",
      "2   Ian  18.0    H2H\n",
      "====================\n",
      "     name   age  group\n",
      "0     Ian  18.0    H2H\n",
      "1     Liz  23.0    IVE\n",
      "2    Moka   NaN  illit\n",
      "3  Wonhee  20.0    NaN\n"
     ]
    }
   ],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - 기본 예제: 조인별 결과\n",
    "\n",
    "dic1 = {'name': ['Liz', 'Ian', 'Wonhee'],\n",
    "        'age': [23, 18, 20]}\n",
    "dic2 = {'name': ['Liz', 'Moka', 'Ian'],\n",
    "        'group': ['IVE', 'illit', 'H2H']}\n",
    "df1 = pd.DataFrame(dic1)\n",
    "df2 = pd.DataFrame(dic2)\n",
    "print(df1), print('='*20), print(df2), print('='*20)\n",
    "\n",
    "# inner join (기본값): 공통 컬럼 (name)의 '값'을 기준으로 교집합\n",
    "df_inner = pd.merge(df1, df2, on='name')\n",
    "print(df_inner), print('='*20)\n",
    "\n",
    "# on=None일 때, 공통되는 컬럼을 자동 merge key로 사용\n",
    "df_inner2 = pd.merge(df1, df2)\n",
    "print(df_inner2), print('='*20)\n",
    "\n",
    "# left join: df1 기준 전체 + df2 매칭되는 값 (df2에 없는 값은 NaN)\n",
    "df_left = pd.merge(df1, df2, on='name', how='left')\n",
    "print(df_left), print('='*20)\n",
    "\n",
    "# right join: df2 기준 전체 + df1 매칭되는 값 (df1에 없는 값은 NaN)\n",
    "df_right = pd.merge(df1, df2, on='name', how='right')\n",
    "print(df_right), print('='*20)\n",
    "\n",
    "# outer join: 합집합\n",
    "df_outer = pd.merge(df1, df2, on='name', how='outer')\n",
    "print(df_outer)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 19,
   "id": "447fce5d-418f-4304-b049-455c7179ce93",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   id name\n",
      "0   1  Tom\n",
      "1   2  Ann\n",
      "2   3  Bob\n",
      "========================================\n",
      "   user_id  age\n",
      "0        2   25\n",
      "1        3   30\n",
      "2        4   35\n",
      "========================================\n",
      "   id name  user_id  age\n",
      "0   2  Ann        2   25\n",
      "1   3  Bob        3   30\n",
      "========================================\n",
      "========================================\n",
      "   year  month  sales\n",
      "0  2023      1    100\n",
      "1  2023      2    150\n",
      "2  2024      1    120\n",
      "========================================\n",
      "   year  month  temperature\n",
      "0  2023      1            5\n",
      "1  2023      3           10\n",
      "2  2024      1            2\n",
      "========================================\n",
      "   year  month  sales  temperature\n",
      "0  2023      1    100            5\n",
      "1  2024      1    120            2\n",
      "========================================\n",
      "   year  month  sales  temperature\n",
      "0  2023      1    100            5\n",
      "1  2024      1    120            2\n"
     ]
    }
   ],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - 공통 컬럼 이름이 서로 다를 때\n",
    "\n",
    "df1 = pd.DataFrame({'id': [1, 2, 3], \n",
    "                    'name': ['Tom', 'Ann', 'Bob']})\n",
    "df2 = pd.DataFrame({'user_id': [2, 3, 4],\n",
    "                    'age': [25, 30, 35]})\n",
    "print(df1), print('='*40), print(df2), print('='*40)\n",
    "\n",
    "# 서로 다른 컬럼명을 기준으로 merge\n",
    "df_12 = pd.merge(df1, df2, left_on='id', right_on='user_id', how='inner')\n",
    "print(df_12), print('='*40), print('='*40)\n",
    "\n",
    "# - 여러 key(복합 키)로 병합 (on=['col1','col2'])\n",
    "df3 = pd.DataFrame({'year': [2023, 2023, 2024],\n",
    "                    'month': [1, 2, 1],\n",
    "                    'sales': [100, 150, 120]})\n",
    "df4 = pd.DataFrame({'year': [2023, 2023, 2024],\n",
    "                    'month': [1, 3, 1],\n",
    "                    'temperature': [5, 10, 2]})\n",
    "print(df3), print('='*40), print(df4), print('='*40)\n",
    "\n",
    "df_34 = pd.merge(df3, df4, on=['year', 'month'], how='inner')\n",
    "df_auto = pd.merge(df3, df4, how='inner') # 공통 컬럼이 2개임\n",
    "print(df_34), print('='*40)\n",
    "print(df_auto)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 38,
   "id": "187d0bee-ccc4-4e42-a5a3-87cd354d6481",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   id  score\n",
      "0   1     80\n",
      "1   2     90\n",
      "2   3     85\n",
      "========================================\n",
      "   id  score\n",
      "0   3     70\n",
      "1   2     95\n",
      "2   4     88\n",
      "========================================\n",
      "   id  score_x  score_y\n",
      "0   2       90       95\n",
      "1   3       85       70\n",
      "========================================\n",
      "   id  score_midterm  score_final\n",
      "0   2             90           95\n",
      "1   3             85           70\n"
     ]
    }
   ],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - Key로 지정하지 않은 다른 컬럼들의 이름이 서로 중복되는 경우, \n",
    "#   중복된 컬럼을 구분하기 위해서 접미사를 사용\n",
    "\n",
    "# 두 데이터프레임 모두 공통 키를 제외한, score라는 동일한 컬럼을 가짐 \n",
    "#  -> 기본값 (왼쪽 df에는 _x, 오른쪽 df에는 _y) \n",
    "#  -> 또는 suffixes=( , )로 접미사를 부여해 줌\n",
    "\n",
    "df1 = pd.DataFrame({'id': [1, 2, 3],\n",
    "                    'score': [80, 90, 85]})\n",
    "df2 = pd.DataFrame({'id': [3, 2, 4],\n",
    "                    'score': [70, 95, 88]})\n",
    "print(df1), print('='*40), print(df2), print('='*40)\n",
    "\n",
    "df_merge1 = pd.merge(df1, df2, on='id')\n",
    "print(df_merge1), print('='*40)\n",
    "\n",
    "df_merge2 = pd.merge(df1, df2, on='id', suffixes=('_midterm', '_final'))\n",
    "print(df_merge2)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 44,
   "id": "3533a178-831f-4353-b7e1-c34d4c6e4473",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   value1\n",
      "A      10\n",
      "B      20\n",
      "C      30\n",
      "========================================\n",
      "   value2\n",
      "A     100\n",
      "C     200\n",
      "D     300\n",
      "========================================\n",
      "   value1  value2\n",
      "A    10.0   100.0\n",
      "B    20.0     NaN\n",
      "C    30.0   200.0\n",
      "D     NaN   300.0\n"
     ]
    }
   ],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - 기본적으로 pd.merge( )는 컬럼을 기준으로 삼지만, \n",
    "#   한쪽 또는 양쪽 데이터프레임의 인덱스 (행 주소)를 \n",
    "#    Key로 삼아 병합해야 할 수도 있음\n",
    "\n",
    "# - 두 df 인덱스를 기준으로 병합할 때 -> left_index=True, right_index=True\n",
    "#   -- 뒤이어 배울 df.join( )과 완전히 동일하게 작동함\n",
    "\n",
    "# 각 데이터프레임의 index가 key 역할을 할 때\n",
    "df1 = pd.DataFrame({'value1': [10, 20, 30]}, index=['A', 'B', 'C'])\n",
    "df2 = pd.DataFrame({'value2': [100, 200, 300]}, index=['A', 'C', 'D'])\n",
    "print(df1), print('='*40), print(df2), print('='*40)\n",
    "\n",
    "df_merge = pd.merge(df1, \n",
    "                    df2,\n",
    "                    left_index=True,\n",
    "                    right_index=True,\n",
    "                    how='outer')\n",
    "print(df_merge)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 46,
   "id": "fec41546-644e-4d33-92a1-f7bc810232fd",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "   order_id item_id  quantity\n",
      "0       101     p01         2\n",
      "1       102     p03         1\n",
      "2       103     p01         1\n",
      "3       104     p02         3\n",
      "==================================================\n",
      "    item_name    price\n",
      "p01  Notebook  1200000\n",
      "p02     Mouse    30000\n",
      "p03  Keyboard    50000\n",
      "==================================================\n",
      "   order_id item_id  quantity item_name    price\n",
      "0       101     p01         2  Notebook  1200000\n",
      "1       102     p03         1  Keyboard    50000\n",
      "2       103     p01         1  Notebook  1200000\n",
      "3       104     p02         3     Mouse    30000\n"
     ]
    }
   ],
   "source": [
    "# 8.2 pd.merge()\n",
    "# - 기본적으로 pd.merge( )는 컬럼을 기준으로 삼지만, \n",
    "#   한쪽 또는 양쪽 데이터프레임의 인덱스 (행 주소)를 \n",
    "#    Key로 삼아 병합해야 할 수도 있음\n",
    "\n",
    "# - 왼쪽은 컬럼, 오른쪽은 인덱스를 기준으로 병합할 때 \n",
    "#   -> left_on='컬럼명', right_index=True\n",
    "\n",
    "df_orders = pd.DataFrame({\n",
    "    'order_id': [101, 102, 103, 104],\n",
    "    'item_id': ['p01', 'p03', 'p01', 'p02'],  # 일반 컬럼\n",
    "    'quantity': [2, 1, 1, 3]\n",
    "})\n",
    "\n",
    "df_items = pd.DataFrame({\n",
    "    'item_name': ['Notebook', 'Mouse', 'Keyboard'],\n",
    "    'price': [1200000, 30000, 50000]\n",
    "}, index=['p01', 'p02', 'p03']) # item_id를 인덱스로 지정\n",
    "print(df_orders), print('='*50), print(df_items), print('='*50)\n",
    "\n",
    "# 컬럼 (left)과 인덱스 (right)를 기준으로 병합 수행\n",
    "# 왼쪽은 'item_id' 컬럼을 보고, 오른쪽은 '인덱스 자체'를 매칭\n",
    "df_pr_merged = pd.merge(\n",
    "    df_orders, \n",
    "    df_items, \n",
    "    left_on='item_id', \n",
    "    right_index=True, \n",
    "    how='left'\n",
    ")\n",
    "print(df_pr_merged)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "4baeb247-7974-4fe9-bf6f-2723d16e4141",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": 60,
   "id": "33383bb3-1156-4df2-b349-34cb086c9342",
   "metadata": {},
   "outputs": [],
   "source": [
    "# 8.3 df1.join(df2) 함수\n",
    "# df1.join(df2)은 오직 인덱스 (index)를 기준으로 두 데이터프레임을 결합\n",
    "# pd.merge(..., left_index=True, right_index=True)의 간편 버전\n",
    "\n",
    "# 기본 구조 \n",
    "# df1.join(df2, on=None, how='left', lsuffix='', rsuffix='')\n",
    "# - df2 : df1 데이터프레임 뒤에 붙여 결합할 오른쪽 데이터프레임\n",
    "\n",
    "# - how : 조인 방식을 지정\n",
    "#   -- how = 'left' (기본값):\n",
    "#   왼쪽 조인으로 df1의 모든 인덱스를 유지하고, df2에서 매칭되는 행 추가\n",
    "#   -- how = 'right':\n",
    "#   오른쪽 조인으로 df2의 모든 인덱스를 유지하고, df1에서 매칭되는 행 추가\n",
    "#   -- how = 'outer':\n",
    "#   외부 조인으로 양쪽 DataFrame의 모든 인덱스의 합집합을 유지\n",
    "#   -- how = 'inner':\n",
    "#   내부 조인으로 양쪽 DataFrame에 공통으로 존재하는 인덱스만 유지\n",
    "\n",
    "# - on : df1의 '특정 컬럼'을 기준으로 df2를 결합할 때 사용\n",
    "#   -- None (기본값): df1의 인덱스를 기준으로 조인\n",
    "#   -- 문자열 or 문자열 리스트: 왼쪽 df1에서 인덱스 대신 사용할 컬럼을 지정하는 옵션\n",
    "#   -- df1.join(df2, on='컬럼명')은 \n",
    "#      pd.merge(df1, df2, left_on='컬럼명', right_index=True)와 동일함\n",
    "\n",
    "# - lsuffix, rsuffix\n",
    "#   -- 두 df에 인덱스 외에 이름이 겹치는 일반 컬럼이 존재할 때 붙여줄 접미사\n",
    "#   -- pd.merge와 달리, join은 이름이 겹치는 컬럼이 있을 때 이 옵션을 지정하지 않으면, \n",
    "#      자동 생성되지 않고 즉시 에러(ValueError)를 발생"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 48,
   "id": "86aff340-e272-4aa0-aafb-714a18bb64b9",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "    A\n",
      "1  10\n",
      "2  20\n",
      "3  30\n",
      "====================\n",
      "     B\n",
      "1  100\n",
      "3  300\n",
      "4  400\n",
      "====================\n",
      "    A      B\n",
      "1  10  100.0\n",
      "2  20    NaN\n",
      "3  30  300.0\n",
      "====================\n",
      "      A    B\n",
      "1  10.0  100\n",
      "3  30.0  300\n",
      "4   NaN  400\n",
      "====================\n",
      "    A    B\n",
      "1  10  100\n",
      "3  30  300\n",
      "====================\n",
      "      A      B\n",
      "1  10.0  100.0\n",
      "2  20.0    NaN\n",
      "3  30.0  300.0\n",
      "4   NaN  400.0\n"
     ]
    }
   ],
   "source": [
    "# 8.3 df.join()\n",
    "\n",
    "# how='left' (기본값): 왼쪽 df 전체 + 오른쪽 df 매칭\n",
    "df1 = pd.DataFrame({'A':[10,20,30]}, index = [1,2,3])\n",
    "df2 = pd.DataFrame({'B':[100,300,400]}, index = [1,3,4])\n",
    "print(df1), print('='*20), print(df2), print('='*20)\n",
    "\n",
    "print(df1.join(df2)), print('='*20)\n",
    "\n",
    "# how='right': 오른쪽 df 전체 + 왼쪽 df 매칭\n",
    "print(df1.join(df2, how='right')), print('='*20)\n",
    "\n",
    "# how='inner': df1과 df2의 교집합\n",
    "print(df1.join(df2, how='inner')), print('='*20)\n",
    "\n",
    "# how='outer': df1과 df2의 합집합(전체)\n",
    "print(df1.join(df2, how='outer'))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 50,
   "id": "26b86533-c35a-43f4-8927-fa8142723357",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "    A   B   Z\n",
      "0  A0  B0  Z0\n",
      "1  A1  B1  Z1\n",
      "2  A2  B2  Z2\n",
      "3  A3  B3  Z3\n",
      "==============================\n",
      "     C   D\n",
      "Z0  C0  D0\n",
      "Z1  C1  D1\n",
      "==============================\n",
      "    A   B   Z    C    D\n",
      "0  A0  B0  Z0   C0   D0\n",
      "1  A1  B1  Z1   C1   D1\n",
      "2  A2  B2  Z2  NaN  NaN\n",
      "3  A3  B3  Z3  NaN  NaN\n",
      "==============================\n",
      "   id1   A\n",
      "0    1  10\n",
      "1    2  20\n",
      "2    3  30\n",
      "==============================\n",
      "   id2    B\n",
      "0    1  100\n",
      "1    3  300\n",
      "2    4  400\n",
      "==============================\n",
      "   id1   A  id2      B\n",
      "0    1  10  3.0  300.0\n",
      "1    2  20  4.0  400.0\n",
      "2    3  30  NaN    NaN\n"
     ]
    }
   ],
   "source": [
    "# 8.3 df.join()\n",
    "\n",
    "# on : df1의 '특정 컬럼'을 기준으로 df2를 결합할 때 사용\n",
    "# - None (기본값): df1의 인덱스를 기준으로 조인\n",
    "# - 문자열 or 문자열 리스트: 왼쪽 df1에서 인덱스 대신 사용할 컬럼을 지정\n",
    "# - df1.join(df2, on='컬럼명')은 \n",
    "#   pd.merge(df1, df2, left_on='컬럼명', right_index=True)와 동일함\n",
    "\n",
    "df1 = pd.DataFrame({'A': ['A0', 'A1', 'A2', 'A3'],\n",
    "                    'B': ['B0', 'B1', 'B2', 'B3'],\n",
    "                    'Z': ['Z0', 'Z1', 'Z2', 'Z3']})\n",
    "df2 = pd.DataFrame({'C': ['C0', 'C1'],\n",
    "                    'D': ['D0', 'D1']}, index=['Z0', 'Z1'])\n",
    "\n",
    "print(df1), print('='*30), print(df2), print('='*30)\n",
    "\n",
    "df12 = df1.join(df2, on='Z')\n",
    "print(df12), print('='*30)\n",
    "\n",
    "\n",
    "df1 = pd.DataFrame({'id1':[1,2,3], 'A':[10,20,30]})\n",
    "df2 = pd.DataFrame({'id2':[1,3,4], 'B':[100,300,400]})\n",
    "print(df1), print('='*30), print(df2), print('='*30)\n",
    "\n",
    "# df1의 id1 컬럼을 인덱스처럼 사용하고, df2의 index를 기준으로 조인  \n",
    "df_join1 = df1.join(df2, on='id1')\n",
    "print(df_join1)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 58,
   "id": "353b5ba0-acdb-435f-8c2b-470a83c47f23",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "    name dept\n",
      "s01  Liz   CS\n",
      "s02  Ian   AI\n",
      "====================\n",
      "         name phone\n",
      "s01  Prof.Kim  1111\n",
      "s02  Prof.Lee  2222\n",
      "====================\n",
      "    name_student dept name_staff phone\n",
      "s01          Liz   CS   Prof.Kim  1111\n",
      "s02          Ian   AI   Prof.Lee  2222\n"
     ]
    }
   ],
   "source": [
    "# 8.3 df.join()\n",
    "\n",
    "df_student = pd.DataFrame({'name': ['Liz', 'Ian'], \n",
    "                           'dept': ['CS', 'AI']}, \n",
    "                          index=['s01', 's02'])\n",
    "df_contact = pd.DataFrame({'name': ['Prof.Kim', 'Prof.Lee'], \n",
    "                           'phone': ['1111', '2222']}, \n",
    "                          index=['s01', 's02'])\n",
    "\n",
    "print(df_student), print('='*20), print(df_contact), print('='*20)\n",
    "\n",
    "\n",
    "# 접미사 없이 그냥 join 시도 -> 에러가 발생\n",
    "#result_error = df_student.join(df_contact) \n",
    "\n",
    "# lsuffix와 rsuffix로 해결\n",
    "# lsuffix='_student': 왼쪽 테이블의 중복 컬럼 뒤에 붙임\n",
    "# rsuffix='_staff'  : 오른쪽 테이블의 중복 컬럼 뒤에 붙임\n",
    "result_fixed = df_student.join(df_contact, lsuffix='_student', rsuffix='_staff')\n",
    "print(result_fixed)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "5c6e39a8-37d9-4eaf-b2d8-42aaa86cc4b8",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "c1fdac46-d607-4c65-bab2-415710d28cb0",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python [conda env:base] *",
   "language": "python",
   "name": "conda-base-py"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.12.7"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}

pandas

import pandas as pd

series 

s1 = pd.Series(\[10, 20, 30], index=\['a', 'b', 'c'])



<# Series 객체를 생성하는 기본 방법>

import numpy as np

s3 = pd.Series(np.random.randn(3), index=\['a', 'b', 'c'])

print('values:', s3.values), print('='\*50) 

print('index:', s3.index), print('='\*50)



dict\_data ={'IVE': 6, 'H2H': 8, 'fromis\_9': 5}

s4 = pd.Series(dict\_data)



s = pd.Series(np.random.randn(4), index=\['a', 'b', 'c', 'd'])

print(s.values), print(s\['a']), print(s\[0]), print(s\[:2]), print(s + 10), print(s > 0), print(s.mean()), print(np.exp(s))



<# DataFrame>

data1 = {'name': \['Wonyoung', 'Hayoung', 'Ian'],

&#x20;        'age': \[22, 29, 17],

&#x20;        'group': \['IVE', 'fromis\_9', 'H2H']}



df1 = pd.DataFrame(data1,index = \['rank1', 'rank2', 'rank3'])

print(df1), print(df1.values), print(df1.columns), print(df1.index)



arr = np.array(\[\[1,2,3],\[4,5,6]])

df4 = pd.DataFrame(arr, columns=\['A','B','C'], index=\['row1','row2'])



data3 = {'one': pd.Series(\[1, 2, 3], index=\['a', 'b', 'c']),

&#x20;        'two': pd.Series(\[1, 2, 3], index=\['a', 'b', 'c'])}

df3 = pd.DataFrame(data3)



data\_columns = {('IVE', 'Liz'): \['Jeju', 22],       

&#x20;               ('IVE', 'Rei'): \['Nagoya', 23], 

&#x20;               ('AESPA', 'Winter'): \['Busan', 26]}

index = \['place', 'age']

df = pd.DataFrame(data\_columns, index = index)



======================================

<# 행과 열의 기본 처리>

data = {'one': \[1, 2, 3],

&#x20;       'two': \[2, 4, 6],

&#x20;       'thr': \[3, 6, 9]}

index = \['a', 'b', 'c']



df = pd.DataFrame(data, index = index)

\# .loc (label-based location) 속성 -> 라벨 기반 선택

\# 단일 열 선택 a = df\['one'], a = df.loc\[:, 'one']  

\# 여러 열 선택 b = df\[\['one', 'thr']], b = df.loc\[:, \['one','thr']]

\# - 라벨로 슬라이싱을 할 경우, 마지막 라벨 포함함



\# .iloc (integer-location) 속성 -> 위치 기반 선택 (정수 index)

c = df.iloc\[:, 0] 

d = df.iloc\[:, \[0, 2]] 



\# 2-1. .loc 속성을 이용한 행 선택 (라벨 기반)

\# 단일 행 선택 a = df.loc\['a'] 

\# (순서 바뀐) 여러 행 선택 b = df.loc\[\['a', 'c', 'b']] 

\# 슬라이싱 (라벨 범위) c = df.loc\['a':'b']

\# 특정 행 + 특정 열 선택 d = df.loc\['a', \['two', 'thr']]



data = {'name': \['Wonyoung', 'Hayoung', 'Ian'],

&#x20;       'age': \[22, 29, 17],

&#x20;       'group': \['IVE', 'fromis\_9', 'H2H']}

df = pd.DataFrame(data)

print(df\['age'] > 25), print(df\[df\['age'] > 25]  )

print(df\[(df\['age'] < 25) | (df\['group'] == 'fromis\_9')])



\# 3. 열 추가

data = {'one': \[1, 2, 3],

&#x20;       'two': \[2, 4, 6],

&#x20;       'thr': \[3, 6, 9]}

df = pd.DataFrame(data)



\# 3.1 리스트 또는 넘파이 배열을 추가

df\['four'] = \[4, 8, 12] 



\# 3.2 시리즈(Series)를 추가

df\['five'] = pd.Series(\[5, 10, 15], index=\[2, 0, 1])



\# 3.4 기존 열을 연산하여 (새로운 결과를) 추가

df\['sum'] = df\['one'] + df\['five']



\# 3.5 조건을 이용해 열 추가

df\['pass'] = df\['sum'] >= 7



\# 3.6 주의) 새로운 열 이름이 기존과 같으면 덮어쓰기(overwrite) 됨

df\['one'] = 1

print(df)



\# 3.7 df.insert() 메소드

df.insert(1, 'new\_col', \[0, 2, 4])

\# 같은 이름의 열이 있을 경우, 에러 발생

\#df.insert(0, 'two', \[0, 1, 2])

\# allow\_duplicates=True로 에러 해결

df.insert(0, 'two', \[0, 1, 2], allow\_duplicates=True)



\# 4. 행 추가

\# 단일 행 추가: df.loc\[new\_index] = values // pd.concat() 사용

\# 여러 행 추가: pd.concat() 사용



\# 4.1 .loc를 이용해 새로운 index로 추가

\# - 새 인덱스가 기존에 없으면 자동으로 새로운 행이 추가

\# - 새 인덱스가 이미 존재하는 인덱스라면 기존 데이터가 수정됨

df.loc\['new1'] = \[4, 8, 12] 

df.loc\[1] = 1

df.loc\['1'] = 1



\# 4.2 딕셔너리를 이용해 행 추가: 딕셔너리 키가 열 이름과 매칭

df.loc\['new2'] = {'one':5, 'thr':15, 'two':10}



\# 4.3 concat을 이용한 행 추가

\# - 단일 행을 DataFrame으로 만들어 추가

new3 = pd.DataFrame({'one':\[6], 'two':\[12], 'thr': \[18]})

df1 = pd.concat(\[df, new3])

df2 = pd.concat(\[df, new3], ignore\_index = True)



\# - 여러 행을 한 번에 추가

new4 = pd.DataFrame({'one': \[7, 8], 

&#x20;                    'two': \[14, 16], 

&#x20;                    'thr': \[21, 24]})

df = pd.concat(\[df, new4]) 



\# 5. 열 삭제

data = {'name': \['Wonyoung', 'Hayoung', 'Ian'],

&#x20;       'age': \[23, 30, 18],

&#x20;       'group': \['IVE', 'fromis\_9', 'H2H']}

df = pd.DataFrame(data)



\# 5.1 단일 열 삭제 (axis=0 기본 값을 '1'로 바꿔야 함)

df1 = df.drop('age', axis=1)



\# 5.2 여러 열 삭제

df = pd.DataFrame(data)

df.drop(\['age', 'group'], axis=1, inplace = True)



\# 5.3 columns 파라미터 사용

df.drop(columns='age', inplace = True)

df.drop(columns=\['age', 'group'], inplace = True)



\# 6. 행 삭제 (인덱스 지정시)

data = {'name': \['Wonyoung', 'Hayoung', 'Ian'],

&#x20;       'age': \[23, 30, 18],

&#x20;       'group': \['IVE', 'fromis\_9', 'H2H']}

index = \['rank1', 'rank2', 'rank3']

df = pd.DataFrame(data, index = index)



\# 6.1 단일 행 삭제 : axis=0 (기본 값) -> 행 삭제

df.drop('rank2', inplace = True)  



\# 6.2 여러 행 삭제

df.drop(\['rank2', 'rank3'], inplace = True)



\# 6.3 index 파라미터 사용

df.drop(index='rank2', inplace = True)

df.drop(index=\['rank2', 'rank3'], inplace = True)



\# 6.4 단일 행 삭제 : axis=0 (기본 값) -> 행 삭제

df.drop(0, inplace = True)  



\# 6.5 여러 행 삭제

df.drop(\[1, 2], inplace = True)



======================================

<# CSV 파일 불러오기>

만약 오류가 난다면...?

import os

print(os.getcwd())      # 현재 작업 폴더

print(os.listdir())     # 현재 폴더 안의 파일 목록

pip install pandas numpy



df = pd.read\_csv('sample.csv',, header=0)



\# 1. header 옵션으로 데이터프레임의 열 이름으로 사용할 행 지정

df = pd.read\_csv('sample.csv', header=0) # 기본값 header = 0

\# 헤더 이전 행은 데이터프레임에서 모두 제외됨

df = pd.read\_csv('sample.csv', header=1)

\# 파일에 header가 없을 경우

df = pd.read\_csv('sample.csv', header=None) 



\# 2. index\_col 옵션으로 데이터프레임의 행 인덱스가 되는 열 지정

\# 기본값 index\_col=None (인덱스 지정하지 않음)

df = pd.read\_csv('sample.csv', index\_col=None) 

df = pd.read\_csv('sample.csv', index\_col='c0') 



\# 3. 구분자 변경 

df = pd.read\_csv('sample\_tab.csv', sep='\\t')

df = pd.read\_csv('sample\_space.csv', sep=' ')



\# 4. 열 선택하여 불러오기

df = pd.read\_csv('sample.csv', usecols=\['c1','c2'])



\# 사용자가 직접 헤더 (열이름) 설정

\# 단, 파일의 첫 줄(c0, c1...)을 일반 데이터(첫 번째 행)로 취급

df = pd.read\_csv('sample.csv', names=\['A','B','C','D'])

df = pd.read\_csv('sample.csv', names=\['A','B','C','D','E'])



\# names가 실제 데이터 열보다 작을 경우, 오른쪽 열에 몰아주고,

\# 남는 왼쪽 열들은 인덱스로 밀어버림

df = pd.read\_csv('sample.csv', names=\['A','B','C'])



\# 인코딩 문제 해결 -> 한글 데이터는 아래 옵션을 자주 사용

df = pd.read\_csv('sample\_korean.csv', encoding='utf-8')

df = pd.read\_csv('sample\_korean.csv', encoding='cp949')



\# - usecols 옵션으로 특정 열은 선택 가능하지만, 

\# - 특정 행을 선택해서 읽는 옵션은 없음

\# 다만, 파일을 읽은 (read\_csv) 후, Pandas에서 행을 선택할 수 있음



\# 행 0\~1만 선택

df\_rows = df.iloc\[0:2]



\# 또는 조건으로 선택

df\_rows = df\[df\['c1'] > 2]



\# read\_csv에서 "행 관련 옵션"이 있긴 함

\# - nrows=  : 위에서부터 몇 행만 읽기

df = pd.read\_csv('sample.csv', nrows=2)



\# - skiprows= : 특정 행 건너뛰기 (헤더가 0번째 row로 간주됨)

df = pd.read\_csv('sample.csv', skiprows=\[0, 2], header=None)



======================================

<# Excel 파일 불러오기>

만약 오류가 난다면..?

import os

print(os.getcwd())      # 현재 작업 폴더

print(os.listdir())     # 현재 폴더 안의 파일 목록

pip install openpyxl



\# 1. sheet\_name 옵션: 어떤 시트를 읽을지 지정

\# 1.1 기본값: 첫 번째 시트 읽기 (sheet\_name=0 이 기본값)

df = pd.read\_excel('남북한발전전력량.xlsx')

\#df = pd.read\_excel('남북한발전전력량.xlsx', sheet\_name=0)



\# 1.2 시트 이름으로 읽기

df2 = pd.read\_excel('남북한발전전력량.xlsx', sheet\_name='data2')



\# 1.3 여러 시트 한 번에 읽기 (딕셔너리 형태로 한꺼번에 가져옴)

df3 = pd.read\_excel('남북한발전전력량.xlsx', sheet\_name=\['data1', 'data2'])



\# 1.4 모든 시트 읽기

df4 = pd.read\_excel('남북한발전전력량.xlsx', sheet\_name=None)



\# 2. header 옵션 : 열 이름 지정 (CSV와 동일하게 적용됨)

\# 2.1 기본

df = pd.read\_excel('남북한발전전력량.xlsx', header=0)  



\# 2.2 두 번째 행을 헤더로 사용

df2 = pd.read\_excel('남북한발전전력량.xlsx', header=1)



\# 2.3 헤더 없는 엑셀

df3 = pd.read\_excel('남북한발전전력량.xlsx', header=None) 



\# 3. index\_col 옵션 : 특정 열을 인덱스로 사용 (CSV와 동일하게 적용됨)

\# 3.1 기본

df = pd.read\_excel('남북한발전전력량.xlsx', index\_col=None)



\# 3.2 첫 번째 열을 인덱스로

df2 = pd.read\_excel('남북한발전전력량.xlsx', index\_col=0)  



\# 3.3 열 이름으로 지정

df3 = pd.read\_excel('남북한발전전력량.xlsx', index\_col='전력량 (억㎾h)') 



\# 4. usecols 옵션 : 특정 열만 선택해서 불러오기 (CSV와 동일하게 적용됨)

df = pd.read\_excel('남북한발전전력량.xlsx')  

\# 4.1 열 위치 기반 접근

df = pd.read\_excel('남북한발전전력량.xlsx', usecols=\['1991','1992'])  



\# 4.2 엑셀 열 범위를 슬라이싱으로 지정

\# - 엑셀의 열은 실제로 A, B, C 와 같은 "열 레터(column letter)"로 존재함

\# - 하지만, csv는 단순 문자 파일로 열 레터 개념이 없음

df2 = pd.read\_excel('남북한발전전력량.xlsx', usecols='D:F') 



\# 4.3 엑셀 열 범위를 콤마로 지정

df3 = pd.read\_excel('남북한발전전력량.xlsx', usecols='D, F, G')



======================================

<# CSV 파일로 저장하기>

df = pd.read\_csv('sample.csv')

\# 1. 기본 저장: 기본 인덱스(index)가 함께 저장됨

df.to\_csv('output1.csv')



\# 2. index 제거하고 저장하기

df.to\_csv('output2.csv', index=False)



\# 3. 열 구분자 변경하기

df.to\_csv('output\_tab.csv', sep='\\t')   # 탭 구분

df.to\_csv('output\_space.csv', sep=' ')  # 공백 구분



\# 4. 원하는 열만 저장하기

df.to\_csv('output4.csv', columns=\['c1', 'c2'])



\# 5. 헤더(header) 없이 저장하기

df.to\_csv('output\_no\_header.csv', header=False)



\# 인코딩 설정 (한글 데이터에서 매우 중요)

df2 = pd.read\_excel('남북한발전전력량.xlsx')

df2.to\_csv('output\_noEncoder.csv')

df2.to\_csv('output\_utf8.csv', encoding='utf-8-sig')  # 권장

df2.to\_csv('output\_cp949.csv', encoding='cp949') # Windows에서 흔함



======================================

<# Excel 파일로 저장하기>

df = pd.read\_excel('남북한발전전력량.xlsx')

\# 1. 기본 저장: 기본 인덱스(index)가 함께 저장, 기본 시트 이름은 "Sheet1"

df.to\_excel('xlsx\_output1.xlsx')



\# 2. index 제거하고 저장하기

df.to\_excel('xlsx\_output2.xlsx', index=False)



\# 3. 시트 이름 지정하기

df.to\_excel('xlsx\_output3.xlsx', index=False, sheet\_name='Data')



\# 4. 원하는 열만 저장하기

df.to\_excel('xlsx\_output4.xlsx', columns=\['1991','1992'])



\# 5. 헤더(header) 없이 저장하기

df.to\_excel('xlsx\_output5.xlsx', header=False)



\# 6. 여러 시트를 가진 Excel 파일 저장하기 -> ExcelWriter 사용

dfs = pd.read\_excel('남북한발전전력량.xlsx', sheet\_name=None)

print(dfs.items())



with pd.ExcelWriter('xlsx\_output6.xlsx') as writer:

&#x20;   for sheet\_name, df in dfs.items():

&#x20;       df.to\_excel(writer, sheet\_name=sheet\_name, index=False)



======================================

\# df.info()

\# - DataFrame의 전체 구조를 요약해서 보여주는 함수

\# --- 데이터가 어떤 형태인지, 무슨 타입인지, 결측치가 얼마나 있는지

\# --- 빠르게 확인할 때 가장 먼저 사용하는 함수

\# df.info()

df2 = pd.read\_csv('sample\_data\_up.csv')

print(df2.info())



\# df.describe()

\# - DataFrame의 수치형 (numeric) 열에 대한 기본 통계를 자동으로 요약

\# - 데이터 분포, 범위, 평균, 이상치 여부 등을 빠르게 파악

df2 = pd.read\_csv('sample\_data\_up.csv')

print(df2.describe()) # 결측치(NaN)를 자동으로 제외하고 계산

\# 사분위수 대신 10%, 90% 같은 커스텀 백분위 출력

print(df2.describe(percentiles=\[0.1, 0.9])) # 사분위수 대신 10%, 90% 같은 커스텀 백분위 출력

\# include = 'object' -> 문자열 (범주형) 데이터만 요약

print(df2.describe(include='object')) 

\# include = 'all' -> 수치형, 범주형 모든 컬럼을 한꺼번에 요약

print(df2.describe(include='all')) 

\# exclude = 'object' -> 문자열 데이터만 빼고 나머지 요약

print(df2.describe(exclude='object')) 

======================================

<# 결측치 처리>

\# 결측치를 포함한 예시 DataFrame 생성

data = {'name':  \['Karina', 'Wonhee', None, 'Ian'],

&#x20;       'age':   \[27,         None,     23,  None],

&#x20;       'group': \['aespa',   'illit', None, 'H2H']}

df = pd.DataFrame(data)



missing\_df = df.isna()

missing\_df2 = df.isnull()

valid\_df = df.notna()

valid\_df2 = df.notnull()



\# 1.2 결측치가 있는지 여부만 빠르게 확인하기

data = {'name':  \['Karina', 'Wonhee', 'Yuna', 'Ian'],

&#x20;       'age':   \[    None,     None,   None,  None],

&#x20;       'group': \[ 'aespa',  'illit',   None, 'H2H']}

df = pd.DataFrame(data)



\# df.isna().any() : '각 열'에 결측치가 하나라도 있으면 True

missing\_df\_col = df.isna().any()

\# df.isna().any(axis=1) : '각 행'에 결측치가 하나라도 있으면 True

missing\_df\_row = df.isna().any(axis=1)

\# df.isna().all() : '열 전체'가 결측치일 때만 True

missing\_df\_all\_col = df.isna().all()

\# df.isna().all(axis=1) : '행 전체'가 결측치일 때만 True

missing\_df\_all\_row = df.isna().all(axis=1)

\# df.isna().any().any() : 

\# - 'DataFrame 전체'에 결측치가 하나라도 있으면 True

missing\_df\_anyCell = df.isna().any().any()



\# 1.3 결측치 개수 확인

\# 사용법:

\# df.isna().sum(): '각 열 (column)별' 결측치 개수

missing\_df\_col\_num = df.isna().sum()



\# df.isna().sum(axis=1): '각 행 (row)별' 결측치 개수

missing\_df\_row\_num = df.isna().sum(axis=1)



\# df.isna().sum().sum(): DataFrame 전체 결측치 개수

missing\_df\_num = df.isna().sum().sum()



\# 2.1 결측치가 하나라도 있는 '행' 삭제 (axis=0) : 기본값

data = {'name':  \['Karina', 'Wonhee', 'Yuna', 'Ian'],

&#x20;       'age':   \[      27,     None,     24,  None],

&#x20;       'group': \[ 'aespa',  'illit',   None, 'H2H'],

&#x20;       'weight':\[    None,     None,   None,  None]}

df = pd.DataFrame(data)



df\_row\_drop = df.dropna(axis=0) 

df\_row\_drop2 = df.dropna() # axis=0이 기본값



\# 2.2 결측치가 하나라도 있는 '열' 삭제 (axis=1)

df\_col\_drop = df.dropna(axis=1)



\# 2.3 모든 값이 NaN인 열만 삭제

df\_col\_all\_drop = df.dropna(axis=1, how='all')



df2 = df.copy()

df2.loc\[4] = \[None, None, None, None] # 4번째 행 전체가 NaN



\# 2.4 모든 값이 NaN인 행만 삭제

df\_row\_all\_drop = df2.dropna(how='all')



\# 2.5 특정 열이 비어있는 경우만 행 삭제

df\_subset = df.dropna(subset=\['group'])



\# 2.6 데이터가 최소 3개는 제대로 있는 행만 남기기

print(df.dropna(thresh=3)), print("="\*30)



\# 2.7 데이터가 최소 3개는 제대로 있는 열만 남기기

print(df.dropna(thresh=3, axis=1))



\# 3. 결측치 대체 (채우기)

\# 3.1 결측치를 단일 값으로 채우기



data = {'name':  \['Tom', 'Ann', None, 'Bob'],

&#x20;       'age':   \[20,     None, 25,    None],

&#x20;       'score': \[90,      85,  None,  75]}

df = pd.DataFrame(data)



\# 모든 결측치를 0으로 채우기

df1 = df.fillna(0)



\# 문자열 열은 문자열로 채우기

df2 = df.fillna({'name': 'Unknown'})



\# 3.2 열 (column)마다 다른 값으로 채우기 (추천)

df3 = df.fillna({'name': 'Unknown',

&#x20;                'age': 0,

&#x20;                'score': -1})



\# 3.3 결측치를 평균 / 중앙값 / 최빈값으로 채우기

\# 평균 (mean)으로 채우기

age\_mean = df4\['age'].mean()

df4\['age'] = df4\['age'].fillna(age\_mean)



\# 중앙값 (median)으로 채우기

age\_median = df4\['score'].median()

df4\['score'] = df4\['score'].fillna(age\_median)



\# 최빈값 (mode)으로 채우기

data = {'color': \['red', 'blue', 'red', None, 'blue'],

&#x20;       'age':   \[10,      20,     10,   30,   None],

&#x20;       'score': \[1,       2,       2,    3,     2]}

df = pd.DataFrame(data)



\# 각 열의 최빈값 확인: \[0]은 중복되는 최빈값 중 첫 번째 값 사용

print("color 최빈값:", df\['color'].mode()\[0])  

print("age   최빈값:", df\['age'].mode()\[0])

print("score 최빈값:", df\['score'].mode()\[0])



\# color 열만 채우기

df1 = df.copy()

mode\_color = df1\['color'].mode()\[0]

df1\['color'] = df1\['color'].fillna(mode\_color)



\# 전체 열을 각자의 최빈값으로 한 번에 채우기

df2 = df.copy()

for col in df2.columns:

&#x20;   df2\[col] = df2\[col].fillna(df2\[col].mode()\[0])

print(df2)



\# 3.4 앞/뒤 값으로 채우기 (시계열 데이터에서 중요)



\# 날짜 인덱스 생성 (2026-05-10 \~ 2026-05-16)

dates = pd.date\_range(start='2026-05-10', periods=7, freq='D')

data = {'temp': \[None, 22, None, 28, None, 30, 31],   # 온도

&#x20;       'humid': \[50, None, 65, None, 50, 45, None]}  # 습도

df = pd.DataFrame(data, index=dates)



\# 3.4.1 앞의 값으로 채우기 (ffill: forward fill)

\# - 이전 날짜의 값을 "앞에서 끌고 와서" 채우는 방식

\#df\_ffill = df.fillna(method='ffill')

df\_ffill = df.ffill()



\# 3.4.2 뒤의 값으로 채우기 (bfill: backward fill)

\# - 다음 날짜의 값을 "뒤에서 끌어와서" 채우는 방식

df\_bfill = df.bfill()



\# 3. 결측치 채우기 (위의 시계열 데이터에서 추가로..)



\# 방법1) temp 열 평균과 humid 열 평균으로 결측치 채우기

df2 = df.copy()



\# - temp와 humid 각각의 평균 계산

temp\_mean = df2\['temp'].mean()

humid\_mean = df2\['humid'].mean()

print("temp 평균값:", temp\_mean)

print("humid 평균값:", humid\_mean)



\# - 각 열별로 평균값으로 결측치 채우기

df2\['temp'] = df2\['temp'].fillna(temp\_mean)

df2\['humid'] = df2\['humid'].fillna(humid\_mean)

print(df2)



\# 방법2) 더 간결한 버전

df3 = df.copy()

df3 = df3.fillna({'temp': df\['temp'].mean(),

&#x20;                           'humid': df\['humid'].mean()})



======================================

<# 데이터 값 변환>

\# 데이터 값 변환하기: map(), replace(), apply(), applymap()



\# - 간단한 매핑은 map()

\# - 결측 없이 치환은 replace()

\# - 논리 기반 변환은 apply()

\# - 데이터프레임 매핑은 applymap()



\# map(): 간단한 매핑



df = pd.DataFrame({

&#x20;   'name':  \['Ian', 'Jin', 'Yuna', 'Alien'],

&#x20;   'gender':\[  'F',   'M',    'F', 'Unknown'],

&#x20;   'age':   \[   18,    35,     24,  None]})

\# dictionary를 이용한 map

\# - map은 매핑되지 않은 값을 NaN으로 변환 

df\['gender\_num'] = df\['gender'].map({'F':1, 'M':0})

\# gender 컬럼 삭제

df.drop('gender', axis=1, inplace=True)

\# 일반 함수를 이용한 map

def age\_plus\_one(x):

&#x20;   return x + 1



df\['age2'] = df\['age'].map(age\_plus\_one)

print(df), print('='\*40)



\# lambda 함수를 이용한 map

df\['age3'] = df\['age'].map(lambda x: x+1)

print(df)

\# map(): 간단한 매핑



df = pd.read\_csv('sample\_data\_up.csv')

print(df.info()), print('='\*40) 

print(df.describe(include='object')), print('='\*40) 



print(df\['Survival\_Status']), print('='\*40)



dict\_map = {'Deceased':0, 'Alive':1, 'Lost to Follow-up':2}

df\['Survival\_Status\_num'] = df\['Survival\_Status'].map(dict\_map)

print(df\['Survival\_Status\_num']), print('='\*40)



\# Survival\_Status 컬럼 삭제

df2 = df.drop('Survival\_Status', axis=1)

print(df2.info())



\# replace() 함수



\# 숫자형 값 치환

df = pd.DataFrame({

&#x20;   'name': \['A', 'B', 'C', 'D'],

&#x20;   'score': \[80, -1, 90, -1]})

print(df), print("="\*40)



\# -1을 0으로 치환 (예: 결측 또는 오류 코드를 0점 처리)

df.replace(-1, 0, inplace=True)

\# dictionary를 이용한 map

\# - map(): 매핑되지 않은 값을 NaN으로 변환하지만

\# - replace(): 매핑되지 않은 값은 원래 값 그대로

df = pd.DataFrame({

&#x20;   'name':  \['Ian', 'Jin', 'Yuna', 'Alien'],

&#x20;   'gender':\[  'F',   'M',    'F', 'Unknown'],

&#x20;   'age':   \[   18,    35,     24,  None]})

print(df), print('='\*40)



df\['gender\_num'] = df\['gender'].replace({'F':1, 'M':0})

print(df)

\# 리스트 기반 치환

df = pd.DataFrame({

&#x20;   'name':  \['Ian', 'Jin', 'Yuna', '-'],

&#x20;   'gender':\[  'F',   'M',    'F', 'Unknown'],

&#x20;   'age':   \[   18, 'N/A',     24,  '?']})

print(df), print('='\*20)



df2 = df.copy()



\# - 1:1 치환: '?'를 None으로 변경 

df.replace('?', None, inplace=True)

print(df), print('='\*20)



\# - N:1 치환: 여러 형태의 결측 신호를 None으로 통일

df.replace(\['-', 'N/A', 'Unknown'], None, inplace=True)

print(df)

\# 딕셔너리 기반 치환

df = pd.DataFrame({

&#x20;   'name':  \['Ian', 'Jin', 'Yuna', '-'],

&#x20;   'gender':\[  'F',   'M',    'F', 'Unknown'],

&#x20;   'age':   \[   18, 'N/A',     24,  '?']})

print(df), print('='\*20)



df2 = df.copy()



\# - N:1 치환: {'찾을값': '바꿀값'} 형태로 작성

replace\_dict = {'?': None,

&#x20;               '-': None,

&#x20;               'N/A': None,

&#x20;               'Unknown': None}

df.replace(replace\_dict, inplace=True)

print(df), print('='\*20)

\# - N:1 치환: {'컬럼명': {'찾을값':'바꿀값' }} 형태 -> 중첩 딕셔너리

replace\_dict2 = {'name': {'-': None},

&#x20;                'gender': {'Unknown': None},

&#x20;                'age': {'N/A': None, '?': None}}

df2.replace(replace\_dict2, inplace=True)

print(df2)



\# 만약 map 함수로 N:1 치환을 한다면... 에러 발생

\# 왜냐하면, map은 기본적으로 Series만 입력받음

'''

map\_dict = {'-': None, 'N/A': None, 'Unknown': None}

df2 = df2.map(map\_dict)

'''

\# 정규 표현식 기반 치환

data = {

&#x20;   'patient': \['Ian', 'Jin', 'Yuna'],

&#x20;   'weight': \['50kg', '65 kg', '52.5kg'],  # 단위가 붙어 있음

&#x20;   'bp': \['120/80mmHg', '110/70', '130/85 mmHg'] # 단위 혼용

}

df = pd.DataFrame(data)

print(df), print('='\*40)



\# 정규 표현식 활용

\# 1. weight 컬럼에서 숫자가 아닌 것(\[^0-9.])을 모두 지우기

\# 2. bp 컬럼에서 'mmHg' 문자열(공백 포함) 지우기

df.replace({

&#x20;   'weight': {r'\[^0-9.]': ''}, # 숫자와 마침표(.)만 남기고 모두 삭제

&#x20;   'bp': {r'\\s?mmHg': ''}      # 공백(\\s)이 있을 수도, 없을 수도(?) 있는 mmHg 삭제

}, regex=True, inplace=True)    # regex=True: 이 옵션을 반드시 켜야 판다스가 

&#x20;                               # 입력값을 단순 문자열이 아닌 '패턴'으로 인식



\# 숫자형으로 변환 

df\['weight'] = pd.to\_numeric(df\['weight'])



print(df), print('='\*40)

print(df.dtypes) # weight가 float64로 변한 것 확인 가능



\# apply(): 논리 기반 변환



\# 기본 사용법1: Series.apply + lambda

df = pd.DataFrame({'name': \['Liz', 'Jin', 'Ian', 'Alien'],

&#x20;                  'gender': \['F', 'M', 'F', 'Unknown']})

print(df), print('='\*40)



\# 'F' -> 1, 'M' -> 0, 나머지 모든 값은 -1

\# lambda는 단일표현식만 허용해서 if-elif-else 형태로 넣을 수 없음

\# -> else 뒤에 다시 if-else를 중첩하는 문법을 사용

df\['gender\_num'] = df\['gender'].apply(

&#x20;   lambda x: 1 if x == 'F' else (0 if x == 'M' else -1))

print(df), print('='\*40)



\# 가독성을 위해 명시적인 함수 정의 (if-elif-else 사용 가능)

def gender\_to\_num(x):

&#x20;   if x == 'F': return 1

&#x20;   elif x == 'M': return 0

&#x20;   else: return -1



\# 함수 이름 자체를 인자로 전달 (괄호 ()는 붙이지 않음!)

df\['gender\_num2'] = df\['gender'].apply(gender\_to\_num)

print(df), print('='\*40)



df\['gender\_num3'] = df\['gender'].map(gender\_to\_num)

print(df), print('='\*40)



\# df\['gender\_num3'] = df\['gender'].replace(gender\_to\_num) # 에러



df\['name\_len'] = df\['name'].apply(lambda x: len(x))

df\['name\_len2'] = df\['name'].map(lambda x: len(x))

print(df)



\# 기본 사용법2: DataFrame.apply() – 행/열 단위 연산

df = pd.DataFrame({'name': \['Liz', 'Ian', 'Yuna'],

&#x20;                  'math': \[80, 90, 75],

&#x20;                  'eng':  \[85, 70, 95],

&#x20;                  'sci':  \[90, 88, 82]})

print(df), print('='\*40)



\# 1. 열 단위 apply – axis=0 (기본값)

\# - 수치형 열만 따로 선택한 뒤,위에서 아래로(세로 방향) 함수를 적용

\# - 람다 함수의 인자 'col'에는 각 과목별 '열(Series)'이 하나씩 통째로 전달됨

col\_mean = df\[\['math', 'eng', 'sci']].apply(lambda col: col.mean(), axis=0)

print(col\_mean), print('='\*40)



\# 2. 행 단위 apply – axis=1

\# - 왼쪽에서 오른쪽으로(가로 방향) 한 사람의 성적을 훑으며 함수를 적용

\# - 람다 함수의 인자 'row'는 한 사람(행)의 전체 정보가 담긴 Series 객체임

\# - 각 행에 대해 math + eng + sci 합계를 구해서 'total' 열로 추가

df\['total'] = df.apply(lambda row: row\['math'] + row\['eng'] + row\['sci'], axis=1)

print(df)



\# 기본 사용법2: DataFrame.apply() – 행/열 단위 연산

df\_health = pd.DataFrame({

&#x20;   'name': \['Kim', 'Lee', 'Park'],

&#x20;   'height': \[175, 160, 180],

&#x20;   'weight': \[65, 70, 55]

})

print(df\_health), print('='\*40)



\# 여러 열을 조합하여 계산하는 함수 정의

\# 여기서 인자로 들어오는 'row'는 데이터프레임의 '한 행(Row)'을 의미

def calculate\_bmi\_status(row):

&#x20;   # cm 단위를 m 단위로 변환하여 BMI 계산

&#x20;   height\_m = row\['height'] / 100

&#x20;   bmi = row\['weight'] / (height\_m \*\* 2)

&#x20;   

&#x20;   if bmi >= 25:

&#x20;       return 'Overweight'

&#x20;   elif bmi >= 18.5:

&#x20;       return 'Normal'

&#x20;   else:

&#x20;       return 'Underweight'



\# DataFrame에 apply 적용 (가로 방향으로 한 행씩 함수에 투입)

df\_health\['status'] = df\_health.apply(calculate\_bmi\_status, axis=1)

print(df\_health)



df = pd.DataFrame({

&#x20;   'A': \[1.234, 5.678],

&#x20;   'B': \[9.012, 3.456]

})



\# 실행 시 "FutureWarning: DataFrame.applymap has been deprecated" 경고가 뜸

df\_old = df.applymap(lambda x: int(x))

print(df\_old), print('='\*10)



\# 추천 방식)

\# map 함수를 데이터프레임 전체에 적용할 때는 주로 함수 (lambda 등)를 사용함

df\_new = df.map(lambda x: int(x))

print(df\_new)



======================================

<# 데이터 정렬>

\# - 값 기준 정렬: df.sort\_values()

\# - 인덱스 기준 정렬: df.sort\_index()

\# df.sort\_values(by, ascending=True, inplace=False, na\_position='last')



data = {'name':  \['Tom', 'Ann', None, 'Bob'],

&#x20;       'age':   \[20,     None, 25,    None],

&#x20;       'score': \[90,      85,  None,  75]}

df = pd.DataFrame(data)



\# 7.1.1 오름차순 정렬 (기본값)

print(df.sort\_values(by='age'))



\# 7.1.2 내림차순 정렬

print(df.sort\_values(by='name', ascending=False))



\# 7.1.3 여러 열 기준으로 정렬

print(df.sort\_values(by=\['age', 'score']))



\# 7.1.4 여러 열 각각 정렬 방향 다르게

print(df.sort\_values(by=\['age', 'score'], ascending=\[True, False]))



\# 7.1.5 결측치 (NaN) 위치 조절 (na\_position='last' 기본값)

print(df.sort\_values(by='age', na\_position='last'))

print(df.sort\_values(by='age', na\_position='first'))



\# 7.2 인덱스 (index) 기준 정렬

data = {'name':  \['Tom', 'Ann', None, 'Bob'],

&#x20;       'age':   \[20,     None, 25,    None],

&#x20;       'score': \[90,      85,  None,  75]}

index = \[2, 3, 1, 0]

df = pd.DataFrame(data, index = index)



\# 7.2.1 행 인덱스 오름차순 (기본값)

print(df.sort\_index()), print("="\*20)



\# 7.2.2 행 인덱스 내림차순

print(df.sort\_index(ascending=False)), print("="\*20)



\# 7.2.3 열(column) 인덱스 정렬 

\# name - age - score ==> age - name - score 순으로 정렬

print(df.sort\_index(axis=1))



\# - 가장 높은 점수 TOP 2

df1 = df.sort\_values(by='score', ascending=False).head(2)



\# - 나이 적은 순 + 점수 높은 순 정렬

df2 = df.sort\_values(by=\['age','score'], ascending=\[True, False])



\# - 시간순 정렬 (시계열)

df3 = df.sort\_index()  



\# 7.4 sort\_values, sort\_index()는 기본적으로 원본을 변경하지 않음

data = {'name':  \['Tom', 'Ann', None, 'Bob'],

&#x20;       'age':   \[20,     None, 25,    None],

&#x20;       'score': \[90,      85,  None,  75]}

df = pd.DataFrame(data)

\# 원본 유지

print(df.sort\_values(by='age'))

\# 원본 변경 (inplace=True)

df2 = df.copy()

print(df2), print('='\*20)

\# inplace=True는 "원본만 수정하고 반환값은 None"

print(df2.sort\_values(by='age', inplace=True)), print('='\*20)

print(df2)



======================================

<# 데이터 병합>

\# pd.concat(\[df1, df2]): 물리적인 '이어 붙이기'

\# pd.concat(objs, axis=0, join='outer', ignore\_index=False)

\# pd.merge(df1, df2): SQL 스타일의 '논리적 병합' 

\# df1.join(df2): 인덱스 (index) 기준의 '간편 merge'

======================================

\# 8.1 pd.concat()

\# - 여러 DataFrame / Series를 하나로 이어 붙이는 함수

\# - 특정 키를 기준으로 값을 매칭하는 merge와 달리, 

\#   오직 행/열의 위치와 이름 (인덱스)만을 기준으로 이어 붙임



\# 기본 구조

\# pd.concat(objs, axis=0, join='outer', ignore\_index=False)

\# - objs : 리스트 또는 딕셔너리 형태

\#   -- 결합할 판다스 객체들을 대괄호로 묶어서 전달 -> 예) \[df1, df2, df3]

\# - axis=0 (기본값): 위 + 아래 (세로 방향)로 쌓아서 행을 늘림

\# - axis=1 : 왼쪽 + 오른쪽 (가로 방향)으로 붙여서 열을 늘림

\# - join='outer' (기본값): 결합되는 객체들의 합집합

\#   -- 서로 축의 이름이 맞지 않아도 모두 살리고, 비는 곳은 NaN으로 채움

\# - join='inner' : 결합되는 객체들의 교집합

\#   -- 서로 공통으로 존재하는 일치하는 이름의 축만 남기고 나머지는 버림

\# - ignore\_index = False (기본값)

\#   -- True로 설정하면 기존 데이터프레임들이 가지고 있던 인덱스를 무시하고, 

\#      합쳐진 최종 결과물에 0부터 새로 시작하는 깔끔한 인덱스를 부여함



\# 행 방향 연결 (axis=0): 아래로 붙이기

\# - index가 지정되어 있지 않을 때

dic1 = {'A': \[1, 2],

&#x20;       'B': \[3, 4]}

dic2 = {'A': \[5, 6],

&#x20;       'B': \[7, 8]}



\# df1, df2의 컬럼 이름이 'A', 'B' 임

df\_12 = pd.concat(\[df1, df2], axis=0)



\# df3의 컬럼 이름이 'C', 'D' 임

dic3 = {'C': \[5, 6],

&#x20;       'D': \[7, 8]}

df\_13 = pd.concat(\[df1, df3], axis=0)



\# concat의 옵션으로 ignore\_index=True

df\_13\_idx = pd.concat(\[df1, df3], axis=0, ignore\_index=True)



\# - index가 지정되어 있을 때

dic1 = {'A': \[1, 2],

&#x20;       'B': \[3, 4]}

index1 = \[0, 3]

dic2 = {'A': \[5, 6],

&#x20;       'B': \[7, 8]}

index2 = \[1, 2]

df\_12 = pd.concat(\[df1, df2], axis=0)



\# index 정렬

df\_12\_sorted = pd.concat(\[df1, df2], axis=0).sort\_index()



\# 열 방향 연결 (axis=1): 옆으로 붙이기

\# - index가 지정되어 있지 않을 때

dic1 = {'A': \[1, 2],

&#x20;       'B': \[3, 4]}

dic2 = {'A': \[5, 6],

&#x20;       'B': \[7, 8]}



\# df1, df2의 컬럼 이름이 'A', 'B' 임

df\_12 = pd.concat(\[df1, df2], axis=1)

dic3 = {'C': \[5, 6],

&#x20;       'D': \[7, 8]}

\# df3의 컬럼 이름이 'C', 'D' 임

df\_13 = pd.concat(\[df1, df3], axis=1)



\# - index가 지정되어 있을 때

dic1 = {'A': \[1, 2],

&#x20;       'B': \[3, 4]}

index1 = \[0, 3]

dic2 = {'A': \[5, 6],

&#x20;       'B': \[7, 8]}

index2 = \[1, 2]

df\_12 = pd.concat(\[df1, df2], axis=1)



dic3 = {'C': \[5, 6],

&#x20;       'D': \[7, 8]}

index3 = \[3, 4]

df3 = pd.DataFrame(dic3, index = index3)

df\_13 = pd.concat(\[df1, df3], axis=1)



\# join = 'inner': 결합되는 객체들의 교집합

dic1 = {'A': \[1, 2],

&#x20;       'B': \[3, 4]}

index1 = \[0, 1]

dic2 = {'A': \[5, 6],

&#x20;       'C': \[7, 8]}

index2 = \[1, 2]

\# pd.concat(..., axis=0, join='inner')에서 axis=0 -> 컬럼 기준 교집합

df\_12\_axis0 = pd.concat(\[df1, df2], join = 'inner')



\# pd.concat(..., axis=1, join='inner')에서 axis=1 -> 인덱스 기준 교집합

df\_12\_axis1 = pd.concat(\[df1, df2], axis=1, join = 'inner')



======================================

\# 8.2 pd.merge()

\- on (기준 열의 이름이 같을 때 사용) 

\#   -- 병합의 기준이 되는 공통 컬럼들의 이름을 지정

\#   -- df1, df2에 동일한 이름의 컬럼이 존재해야 함

\#   -- on=None일 때, 공통되는 컬럼을 자동 merge key로 사용

\#   -- 단일 컬럼: on = 'key\_column'

\#   -- 복수 컬럼: on = \['key\_column\_1', 'key\_column\_2']



\# - left\_on, right\_on (기준 열의 이름이 다를 때 사용)

\#   -- 두 데이터프레임의 연결고리 데이터 내용은 같지만, 

\#      컬럼명이 서로 다르게 저장되어 있을 때 사용

\#   -- 예) left\_on='사원번호', right\_on='사번'



\# - how (병합 방식을 결정)

\#   -- 매칭되지 않는 데이터를 어떻게 처리할지 결정

\#   -- how = 'inner' (기본값): 공통 키만 병합 (교집합)

\#   -- how = 'left' : df1 기준으로 병합 (df1 전체 + df2의 교집합)

\#   -- how = 'right': df2 기준으로 병합 (df2 전체 + df1의 교집합)

\#   - - how = 'outer': 전체 키 병합 (합집합)



\# - 기본 예제: 조인별 결과

dic1 = {'name': \['Liz', 'Ian', 'Wonhee'],

&#x20;       'age': \[23, 18, 20]}

dic2 = {'name': \['Liz', 'Moka', 'Ian'],

&#x20;       'group': \['IVE', 'illit', 'H2H']}

\# inner join (기본값): 공통 컬럼 (name)의 '값'을 기준으로 교집합

df\_inner = pd.merge(df1, df2, on='name')

\# on=None일 때, 공통되는 컬럼을 자동 merge key로 사용

df\_inner2 = pd.merge(df1, df2)

\# left join: df1 기준 전체 + df2 매칭되는 값 (df2에 없는 값은 NaN)

df\_left = pd.merge(df1, df2, on='name', how='left')

\# right join: df2 기준 전체 + df1 매칭되는 값 (df1에 없는 값은 NaN)

df\_right = pd.merge(df1, df2, on='name', how='right')

\# outer join: 합집합

df\_outer = pd.merge(df1, df2, on='name', how='outer')



\# - 공통 컬럼 이름이 서로 다를 때

df1 = pd.DataFrame({'id': \[1, 2, 3], 

&#x20;                   'name': \['Tom', 'Ann', 'Bob']})

df2 = pd.DataFrame({'user\_id': \[2, 3, 4],

&#x20;                   'age': \[25, 30, 35]})



\# 서로 다른 컬럼명을 기준으로 merge

df\_12 = pd.merge(df1, df2, left\_on='id', right\_on='user\_id', how='inner')



\# - 여러 key(복합 키)로 병합 (on=\['col1','col2'])

df3 = pd.DataFrame({'year': \[2023, 2023, 2024],

&#x20;                   'month': \[1, 2, 1],

&#x20;                   'sales': \[100, 150, 120]})

df4 = pd.DataFrame({'year': \[2023, 2023, 2024],

&#x20;                   'month': \[1, 3, 1],

&#x20;                   'temperature': \[5, 10, 2]})

df\_34 = pd.merge(df3, df4, on=\['year', 'month'], how='inner')

df\_auto = pd.merge(df3, df4, how='inner') # 공통 컬럼이 2개임



\# - Key로 지정하지 않은 다른 컬럼들의 이름이 서로 중복되는 경우, 

\#   중복된 컬럼을 구분하기 위해서 접미사를 사용



\# 두 데이터프레임 모두 공통 키를 제외한, score라는 동일한 컬럼을 가짐 

\#  -> 기본값 (왼쪽 df에는 \_x, 오른쪽 df에는 \_y) 

\#  -> 또는 suffixes=( , )로 접미사를 부여해 줌

df1 = pd.DataFrame({'id': \[1, 2, 3],

&#x20;                   'score': \[80, 90, 85]})

df2 = pd.DataFrame({'id': \[3, 2, 4],

&#x20;                   'score': \[70, 95, 88]})

df\_merge1 = pd.merge(df1, df2, on='id')

df\_merge2 = pd.merge(df1, df2, on='id', suffixes=('\_midterm', '\_final'))



\# - 기본적으로 pd.merge( )는 컬럼을 기준으로 삼지만, 

\#   한쪽 또는 양쪽 데이터프레임의 인덱스 (행 주소)를 

\#    Key로 삼아 병합해야 할 수도 있음



\# - 두 df 인덱스를 기준으로 병합할 때 -> left\_index=True, right\_index=True

\#   -- 뒤이어 배울 df.join( )과 완전히 동일하게 작동함



\# 각 데이터프레임의 index가 key 역할을 할 때

df1 = pd.DataFrame({'value1': \[10, 20, 30]}, index=\['A', 'B', 'C'])

df2 = pd.DataFrame({'value2': \[100, 200, 300]}, index=\['A', 'C', 'D'])

df\_merge = pd.merge(df1, 

&#x20;                   df2,

&#x20;                   left\_index=True,

&#x20;                   right\_index=True,

&#x20;                   how='outer')



\# - 기본적으로 pd.merge( )는 컬럼을 기준으로 삼지만, 

\#   한쪽 또는 양쪽 데이터프레임의 인덱스 (행 주소)를 

\#    Key로 삼아 병합해야 할 수도 있음



\# - 왼쪽은 컬럼, 오른쪽은 인덱스를 기준으로 병합할 때 

\#   -> left\_on='컬럼명', right\_index=True



df\_orders = pd.DataFrame({

&#x20;   'order\_id': \[101, 102, 103, 104],

&#x20;   'item\_id': \['p01', 'p03', 'p01', 'p02'],  # 일반 컬럼

&#x20;   'quantity': \[2, 1, 1, 3]

})



df\_items = pd.DataFrame({

&#x20;   'item\_name': \['Notebook', 'Mouse', 'Keyboard'],

&#x20;   'price': \[1200000, 30000, 50000]

}, index=\['p01', 'p02', 'p03']) # item\_id를 인덱스로 지정

print(df\_orders), print('='\*50), print(df\_items), print('='\*50)



\# 컬럼 (left)과 인덱스 (right)를 기준으로 병합 수행

\# 왼쪽은 'item\_id' 컬럼을 보고, 오른쪽은 '인덱스 자체'를 매칭

df\_pr\_merged = pd.merge(

&#x20;   df\_orders, 

&#x20;   df\_items, 

&#x20;   left\_on='item\_id', 

&#x20;   right\_index=True, 

&#x20;   how='left'

)



======================================

\# 8.3 df1.join(df2) 함수

\# df1.join(df2)은 오직 인덱스 (index)를 기준으로 두 데이터프레임을 결합

\# pd.merge(..., left\_index=True, right\_index=True)의 간편 버전



\# 기본 구조 

\# df1.join(df2, on=None, how='left', lsuffix='', rsuffix='')

\# - df2 : df1 데이터프레임 뒤에 붙여 결합할 오른쪽 데이터프레임



\# - how : 조인 방식을 지정

\#   -- how = 'left' (기본값):

\#   왼쪽 조인으로 df1의 모든 인덱스를 유지하고, df2에서 매칭되는 행 추가

\#   -- how = 'right':

\#   오른쪽 조인으로 df2의 모든 인덱스를 유지하고, df1에서 매칭되는 행 추가

\#   -- how = 'outer':

\#   외부 조인으로 양쪽 DataFrame의 모든 인덱스의 합집합을 유지

\#   -- how = 'inner':

\#   내부 조인으로 양쪽 DataFrame에 공통으로 존재하는 인덱스만 유지



\# - on : df1의 '특정 컬럼'을 기준으로 df2를 결합할 때 사용

\#   -- None (기본값): df1의 인덱스를 기준으로 조인

\#   -- 문자열 or 문자열 리스트: 왼쪽 df1에서 인덱스 대신 사용할 컬럼을 지정하는 옵션

\#   -- df1.join(df2, on='컬럼명')은 

\#      pd.merge(df1, df2, left\_on='컬럼명', right\_index=True)와 동일함



\# - lsuffix, rsuffix

\#   -- 두 df에 인덱스 외에 이름이 겹치는 일반 컬럼이 존재할 때 붙여줄 접미사

\#   -- pd.merge와 달리, join은 이름이 겹치는 컬럼이 있을 때 이 옵션을 지정하지 않으면, 

\#      자동 생성되지 않고 즉시 에러(ValueError)를 발생



\# how='left' (기본값): 왼쪽 df 전체 + 오른쪽 df 매칭

df1 = pd.DataFrame({'A':\[10,20,30]}, index = \[1,2,3])

df2 = pd.DataFrame({'B':\[100,300,400]}, index = \[1,3,4])

print(df1), print('='\*20), print(df2), print('='\*20)



print(df1.join(df2)), print('='\*20)



\# how='right': 오른쪽 df 전체 + 왼쪽 df 매칭

print(df1.join(df2, how='right')), print('='\*20)



\# how='inner': df1과 df2의 교집합

print(df1.join(df2, how='inner')), print('='\*20)



\# how='outer': df1과 df2의 합집합(전체)

print(df1.join(df2, how='outer'))



\# on : df1의 '특정 컬럼'을 기준으로 df2를 결합할 때 사용

\# - None (기본값): df1의 인덱스를 기준으로 조인

\# - 문자열 or 문자열 리스트: 왼쪽 df1에서 인덱스 대신 사용할 컬럼을 지정

\# - df1.join(df2, on='컬럼명')은 

\#   pd.merge(df1, df2, left\_on='컬럼명', right\_index=True)와 동일함



df1 = pd.DataFrame({'A': \['A0', 'A1', 'A2', 'A3'],

&#x20;                   'B': \['B0', 'B1', 'B2', 'B3'],

&#x20;                   'Z': \['Z0', 'Z1', 'Z2', 'Z3']})

df2 = pd.DataFrame({'C': \['C0', 'C1'],

&#x20;                   'D': \['D0', 'D1']}, index=\['Z0', 'Z1'])

df12 = df1.join(df2, on='Z')

df1 = pd.DataFrame({'id1':\[1,2,3], 'A':\[10,20,30]})

df2 = pd.DataFrame({'id2':\[1,3,4], 'B':\[100,300,400]})



\# df1의 id1 컬럼을 인덱스처럼 사용하고, df2의 index를 기준으로 조인  

df\_join1 = df1.join(df2, on='id1')



df\_student = pd.DataFrame({'name': \['Liz', 'Ian'], 

&#x20;                          'dept': \['CS', 'AI']}, 

&#x20;                         index=\['s01', 's02'])

df\_contact = pd.DataFrame({'name': \['Prof.Kim', 'Prof.Lee'], 

&#x20;                          'phone': \['1111', '2222']}, 

&#x20;                         index=\['s01', 's02'])



\# 접미사 없이 그냥 join 시도 -> 에러가 발생

\#result\_error = df\_student.join(df\_contact) 



\# lsuffix와 rsuffix로 해결

\# lsuffix='\_student': 왼쪽 테이블의 중복 컬럼 뒤에 붙임

\# rsuffix='\_staff'  : 오른쪽 테이블의 중복 컬럼 뒤에 붙임

result\_fixed = df\_student.join(df\_contact, lsuffix='\_student', rsuffix='\_staff')

print(result\_fixed)



======================================

9\. 그룹화 및 집계

\# groupby() 함수



\# - 데이터를 특정 기준에 따라 그룹으로 묶어서 통계를 내는 함수



\# 기본 문법

\# - df.groupby('기준 열')\['계산할 열'].집계함수()

\#   -- 기준 열 : 자동으로 결과 df의 인덱스 (index)가 됨 

\#      만약 자동 인덱스를 원하지 않고, 일반 데이터프레임 형태로 

\#      유지하고 싶다면 as\_index=False 옵션을 사용함

\# 예) df.groupby('기준열', as\_index = False)\['계산할 열'].집계함수()

\#      여러 개의 열을 기준으로 그룹화할 수도 있음

\#     df.groupby(\['기준열1','기준열2',...])\['계산할 열'].집계함수()



\# 집계함수

\# - 여러 개의 데이터 (값)를 더하거나 평균을 내서, 

\#   단 하나의 대표적인 숫자로 요약해 주는 함수



df = pd.DataFrame({'class': \['A','A','B','B','C'],

&#x20;                  'name': \['Jang','Ann','Kim','Lee','Park'],

&#x20;                  'score': \[95, 85, 70, 88, 90]})

print(df), print('='\*30)



\# class별 평균 점수 (아래 결과는 Series)

cls\_mean = df.groupby('class')\['score'].mean()

print(cls\_mean), print('='\*30)



\# 기준열을 '인덱스가 아닌' 일반 df의 열로 유지할 때

cls\_mean\_df = df.groupby('class', as\_index=False)\['score'].mean()

print(cls\_mean\_df), print('='\*30)



\# 여러 기준으로 그룹화 (Multi-Index Grouping) (아래 결과는 Series)

multi\_index\_mean = df.groupby(\['class', 'name'])\['score'].mean()

print(multi\_index\_mean), print('='\*30)



multi\_index\_df = df.groupby(\['class', 'name'], as\_index=False)\['score'].mean()

print(multi\_index\_df)



\# 1. 그룹의 내용을 직접 보고 싶을 때

for key, group in df.groupby('class'):

&#x20;   print("그룹명:", key)

&#x20;   print(group), print("="\*30)



\# 2. SAC 모델은, 집계를 안 하면 결과가 보이지 않음

print(df.groupby('class'))           # groupby만 수행

print(df.groupby('class')\['score'])  # groupby -> 'score'열만 선택

print('='\*30)



\# 3. 반환 형태가 Series인지 DataFrame인지 구분 필요

ser\_groupby = df.groupby('class')\['score'].mean()

print(ser\_groupby), print('='\*30)



\# - 대괄호 2개 -> DataFrame

df\_groupby = df.groupby('class')\[\['score']].mean()

print(df\_groupby)



df = pd.DataFrame({'class': \['A','A','B','B','C'],

&#x20;                  'name': \['Jang','Ann','Kim','Lee','Park'],

&#x20;                  'score': \[90, 85, 70, 88, 95]})

print(df), print('='\*30)



\# class별 점수 합

cls\_sum = df.groupby('class', as\_index=False)\['score'].sum()

print(cls\_sum), print('='\*30)



\# class별 중앙값

cls\_median = df.groupby('class', as\_index=False)\['score'].median()

print(cls\_median), print('='\*30)



\# class별 최소/최대 점수

cls\_min = df.groupby('class', as\_index=False)\['score'].min()

print(cls\_min), print('='\*30)



cls\_max = df.groupby('class', as\_index=False)\['score'].max()

print(cls\_max), print('='\*30)



\# class별 분산 / 표준편차

cls\_var = df.groupby('class', as\_index=False)\['score'].var()

print(cls\_var), print('='\*30)



cls\_std = df.groupby('class', as\_index=False)\['score'].std()

print(cls\_std)



df = pd.DataFrame({'class': \['A','A','B','B','C'],

&#x20;                  'name': \['Jang','Ann','Kim','Lee','Park'],

&#x20;                  'score': \[90, None, 70, 88, 95]})

print(df), print('='\*30)



\# class별 개수 (count)

\# - df or series 반환. NaN은 제외

cls\_cnt = df.groupby('class')\['score'].count()

print(cls\_cnt), print('='\*30)



\# class별 행개수 (size)

\# - series 반환. NaN 상관없이 행 개수 반환

cls\_size = df.groupby('class')\['score'].size()

print(cls\_size), print('='\*30)



\# count()에서 열 선택을 하지 않으면, 모든 열에 대해서 count 함

\#  df.groupby('class')\['score'].count()는 'score'열만 count

cls\_cnt = df.groupby('class').count()

print(cls\_cnt), print('='\*30)



\# size()는 열 선택이 필요 없음

\# 결과는 완전히 동일하며, 코드가 더 간결해짐

cls\_size = df.groupby('class').size()  

print(cls\_size)



======================================

\# agg() 함수



\# - aggregation (집계)의 줄임말로, 여러 개의 집계 연산을 한 번에 처리하는 함수

\# - groupby( )와 함께 자주 사용되며, 다음과 같은 상황에서 유용함

\#   -- "평균 + 표준편차 + 개수" 등을 한번에 계산하고 싶을 때

\#   -- "math는 평균, eng는 합계, sci는 최대값"처럼 "열마다 다른 집계"를 하고 싶을 때

\#   -- 사용자 정의 함수 (custom function)로 집계하고 싶을 때



\# 기본 문법

\# groupby와 함께 사용시:

\# - df.groupby('기준 열')\['계산할 열'].agg('집계함수')

\# -- 1. 단일 열에 여러 함수 적용할 때 (리스트 형태) 

\#       df.groupby('기준 열')\['계산할 열'].agg(\['함수1','함수2',...])

\# -- 2. 열마다 서로 다른 함수를 적용할 때 (딕셔너리 형태)

\#       df.groupby('기준 열').agg({'열1':'함수1','열2':'함수2',...})

\# -- 3. 집계와 동시에 결과 열 이름을 바꾸고 싶을 때 

\#       df.groupby('기준 열').agg(새이름1=('열1':'함수1'),새이름2=('열2':'함수2'),...)



\# agg 단독 사용시:

\# - df.agg(집계함수)

\# -- 1. 전체 데이터에 여러 함수 적용하기 (리스트 형태)

\#       df.agg(\['함수1','함수2',...])

\# -- 2. 열마다 서로 다른 함수 적용하기 (딕셔너리 형태)

\#       df.agg({'열1':'함수1','열2':'함수2',...})

\# -- 3. 열마다 여러 개의 서로 다른 함수 적용하기 (딕셔너리 + 리스트 혼합)

\#       df.agg({'열1':\['함수1', '함수2'],'열2':\['함수3','함수4'],...})



\# agg() 함수: groupby + agg 



df = pd.DataFrame({

&#x20;   'class': \['A', 'A', 'A', 'B', 'B', 'B'],

&#x20;   'name': \['원이', '이안', '리나', '유진', '원영', '원희'],

&#x20;   'math': \[85, 95, 70, 60, 95, 88],

&#x20;   'eng':  \[90, 80, 85, 70, 100, 95]

})

print(df), print('='\*40)



\# Case1: 단일 열에 여러 함수 적용 

\# - 함수 이름들을 리스트 \[' ', ' ']로 묶어서 전달

result1 = df.groupby('class')\['math'].agg(\['mean', 'max', 'min'])

print(result1), print('='\*40)



\# Case2: 열마다 서로 다른 함수 적용

\# - agg() 함수 안에 딕셔너리 { '열이름': '함수이름' } 형태로 매핑

result2 = df.groupby('class').agg({'math': 'mean', 'eng': 'sum'})

print(result2), print('='\*40)



\# Case3: 집계와 동시에 결과 열 이름 바꾸기

\# - agg(새로운\_열\_이름=('계산할\_열','집계\_함수')) ->튜플() 구조 사용

result3 = df.groupby('class').agg(

&#x20;           math\_avg = ('math', 'mean'),

&#x20;           eng\_sum = ('eng', 'sum'),

&#x20;           class\_cnt = ('name', 'count')  

)

print(result3)



data\_dic = {'class': \['A','A','A','B','B','C','C','C','C'],

&#x20;          'math':  \[85, 90, 88, 70, 75, 95, 92, 88, 90],

&#x20;          'eng':   \[80, 85, 82, 78, 74, 90, 88, 85, 87]}

df = pd.DataFrame(data\_dic)

print(df), print('='\*40)



\# '여러 열'에 대해 '여러 집계' 적용

\# - 계층적 컬럼이 생김

result1 = df.groupby('class')\[\['math','eng']].agg(\['mean','std'])

print(result1), print('='\*40)



\# - dictionary + 여러 집계를 한 열에 넣을 수도 있음

result2 = df.groupby('class').agg({

&#x20;   'math': \['mean', 'max', 'min'],

&#x20;   'eng': 'mean'})

print(result2)



\# agg() 함수: agg 단독 사용



df = pd.DataFrame({

&#x20;   'class': \['A', 'A', 'A', 'B', 'B', 'B'],

&#x20;   'name': \['원이', '이안', '리나', '유진', '원영', '원희'],

&#x20;   'math': \[85, 95, 70, 60, 95, 88],

&#x20;   'eng':  \[90, 80, 85, 70, 100, 95]})

print(df), print('='\*40)



\# Case1: 전체 데이터에 여러 함수 적용

\# - groupby 없이 df 바로 뒤에 .agg()를 붙이고 리스트를 전달

\# 주의: df의 class/name 열은 문자열로, mean, std, var, sum 적용안됨

\#result1 = df.agg('mean') 

result1 = df.agg(\['count', 'max']) 

print(result1), print('='\*40)



result2 = df\[\['math', 'eng']].agg(\['mean', 'max', 'min'])

print(result2), print('='\*40)



\# Case2: 전체 데이터에서 열마다 서로 다른 함수 적용

\# - agg() 함수 안에 딕셔너리 {'열이름': '함수이름'} 형태로 매핑

result3 = df.agg({'math':'mean', 'eng':'sum', 'name':'count'})

print(result3), print('='\*40)



\# Case3: 열마다 여러 개의 서로 다른 함수 적용 (딕셔너리 + 리스트 혼합) 

\# - 딕셔너리의 Value 자리에 복수 개의 함수를 리스트 \[' ', ' ']로 넣음

result4 = df.agg({'math': \['mean', 'min'], # 수학: 평균과 최소값 

&#x20;                 'eng': 'max'})           # 영어: 최대값

print(result4)



df = pd.DataFrame({'class': \['A','A','B','B','C'],

&#x20;                  'name': \['Jang','Ann','Kim','Lee','Park'],

&#x20;                  'score': \[90, 85, 70, 88, 95]})

print(df), print('='\*30)



result1 = df.groupby('class')\['score'].agg('mean')   # 대괄호 1개 -> Series

result2 = df.groupby('class')\['score'].mean()

result3 = df.groupby('class')\[\['score']].agg('mean') # 대괄호 2개 -> DataFrame

print(result1), print('='\*30)

print(result2), print('='\*30)

print(result3), print('='\*30)



\# 사용자 정의 함수 (custom function) 적용

\# - 각 반의 (최고점 - 최저점) 점수 격차

\# method 1: def 함수 사용

def get\_range(x):

&#x20;   # 여기서 x는 각 class의 'score' 열 데이터 (series)임

&#x20;   return x.max() - x.min()



result4 = df.groupby('class')\['score'].agg(\['mean', get\_range])

print(result4), print('='\*30)



\# method 2: labmda 사용 -> 커스텀 함수 이름이 자동으로 <lambda>로 표시됨

result5 = df.groupby('class')\['score'].agg(\['mean', lambda x: x.max()-x.min()])

print(result5), print('='\*30)



result6 = df.groupby('class').agg(   # 집계와 동시에 결과 열 이름을 바꿈

&#x20;   mean\_val = ('score', 'mean'),

&#x20;   range\_val = ('score', lambda x: x.max() - x.min()))

print(result6)



======================================

10\. 그룹 기반 변환 및 필터링

\# transform() 함수

\# - 그룹별로 계산된 값을 "원본 데이터의 형태 (행의 개수)를 유지"한 채 

\#   채워 넣어주는 변환기

\# - groupby()는 "집계 결과가 그룹 수만큼 줄어들지만", 

\#   transform()은 원래 행 개수를 유지



\# transform() 작동 방식

\# - 예) class별 평균을 계산하고, 각 학생에게 본인의 class 평균을 다시 붙여줌

\#   -- Split (class별로 나눔) -> Apply (각 class에서 평균 계산) 

\#      -> Combine (평균값을 원래 각 행 위치에 맞게 복원)



\# transform( ) 함수 vs. agg( ) 함수

\# - 결정적인 차이는 결과를 반환할 때, "데이터의 형태가 변하는가?"에 있음

\# - agg( ) 함수 : 데이터 압축 

\#   -- 그룹별로 계산된 단 하나의 대표 숫자만 남김 

\# - transform( ) 함수 : 데이터 유지 및 확장

\#   -- 각 행이 속한 그룹의 통계치를 구한 뒤, 

\#       원본 데이터의 모든 행에 그대로 복사해서 채워줌



\# 기본 문법:

\# - groupby( ) + transform( ) 사용 시

\#   df.groupby('기준 열')\['계산할 열'].transform('집계함수')

\#   df.groupby('기준 열').transform('집계함수')



\# 보통 아래와 같은 형태로 많이 사용함 

\# df\['새로운\_열\_이름'] = df.groupby('기준 열')\['계산할 열'].transform('집계함수') 



\# transform 단독 사용시 -> 비추천



df = pd.DataFrame({'class': \['A','A','A','B','B','C','C','C','C'],

&#x20;                  'math':  \[85, 90, 88, 70, 75, 95, 92, 88, 90],

&#x20;                  'eng':   \[80, 85, 82, 78, 74, 90, 88, 85, 87]})

print(df), print('='\*40)



\# agg() vs. transform()

agg\_result = df.groupby('class')\['math'].agg('mean')

print(agg\_result), print('='\*40)

transform\_result = df.groupby('class')\['math'].transform('mean')

print(transform\_result), print('='\*40)



\# df.groupby('기준 열').transform()

\# class열을 기준으로 math와 eng의 평균을 계산 후, 원본 모양으로 반환

transform\_df = df.groupby('class').transform('mean')

print(transform\_df), print('='\*40)



\# 그룹별 평균을 각 데이터에 추가

df\['math\_mean'] = df.groupby('class')\['math'].transform('mean')

print(df), print('='\*40)



\# 파생 변수 생성: 그룹별 평균과 차이 계산

df\['math\_diff'] = df\['math'] - df\['math\_mean']

print(df)



======================================

\# filter() 함수

\# - 조건에 맞는 그룹만 남기고, 그렇지 않은 그룹은 통째로 제거함

\# - 개별 행의 값이 아닌, 

\#   '그룹의 통계치'를 기준으로 그룹의 생존 여부를 결정할 때 사용



\# 일반 필터링 vs. 그룹 기반 filter() 함수

\# - 일반 필터링 (예: df\[df\['score'] >= 80])

\#   -- 각 행 (학생)의 점수를 하나씩 검사 

\#      -> 소속 반에 상관없이 개인 점수가 80점 이상인 학생만 남김



\# - 그룹 기반 filter() 함수 (예:df.groupby('class').filter(...))

\#   -- 그룹 (class) 전체의 요약 통계치 (예: 반 평균)를 먼저 계산  

\#   -> "class 평균이 80점 이상" 이라는 조건을 걸면, 

\#    개인 점수와 상관없이 해당 그룹 전체가 통째로 살아남거나 제거됨



\# - 예시

\#   -- 학생 수가 3명 이상인 class만 남기기

\#   -- 평균 점수가 80점 이상인 class만 남기기



\# - 기본 문법:

\# df.groupby('기준 열').filter(lambda x: 조건식)

\# df.groupby('기준 열').filter(일반 함수)



\# - .filter(조건을 판별할 함수) 형태로, 주로 lambda 나 def 함수를 사용 

\#   -- 이 함수는 함수 내부에서 각 그룹을 심사한 뒤, 

\#      반드시 True / False를 반환해야 함



\# - 매개변수 x : groupby()에 의해 쪼개진 

\#               각 그룹의 데이터프레임 전체가 x에 전달됨



\# - 조건식 작성 규칙

\#   -- x가 데이터프레임 구조이므로, 반드시 x\['score'].mean()>80 또는  

\#      x\['name'].count()>=3 처럼 그룹의 통계치를 반환하는 조건식 사용



\# - 최종 반환 형태

\#   -- 조건을 통과한 그룹의 원본 행(row)들이 그대로 유지됨 

\#   -- 즉, 조건에 따라 전채 행의 개수는 줄어들지만, 

\#      원본 데이터프레임의 컬럼 구조와 형태를 그대로 유지



\# filter() 함수: lambda 함수

df = pd.DataFrame({

&#x20;   'class': \['A','A','A','B','B','C'],

&#x20;   'name':  \['Jang','Lee','Park','Kim','Jung','Han'],

&#x20;   'score': \[90,   85,   70,   60,   75,   95]})

print(df), print('='\*30)



\# 1. 그룹 크기가 2명 이상인 class만 남기기

result1 = df.groupby('class').filter(lambda x: len(x) >= 2)

print(result1), print('='\*30)



\# 2. 평균 점수가 80 이상인 class만 남기기

result2 = df.groupby('class').filter(lambda x: x\['score'].mean()>=80)

print(result2), print('='\*30)



\# 3. 그룹 내 최소 점수가 60 이상인 class만 남기기

result3 = df.groupby('class').filter(lambda x: x\['score'].min()>=60)

print(result3)



\# filter() 함수: def 함수

df = pd.DataFrame({

&#x20;   'class': \['A','A','A','B','B','C'],

&#x20;   'name':  \['Jang','Lee','Park','Kim','Jung','Han'],

&#x20;   'score': \[90,   85,   70,   60,   75,   95]})

print(df), print('='\*30)



\# 1. 그룹 크기가 2명 이상인 class만 남기기

def check\_size(x):

&#x20;   return len(x) >= 2

&#x20;   

result1 = df.groupby('class').filter(check\_size)

print(result1), print('='\*30)



\# 2. 평균 점수가 80 이상인 class만 남기기

def check\_mean(x):

&#x20;   return x\['score'].mean() >= 80

&#x20;   

result2 = df.groupby('class').filter(check\_mean)

print(result2), print('='\*30)



\# 3. 그룹 내 최소 점수가 60 이상인 class만 남기기

def check\_min(x):

&#x20;   return x\['score'].min() >= 60

&#x20;   

result3 = df.groupby('class').filter(check\_min)



======================================

다차원 데이터 요약과 피벗 테이블 (pivot\_table)

\# pivot\_table()함수



\# - 수많은 행으로 이루어진 데이터셋을 내가 원하는 

\#   가로축 (column)과 세로축 (index)을 기준으로 교차 분석하여 

\#   격자형 요약 표 (2차원 행렬 형태)로 재구성하는 함수임



\# - groupby().agg(): 세로형 요약

\#   -- 데이터를 요약할 때 기준들을 무조건 세로로만 길게 쌓아서 보여줌

\#   -- 한눈에 정보를 파악하기에는 가독성이 떨어짐



\# - pivot\_table(): 바둑판형 입체 요약

\#   -- 기준 하나는 세로(행)에 배치하고, 또 다른 기준 하나는 가로(열)에 

\#      배치하여 바둑판 모양의 격자 표를 만듦

\#   -- 행과 열이 만나는 교차점마다 요약 통계치가 채워져서 가독성이 좋음



\# - 기본 문법

\# df.pivot\_table(index=′세로축′, columns=′가로축′, values=′계산할열′, aggfunc=′집계함수′)



\# - index (세로축 기준): 표의 가장 왼쪽에 행 이름으로 내려올 기준 열을 지정함

\# - columns (가로축 기준): 표의 가장 위쪽에 열 이름으로 나열될 기준 열을 지정함

\# - values (계산할 열): 행과 열이 교차하는 칸에 집계하고 싶은 숫자 열을 지정함

\# - aggfunc (집계 방식): 어떤 수학적 계산을 할지 지정함 

\#   -- 기본값: 'mean'

\#   -- agg() 함수에서 사용했던 집계 함수나 사용자 정의 함수 등을 사용할 수 있음



\# pivot\_table() 함수



\# class와 gender가 섞여 있는 성적 데이터

df = pd.DataFrame({

&#x20;   'class': \['A', 'A', 'A', 'A', 'B', 'B', 'B', 'B'],

&#x20;   'gender': \['남', '남', '여', '여', '남', '여', '남', '여'],

&#x20;   'score': \[85, 95, 90, 80, 70, 100, 60, 80]

})

print(df), print('='\*30)



\# groupby 방식 -> 세로로 길게 출력됨

groupby\_result = df.groupby(\['class', 'gender'])\['score'].mean()

print(groupby\_result), print('='\*30)



\# pivot\_table 방식 -> 엑셀 같은 격자 표로 출력됨

pivot\_result = df.pivot\_table(index='class', columns='gender', 

&#x20;                             values='score', aggfunc='mean')

print(pivot\_result), print('='\*30)



\# pivot\_table의 margins=True 옵션

\# margins=True를 넣으면, 

\# 엑셀처럼 가로/세로의 총합계(All)를 자동으로 계산해 줌

pivot\_total = df.pivot\_table(index='class', columns='gender', 

&#x20;                values='score', aggfunc='mean', margins=True)

print(pivot\_total)



\# 데이터에 B반 여성 데이터가 하나도 없다고 가정

df\_nan = df.drop(index=\[5, 7]) # B반 여학생 데이터 2명을 의도적으로 삭제

print(df\_nan), print('='\*30)



pivot\_nan = df\_nan.pivot\_table(index='class', columns='gender', 

&#x20;                              values='score', aggfunc='mean') 

print(pivot\_nan), print('='\*30)



\# fill\_value 옵션 -> 결측치(NaN)를 다른 값으로 처리

pivot\_nan\_fill\_value = df\_nan.pivot\_table(index='class', columns='gender', 

&#x20;                              values='score', aggfunc='mean', 

&#x20;                              fill\_value=0) # NaN 대신 0으로 채우기

print(pivot\_nan\_fill\_value), print('='\*30)



\# aggfunc=\['mean', 'count'] 처럼 리스트로 묶어주면 2중 컬럼 격자 표가 완성

pivot\_multi = df\_nan.pivot\_table(index='class', columns='gender', 

&#x20;                            values='score', aggfunc=\['mean', 'count'])

print(pivot\_multi)





















































































