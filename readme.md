# PSONet

This an implementation of [**Particle Swarm Optimization**]() (PSO) to the (optimization) problem of discovering the **weights** & **biases** of a (fully connected) **neural net**.

The neural net is implemented from scratch in pure [`numpy`](https://numpy.org/). It *also* includes an implementation of **backpropagation** (*the backward pass is unrolled by hand, so some work is required in order to add more layers*).

The net is used to solve the [XOR problem](https://goodboychan.github.io/python/deep_learning/2020/09/16/01-XOR-Problem-in-Deep-Neural-Network.html).

The PSO implementation was adapted from [Machine Learning Mastery](https://machinelearningmastery.com/a-gentle-introduction-to-particle-swarm-optimization/).

The net is implemented as using row-major linear algebra: net inputs are row vectors (or, for batched inputs, 2D matrices where each row is a feature vector, and one batch is a column vector or row vectors), weight matrices right-multiply input row vectors (or input matrices, for batched inputs).

# dependencies

```
pip3 install numpy
```
