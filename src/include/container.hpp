// container.hpp
// include some a basic container class
// to manage the dynamic environment.

#include "paragraph.hpp"

class container
{
  public:
    container();
    ~container();
    void addParagraph(paragraph *para);

  private:
    paragraph *codeBlocks;
};