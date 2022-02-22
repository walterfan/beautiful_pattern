#################
Service Mesh
#################


主要特性
================

* 可见性
  - 运行时指标
  - 分布式跟踪


* 可管理性
  - 服务发现
  - 运行时动态路由

* 健壮性
  - 超时重试
  - 请求最后期限
  - 熔断

* 安全性
  - 服务间访问控制
  - 加密通信


技术选型
==================

.. list-table:: Service Service Productio
   :widths: 20 40 40
   :header-rows: 1

   * - 功能
     - Linkerd
     - Istio

   * - 代理
     - Finagle + jettu
     - Envoy
   * - 熔断
     - 支持
     - 支持
   * - 动态路由请求
     - 可设置 Linkerd 的 dtab 规则
     - 支持
   * - 流量分流
     - 支持增量和受控的方式实现分流
     - 支持
   * - 服务发现
     - 支持 consul, zookeeper, k8s
     - 支持
   * - 负载均衡
     - 支持多种负载均衡算法
     - 支持多种负载均衡算法
   * - TLS 安全通信
     - 支持
     - 支持

   * - 访问控制
     - 不支持
     - 支持基于 RABC 的访问控制

   * - 可见性
     - 支持 zipkin, influxdb, prometheus, statsd
     - 支持

   * - 部署模式
     - sidecar 可 per-host 模式
     - sidecar

   * - 控制平面
     - Namerd
     - Pilot, Mixer, Citadel

   * - 协议支持
     - HTTP, gRPC
     - HTTP, gRPC, TCP

   * - 运行平台
     - 平台无关
     - k8s