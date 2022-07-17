//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSArray, NSString;

@interface _UIHyperregionUnion : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>
{
    unsigned long long __dimensions;	// 8 = 0x8
    NSArray *__regions;	// 16 = 0x10
    double *__temp;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000024bd9e
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024b9c8
- (void).cxx_destruct;	// IMP=0x000000000024bddc
@property(readonly, nonatomic) double *_temp; // @synthesize _temp=__temp;
@property(copy, nonatomic, setter=_setRegions:) NSArray *_regions; // @synthesize _regions=__regions;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000024bd22
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024bbe9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024bb2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024babc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024b9d0
- (_Bool)_isBoundaryCrossedFromPoint:(const double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000024b975
- (unsigned long long)_regionIndexForClosestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000024b7c8
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000024b7b6
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000024b396
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x000000000024b329

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
