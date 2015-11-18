#pragma once

template<class>
class ExtractTemplate;

template<template<class> class P, class C>
struct ExtractTemplate<P<C>>
{
    template<class C2>
    using Parent = P<C2>;
    using Child = C;
};
