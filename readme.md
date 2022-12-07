# PSONet

This an implementation of [**Particle Swarm Optimization**]() (PSO) to the (optimization) problem of discovering the **weights** & **biases** of a (fully connected) **neural net**.

The neural net is implemented from scratch in pure [`numpy`](https://numpy.org/). It *also* includes an implementation of **backpropagation** (*the backward pass is unrolled by hand, so some work is required in order to add more layers*).

The net is used to solve the [XOR problem](https://youtube.com/watch?v=kNPGXgzxoHw).

The PSO implementation was adapted from [Machine Learning Mastery](https://machinelearningmastery.com/a-gentle-introduction-to-particle-swarm-optimization/).

# dependencies

```
pip3 install numpy
```
