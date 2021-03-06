//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAFrameRateRange {
    float minimum;
    float maximum;
    float preferred;
};

struct CCUILayoutPoint {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct CCUILayoutRect {
    struct CCUILayoutPoint _field1;
    struct CCUILayoutSize _field2;
};

struct CCUILayoutSize {
    unsigned long long width;
    unsigned long long height;
};

struct CCUIModuleLayoutSize {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

