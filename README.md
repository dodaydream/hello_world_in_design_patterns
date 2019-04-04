# Hello World in design patterns

This project contains Hello Worlds implemented by design patterns in C++

Currently under development

# List of design patterns

| Name                                                         | Description                                                  | State |
| ------------------------------------------------------------ | ------------------------------------------------------------ | -------------------- |
| [Abstract factory](https://en.wikipedia.org/wiki/Abstract_factory_pattern) | Provide an interface for creating *families* of related or dependent objects without specifying their concrete classes. | ✓ |
| [Builder](https://en.wikipedia.org/wiki/Builder_pattern)     | Separate the construction of a complex object from its representation, allowing the same construction process to create various representations. | ✓ |
| [Factory method](https://en.wikipedia.org/wiki/Factory_method_pattern) | Define an interface for creating a *single* object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses. | ✓ |
| [Lazy initialization](https://en.wikipedia.org/wiki/Lazy_initialization) | Tactic of delaying the creation of an object, the calculation of a value, or some other expensive process until the first time it is needed. This pattern appears in the GoF catalog as "virtual proxy", an implementation strategy for the [Proxy](https://en.wikipedia.org/wiki/Proxy_pattern) pattern. |  |
| [Prototype](https://en.wikipedia.org/wiki/Prototype_pattern) | Specify the kinds of objects to create using a prototypical instance, and create new objects from the 'skeleton' of an existing object, thus boosting performance and keeping memory footprints to a minimum. |  |
| [Singleton](https://en.wikipedia.org/wiki/Singleton_pattern) | Ensure a class has only one instance, and provide a global point of access to it. | ✓ |
| [Adapter](https://en.wikipedia.org/wiki/Adapter_pattern), Wrapper, or Translator | Convert the interface of a class into another interface clients expect. An adapter lets classes work together that could not otherwise because of incompatible interfaces. The enterprise integration pattern equivalent is the translator. | ✓ |
| [Bridge](https://en.wikipedia.org/wiki/Bridge_pattern)       | Decouple an abstraction from its implementation allowing the two to vary independently. | ✓ |
| [Composite](https://en.wikipedia.org/wiki/Composite_pattern) | Compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly. |  |
| [Decorator](https://en.wikipedia.org/wiki/Decorator_pattern) | Attach additional responsibilities to an object dynamically keeping the same interface. Decorators provide a flexible alternative to subclassing for extending functionality. | ✓ |
| [Facade](https://en.wikipedia.org/wiki/Facade_pattern)       | Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use. |  |
| [Flyweight](https://en.wikipedia.org/wiki/Flyweight_pattern) | Use sharing to support large numbers of similar objects efficiently. |  |
| [Proxy](https://en.wikipedia.org/wiki/Proxy_pattern)         | Provide a surrogate or placeholder for another object to control access to it. |  |
| [Chain of responsibility](https://en.wikipedia.org/wiki/Chain_of_responsibility_pattern) | Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the request along the chain until an object handles it. |  |
| [Command](https://en.wikipedia.org/wiki/Command_pattern)     | Encapsulate a request as an object, thereby allowing for the parameterization of clients with different requests, and the queuing or logging of requests. It also allows for the support of undoable operations. |  |
| [Interpreter](https://en.wikipedia.org/wiki/Interpreter_pattern) | Given a language, define a representation for its grammar along with an interpreter that uses the representation to interpret sentences in the language. |  |
| [Iterator](https://en.wikipedia.org/wiki/Iterator_pattern)   | Provide a way to access the elements of an [aggregate](https://en.wikipedia.org/wiki/Aggregate_pattern) object sequentially without exposing its underlying representation. |  |
| [Mediator](https://en.wikipedia.org/wiki/Mediator_pattern)   | Define an object that encapsulates how a set of objects interact. Mediator promotes [loose coupling](https://en.wikipedia.org/wiki/Loose_coupling) by keeping objects from referring to each other explicitly, and it allows their interaction to vary independently. |  |
| [Memento](https://en.wikipedia.org/wiki/Memento_pattern)     | Without violating encapsulation, capture and externalize an object's internal state allowing the object to be restored to this state later. |  |
| [Observer](https://en.wikipedia.org/wiki/Observer_pattern) or [Publish/subscribe](https://en.wikipedia.org/wiki/Publish/subscribe) | Define a one-to-many dependency between objects where a state change in one object results in all its dependents being notified and updated automatically. |  |
| [State](https://en.wikipedia.org/wiki/State_pattern)         | Allow an object to alter its behavior when its internal state changes. The object will appear to change its class. |  |
| [Strategy](https://en.wikipedia.org/wiki/Strategy_pattern)   | Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it. |  |
| [Template method](https://en.wikipedia.org/wiki/Template_method_pattern) | Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure. |  |
| [Visitor](https://en.wikipedia.org/wiki/Visitor_pattern)     | Represent an operation to be performed on the elements of an object structure. Visitor lets a new operation be defined without changing the classes of the elements on which it operates. |  |

