//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PULayoutSampledSectioning
{
    _Bool _sectioningIsValid;	// 32 = 0x20
    _Bool _samplingIsValid;	// 33 = 0x21
    long long _numberOfRealSections;	// 40 = 0x28
    long long _numberOfVisualSections;	// 48 = 0x30
    NSArray *_realSectionIndexesForVisualSection;	// 56 = 0x38
    long long *_visualSectionForRealSection;	// 64 = 0x40
    long long *_numberOfItemsForRealSection;	// 72 = 0x48
    long long *_numberOfRealItemsForVisualSection;	// 80 = 0x50
    long long *_startIndexInVisualSectionForRealSection;	// 88 = 0x58
    id *_sectionSamplers;	// 96 = 0x60
    long long *_maximumNumberOfVisibleItemsForVisualSection;	// 104 = 0x68
    _Bool _hasSomeSampling;	// 112 = 0x70
    long long _lastHitRealSectionIndex;	// 120 = 0x78
    long long _lastHitVisualSectionIndex;	// 128 = 0x80
    long long _lastHitRangeIndex;	// 136 = 0x88
    _Bool _supportsSamplingAndSectionGrouping;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000020d04f
@property(nonatomic) _Bool supportsSamplingAndSectionGrouping; // @synthesize supportsSamplingAndSectionGrouping=_supportsSamplingAndSectionGrouping;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath)arg1;	// IMP=0x000000000020d01a
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;	// IMP=0x000000000020cdad
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000020c6b0
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000020c545
- (long long)visualSectionForRealSection:(long long)arg1;	// IMP=0x000000000020c475
- (long long)mainRealSectionForVisualSection:(long long)arg1;	// IMP=0x000000000020c370
- (struct PUSimpleIndexPath)visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath)arg1 isMainItem:(_Bool *)arg2;	// IMP=0x000000000020c1a3
- (struct PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath)arg1;	// IMP=0x000000000020bfd5
- (struct PUSimpleIndexPath)_mainRealItemIndexPathForVisualSection:(long long)arg1 andUnsampledItemIndex:(long long)arg2;	// IMP=0x000000000020bdd6
- (long long)_unsampledItemIndexForVisualItemIndex:(long long)arg1 visualSection:(long long)arg2;	// IMP=0x000000000020bd1a
- (long long)_visualItemIndexForUnsampledItemIndex:(long long)arg1 visualSection:(long long)arg2 isMainItem:(_Bool *)arg3;	// IMP=0x000000000020bc30
- (id)_sectionSamplerForVisualSection:(long long)arg1;	// IMP=0x000000000020b4a0
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;	// IMP=0x000000000020b3ae
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;	// IMP=0x000000000020b265
- (void)_cacheSectioningIfNeeded;	// IMP=0x000000000020a807
- (void)invalidateSections;	// IMP=0x000000000020a7be
- (_Bool)hasSomeSampling;	// IMP=0x000000000020a782
- (void)invalidateSampling;	// IMP=0x000000000020a739
- (void)dealloc;	// IMP=0x000000000020a6e6
- (void)_discardSectioningCache;	// IMP=0x000000000020a64b
- (void)_discardSamplingCache;	// IMP=0x000000000020a59d
- (id)init;	// IMP=0x000000000020a52c

@end

