######################
Concurrency Pattern
######################


并发模式分类
==========================

.. epigraph::

    You look at where you are going and where you are and it never makes sense,
    but then you look back at where you've been and a pattern seems to emerge.

    And if you project forward from that pattern, then sometimes you can come up with something.

    - Robert M. Pirsig

事件处理模式 Event Handling Pattern
--------------------------------------
* Reactor
* Proactor
* Asynchronous Completion Token
* Acceptor-Connector

同步模式
----------------------------------------
* Scopped Locking

* Strategized Locking

* Thread-safe Interface

提高并发性
----------------------------

* Promise

* Active Object

* Monitor Object


* Pipeline


不使用锁的情况下保证线程安全
----------------------------
* Immutable Object
* Thread Specific Storage
* Serial Thread Confinement

优雅地停止线程
----------------------------
* Two-phase Termination

线程协作
----------------------------


* Guarded Suspension

* Producer-Consumer



提高响应性
----------------------------
* Leader-follower

* Half-sync, Half-async

减少资源消耗
-----------------------------
* Thread Pool

* Serial Thread Confinement