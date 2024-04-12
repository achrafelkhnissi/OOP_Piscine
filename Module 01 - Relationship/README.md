# Module 01 - Relationship

In Object Oriented Programming, objects can have relationships with one another, al-
lowing them to interact and share data. The way objects are related to one another can
be categorized into different types based on the degree of their dependence and ownership. 

For example, there is a relationship where one object is made up of other objects,
with the contained objects being necessary for the functionality of the main object. This
relationship represents the strong bond between objects and the reliance of one object on
the other.

Another type of relationship exists where objects have a loose connection, and one
object can function independently without the other. This relationship represents the
loose coupling between objects.

Finally, there is a relationship where objects have a common responsibility, but neither
object is dependent on the other. This relationship represents a collaboration between
objects.

## Composition
Composition is a design principle in object-oriented programming (OOP) where a class is composed of other classes. It represents a "**has-a**" relationship between classes.

In our case, the `Worker` class is composed of `Position` and `Statistic` structures. This means that a `Worker` "**has a**" `Position` and "**has a**" `Statistic`.

Composition allows for code reuse, as the composed classes can be used in multiple other classes. It also provides a way to model complex systems by breaking them down into simpler, manageable parts.

In terms of lifetime dependency, the composed objects are typically created when the containing object is created and destroyed when the containing object is destroyed, unless otherwise managed. This is in contrast to inheritance, which represents an "**is-a**" relationship and where the lifetime of the base class is independent of the derived class.

## Aggregation

Aggregation is a design principle in object-oriented programming (OOP) where one class is used as part of another class, but still maintains its independence. It represents a "**has-a**" relationship, similar to composition, but with a key difference in the lifetime of the objects.

In our code, the `Worker` class aggregates a `Shovel` object. This means that a `Worker` "**has a**" `Shovel`. However, unlike composition, the `Shovel` object could exist independently of the `Worker` object.

For example, if the `Worker` object is destroyed, the `Shovel` object could continue to exist. This is because, in aggregation, the lifetime of the aggregated objects is not tied to the lifetime of the aggregating object.

In terms of code, aggregation often involves using pointers or references to the aggregated objects, rather than directly including them as member variables. This allows the aggregated objects to exist independently of the aggregating object.

## Inheritance

Inheritance is a fundamental concept in Object-Oriented Programming (OOP). It allows you to define a class based on another class. This helps to promote code reusability and makes the code easier to maintain.

The class that is being inherited from is called the "base class" or "parent class", and the class that is doing the inheriting is called the "derived class" or "child class".

A derived class inherits all the member variables and member functions of the base class, but has the ability to override or extend the behavior of the base class. This allows you to create more specific classes based on a general class.

For example, in our code, `Tool` is a base class and `Shovel` and `Hammer` are derived classes. The `Shovel` and `Hammer` classes inherit the use, getNumberOfUses, setWorker, getWorker, and destructor methods from `Tool`, and can override these methods to provide their own specific behavior.

Inheritance is a "**is-a**" relationship. It allows you to create a new class that is a type of an existing class. For example, in our code, `Shovel` and `Hammer` are types of `Tool`. They inherit all the properties and behaviors of `Tool` but can also add or override them. Inheritance is useful for code reusability and polymorphism.

## Association
