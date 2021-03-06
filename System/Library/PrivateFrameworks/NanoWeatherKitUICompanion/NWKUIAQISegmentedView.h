//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NWKUIAQISegmentedModel;

@interface NWKUIAQISegmentedView : UIView
{
    CDStruct_45f46f65 _constraints;	// 8 = 0x8
    double _lastLayoutHeight;	// 16 = 0x10
    NSArray *_segmentViews;	// 24 = 0x18
    NWKUIAQISegmentedModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000003856
@property(readonly) NWKUIAQISegmentedModel *model; // @synthesize model=_model;
- (void)_addSubviewsFromModel:(id)arg1;	// IMP=0x00000000000035ad
- (void)updateModel:(id)arg1;	// IMP=0x000000000000351d
- (void)layoutSubviews;	// IMP=0x0000000000003342
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000003325
- (id)initWithModel:(id)arg1 constraints:(CDStruct_45f46f65)arg2;	// IMP=0x0000000000003277

@end

