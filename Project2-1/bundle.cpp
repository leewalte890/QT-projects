#include "bundle.h"

Bundle::Bundle():Item()
{
    items = {};
}

void Bundle::setItems(vector<Technology *> nItems)
{
    items = nItems;
}

vector<Technology*> Bundle::getItems()
{
    return items;
}
