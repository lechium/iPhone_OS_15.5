//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutDimension *_firstLayoutDimension;	// 64 = 0x40
    double _secondLayoutDimensionMultiplier;	// 72 = 0x48
    NSLayoutDimension *_secondLayoutDimension;	// 80 = 0x50
}

@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;	// IMP=0x0000000000021be2
- (double)_valueInEngine:(id)arg1;	// IMP=0x0000000000021b6d
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;	// IMP=0x0000000000021a69
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2;	// IMP=0x0000000000021a4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021998
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000217a2
- (void)dealloc;	// IMP=0x000000000002174a
- (id)initWithAnchor:(id)arg1;	// IMP=0x00000000000216b1
- (id)initWithDimension:(id)arg1 plusDimension:(id)arg2 times:(double)arg3;	// IMP=0x0000000000021613

@end

