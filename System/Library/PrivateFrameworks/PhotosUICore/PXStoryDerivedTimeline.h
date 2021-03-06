//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PXStoryTimeline;

@interface PXStoryDerivedTimeline
{
    id <PXStoryTimeline> _originalTimeline;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005c7428
@property(readonly, nonatomic) id <PXStoryTimeline> originalTimeline; // @synthesize originalTimeline=_originalTimeline;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;	// IMP=0x00000000005c7395
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;	// IMP=0x00000000005c7313
- (id)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(id)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;	// IMP=0x00000000005c7285
- (CDStruct_e83c9415)timeRangeForSegmentWithIdentifier:(long long)arg1;	// IMP=0x00000000005c7213
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;	// IMP=0x00000000005c71c0
- (struct CGRect)frameForSegmentWithIdentifier:(long long)arg1;	// IMP=0x00000000005c7153
- (void)enumerateSegmentsInTimeRange:(CDStruct_e83c9415)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005c70c4
- (long long)numberOfSegments;	// IMP=0x00000000005c7080
- (id)clipWithIdentifier:(long long)arg1;	// IMP=0x00000000005c7021
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005c6f84
- (struct CGSize)originalSize;	// IMP=0x00000000005c6f2a
- (struct CGSize)size;	// IMP=0x00000000005c6ed0
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000005c6e6d
- (id)initWithOriginalTimeline:(id)arg1;	// IMP=0x00000000005c6dff
- (id)init;	// IMP=0x00000000005c6d85

@end

