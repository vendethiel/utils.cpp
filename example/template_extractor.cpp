#include <iostream>
#include "template_extractor.hpp"

template<class T>
class Component {
};

struct Model {
  Model() {
    std::cout << "Model()\n";
  }
};

int main()
{
  typename TemplateExtractor<Component<Model>>::Child x{}; // prints Model()
}
