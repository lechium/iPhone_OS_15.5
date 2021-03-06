//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _UIDynamicAnimationActiveValue : NSObject
{
    double _value;	// 8 = 0x8
    double _minimumActiveValue;	// 16 = 0x10
    double _maximumActiveValue;	// 24 = 0x18
    int _type;	// 32 = 0x20
    double _boundaryPull;	// 40 = 0x28
    id _applier;	// 48 = 0x30
    unsigned int _lowerBoundary:1;	// 56 = 0x38
    unsigned int _upperBoundary:1;	// 56 = 0x38
}

+ (id)activeValue:(double)arg1 ofType:(int)arg2;	// IMP=0x00000000000a8d78
+ (id)upperBoundary:(double)arg1 ofType:(int)arg2;	// IMP=0x00000000000a8d3a
+ (id)lowerBoundary:(double)arg1 ofType:(int)arg2;	// IMP=0x00000000000a8cfc
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double maximumActiveValue; // @synthesize maximumActiveValue=_maximumActiveValue;
@property(nonatomic) double minimumActiveValue; // @synthesize minimumActiveValue=_minimumActiveValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000000a92fc
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;	// IMP=0x00000000000a9015
- (_Bool)_isUpperBoundary;	// IMP=0x00000000000a9008
- (_Bool)_isLowerBoundary;	// IMP=0x00000000000a8ffd
- (void)_setBoundaryPull:(double)arg1;	// IMP=0x00000000000a8ff2
- (double)_boundaryPull;	// IMP=0x00000000000a8fe7
- (CDUnknownBlockType)_applier;	// IMP=0x00000000000a8e39
- (void)dealloc;	// IMP=0x00000000000a8dfe
- (id)init;	// IMP=0x00000000000a8daa

@end

