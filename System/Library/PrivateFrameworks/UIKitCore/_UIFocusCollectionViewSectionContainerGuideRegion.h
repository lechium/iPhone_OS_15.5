//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface _UIFocusCollectionViewSectionContainerGuideRegion
{
    UICollectionView *_collectionView;	// 8 = 0x8
    long long _section;	// 16 = 0x10
    struct CGRect _sectionFrame;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a75315
@property(nonatomic) struct CGRect sectionFrame; // @synthesize sectionFrame=_sectionFrame;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000a74bec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a74a6a
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000a74982

@end

