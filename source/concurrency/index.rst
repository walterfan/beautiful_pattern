#################
Design Pattern
#################


.. toctree::
   :maxdepth: 1
   :caption: Contents:

   overview
   reactor
   proactor

   active_object
   monitor_object

   architecture_pattern
   concurrency_pattern
   

.. contents:: 大纲
   :depth: 3

GRASP Pattern
=====================

GoF Pattern
=====================

J2EE Pattern
=====================


Concurrency Pattern
=====================


Stability Pattern 
=====================

* 超时模式

* 快速失败模式

* 断路器模式

* 舱壁模式: 
  做好隔离，避免一荣俱荣，一损俱损
  different thread pool, process/instance, server, cluster, rack, region

* 稳态: 
  避免人为无计划的更改产线上的软件包，数据和配置
  做好监控，限制缓存，滚动日志，定时清除无用数据

* 快速失败，快速恢复，快速的主备切换

* 定期健康体检

* 维护一套与产线相同的环境进行破坏性和高压力的测试和验证

* 通过中间件解耦

* 做好分流和限流

* 做好背压机制： 
  让生产者根据消费者的能力来调整生产能力

* 刹车系统和手动模式


