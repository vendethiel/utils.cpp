#pragma once

template<class>
class TemplateExtractor;

template<template<class> class P, class C>
struct TemplateExtractor<P<C>>
{
    template<class C2>
    using Parent = P<C2>;
    using Child = C;
};
