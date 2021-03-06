//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct CGVector {
    double dx;
    double dy;
};

struct pair<CGPoint, CGPoint> {
    struct CGPoint _field1;
    struct CGPoint _field2;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct pair<CGPoint, CGPoint> {
    struct CGPoint _field1;
    struct CGPoint _field2;
} pair_bb682d61;

