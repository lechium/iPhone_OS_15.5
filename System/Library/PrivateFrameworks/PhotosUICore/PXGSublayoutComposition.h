//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGCompositeLayout, PXGLayout, PXGSublayoutDataStore;

@interface PXGSublayoutComposition : NSObject
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    long long _lastSublayoutDataStoreVersion;	// 32 = 0x20
    PXGCompositeLayout *_compositeLayout;	// 40 = 0x28
    PXGSublayoutDataStore *_sublayoutDataStore;	// 48 = 0x30
    struct CGSize _referenceSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000008193b5
@property(readonly, nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(retain, nonatomic) PXGSublayoutDataStore *sublayoutDataStore; // @synthesize sublayoutDataStore=_sublayoutDataStore;
@property(nonatomic) __weak PXGCompositeLayout *compositeLayout; // @synthesize compositeLayout=_compositeLayout;
@property(nonatomic) long long lastSublayoutDataStoreVersion; // @synthesize lastSublayoutDataStoreVersion=_lastSublayoutDataStoreVersion;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000819202
- (long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)arg1;	// IMP=0x00000000008191d4
- (void)updateEstimatedSublayoutGeometries;	// IMP=0x000000000081912d
- (void)invalidateEstimatedSublayoutGeometries;	// IMP=0x0000000000819043
- (void)invalidateSublayoutContentSizes;	// IMP=0x0000000000818fd2
- (void)updateSublayoutAttributes;	// IMP=0x0000000000818fcc
- (void)invalidateSublayoutAttributes;	// IMP=0x0000000000818f13
- (void)updateEstimate;	// IMP=0x0000000000818c8d
- (void)enumerateSublayoutProvidersForRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000008189eb
- (struct UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1;	// IMP=0x00000000008189d8
@property(readonly, nonatomic) CDStruct_7dd43651 *sublayoutGeometries;
@property(readonly, nonatomic) long long numberOfSublayouts;
- (void)referenceSizeDidChange;	// IMP=0x0000000000818905
- (void)setReferenceSize:(struct CGSize)arg1;	// IMP=0x00000000008188cd
@property(readonly, nonatomic) PXGLayout *layout;

@end

