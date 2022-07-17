//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>

@class NSCollectionLayoutItem, NSString, UITraitCollection, _UICollectionLayoutItemSolverState;
@protocol NSCollectionLayoutContainer, _UICollectionLayoutSupplementaryEnrolling, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting>
{
    _Bool _layoutRTL;	// 8 = 0x8
    NSCollectionLayoutItem *_item;	// 16 = 0x10
    id <NSCollectionLayoutContainer> _container;	// 24 = 0x18
    UITraitCollection *_traitCollection;	// 32 = 0x20
    NSString *_errorDescription;	// 40 = 0x28
    _UICollectionLayoutItemSolverState *_solveResult;	// 48 = 0x30
    id <_UICollectionPreferredSizes> _preferredSizes;	// 56 = 0x38
    id <_UICollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;	// 64 = 0x40
    long long _solutionRecursionDepth;	// 72 = 0x48
    long long _maxFrameCount;	// 80 = 0x50
    unsigned long long _layoutAxis;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002a0bdf
- (id)auxillaryHostPreferredSizes;	// IMP=0x00000000002a0bc5
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x00000000002a0b15
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x00000000002a0aea
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x00000000002a0a93
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x00000000002a0a7e
- (id)auxillaryHostAuxillaryItems;	// IMP=0x00000000002a095d
- (id)auxillaryHostContainer;	// IMP=0x00000000002a0802
- (struct CGPoint)auxillaryHostAdditionalFrameOffset;	// IMP=0x00000000002a0768
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x00000000002a0760
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x00000000002a0723
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x00000000002a0610
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000299787

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
