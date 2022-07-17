//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class NSDate, NSString, NTKCurvedColoringLabel, NTKCurvedRoundedRectShapeLayer;
@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationCornerView <CLKMonochromeComplicationView>
{
    NTKCurvedColoringLabel *_weekdayLabel;	// 8 = 0x8
    NTKCurvedColoringLabel *_previousDateLabel;	// 16 = 0x10
    NTKCurvedColoringLabel *_dateLabel;	// 24 = 0x18
    NTKCurvedColoringLabel *_nextDateLabel;	// 32 = 0x20
    NTKCurvedRoundedRectShapeLayer *_previousDatePlatter;	// 40 = 0x28
    NTKCurvedRoundedRectShapeLayer *_datePlatter;	// 48 = 0x30
    NTKCurvedRoundedRectShapeLayer *_nextDatePlatter;	// 56 = 0x38
    NSDate *_overrideDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000212878
- (void)updateMonochromeColor;	// IMP=0x00000000002124d5
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x00000000002120ab
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000021205d
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000211fd5
- (void)_updateDate;	// IMP=0x0000000000211dcd
- (void)_timeChanged:(id)arg1;	// IMP=0x0000000000211c5a
- (void)layoutSubviews;	// IMP=0x000000000021157d
- (id)_createAndAddLabelPlatterWithAngularWidth:(double)arg1 color:(id)arg2;	// IMP=0x0000000000211229
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 dayOffset:(long long)arg2;	// IMP=0x0000000000210f08
- (void)dealloc;	// IMP=0x0000000000210e93
- (id)init;	// IMP=0x0000000000210a20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
