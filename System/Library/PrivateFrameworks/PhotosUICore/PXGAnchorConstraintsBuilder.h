//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAnchorConstraints-Protocol.h>

@class NSArray, NSMutableArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints>
{
    NSMutableArray *_constraints;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003ca4d7
- (void)_keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned int)arg5 offset:(double)arg6;	// IMP=0x00000000003ca34b
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;	// IMP=0x00000000003ca326
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;	// IMP=0x00000000003ca300
- (void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4;	// IMP=0x00000000003ca1b4
- (void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;	// IMP=0x00000000003ca0a5
@property(readonly, copy, nonatomic) NSArray *constraints;
- (id)init;	// IMP=0x00000000003ca031

@end
