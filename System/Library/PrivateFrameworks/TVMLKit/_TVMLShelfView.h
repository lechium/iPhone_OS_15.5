//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVRowHosting_Collection-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVMLShelfView <TVRowHosting_Collection>
{
    double _showcaseFactor;	// 8 = 0x8
}

- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;	// IMP=0x000000000005285e
- (struct UIEdgeInsets)_selectionMarginsForCell:(id)arg1;	// IMP=0x0000000000052784
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
- (id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3 forShowcase:(_Bool)arg4;	// IMP=0x000000000005235c
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000052343
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;	// IMP=0x00000000000522db
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;	// IMP=0x00000000000522c7
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;	// IMP=0x0000000000052255
- (void)layoutSubviews;	// IMP=0x00000000000520cb
- (void)tv_setShowcaseFactor:(double)arg1;	// IMP=0x000000000005205d
- (id)init;	// IMP=0x000000000005202b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000051fd2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000051fa3
- (id)initWithFrame:(struct CGRect)arg1 _shelfViewLayout:(id)arg2;	// IMP=0x0000000000051f63
- (id)initWithFrame:(struct CGRect)arg1 shelfViewLayout:(id)arg2;	// IMP=0x0000000000051f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

