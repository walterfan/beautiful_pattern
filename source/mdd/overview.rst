##############
Overview
##############

.. contents::
    :local:



度量驱动开模式
==============

定时汇报器模式
--------------



过滤器模式
--------------


拦截器模式
--------------

Tools 
====================

* 压力测试工具: jmeter, locust
* 监控工具
* 插桩工具
* 代码或应用剖析工具

time
---------------------
* real: 从开始到结束实际所耗费的时间,包括进程休眠,阻塞(如等待 I/O 完成的时间)
* user: 花费在用户态中的实际CPU 时间长度,不包括任何休眠和等待I/O的时间
* sys: 在内核中程序所执行的系统调用所耗费的时间

python module timeit
---------------------------
.. code-block::

    python3 -m timeit 'x*x for x in range(100)'

Topics
==========================
Thread Pool Monitor
--------------------------
* what is thread pool
* how to create and use the thread pool
* how to monitor thread pool
* how to optimize thread pool