################
Data Analysis
################


.. contents::
    :local:


overview
===============

* NumPy——科学计算基础包，大部分科学计算库的基础，提供了快速高效操作多维数组(narray)和执行数学运算的能力， 和一系列线性代数运算、傅立叶变换、随机数生成等工具，具备与C/C++、Fortran互操作性
* Pandas——快速便捷处理大量实际数据，一个方便处理数据加 载、缺失、整形等各种工程实际的工具库
* Matplotlib——最流行的Python数据绘图基本库
* SciPy——一组科学计算各种标准问题的包，提供相当于MATLAB的功能


numpy
================
* numpy array: 其中的元素要求同质 - 相同类型，相同大小
* numpy array data type: int64, float32. etc

* `numpy site`_
* `numpy repo`_


索引和切片

.. code-block::

    files[0:6:2] -- 从0到第5个元素，隔一个取

    arr = np.array([
        [1, 2, 3],
        [10, 20, 30]
    ])

    arr[0:len(arr),1:3] -- 取二维数组的第1列和第2列 arr[:,1:3]

pandas
================

Links
=================

* `codelab <https://colab.research.google.com/notebooks/intro.ipynb>`_


.. _numpy repo: https://github.com/numpy/numpy
.. _numpy site: https://numpy.org/