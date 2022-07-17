//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraEditKit/UIScrollViewDelegate-Protocol.h>

@class NSNumberFormatter, NSString;
@protocol CEKApertureSliderDelegate;

@interface CEKApertureSlider <UIScrollViewDelegate>
{
    id <CEKApertureSliderDelegate> _delegate;	// 8 = 0x8
    unsigned long long __minimumApertureIndex;	// 16 = 0x10
    unsigned long long __maximumApertureIndex;	// 24 = 0x18
    NSNumberFormatter *__decimalFormatter;	// 32 = 0x20
    NSNumberFormatter *__wholeNumberFormatter;	// 40 = 0x28
}

+ (_Bool)isValidApertureIndex:(unsigned long long)arg1;	// IMP=0x000000000001fac5
+ (_Bool)isValidApertureIndexFullStop:(unsigned long long)arg1;	// IMP=0x000000000001faa2
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;	// IMP=0x000000000001fa66
+ (id)validApertureValues;	// IMP=0x000000000001fa16
- (void).cxx_destruct;	// IMP=0x000000000002086f
@property(readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // @synthesize _wholeNumberFormatter=__wholeNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // @synthesize _decimalFormatter=__decimalFormatter;
@property(nonatomic, setter=_setMaximumApertureIndex:) unsigned long long _maximumApertureIndex; // @synthesize _maximumApertureIndex=__maximumApertureIndex;
@property(nonatomic, setter=_setMinimumApertureIndex:) unsigned long long _minimumApertureIndex; // @synthesize _minimumApertureIndex=__minimumApertureIndex;
@property(nonatomic) __weak id <CEKApertureSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1;	// IMP=0x0000000000020567
- (unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1;	// IMP=0x0000000000020544
- (unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1;	// IMP=0x0000000000020524
- (void)setMarkedApertureValueToNone;	// IMP=0x0000000000020512
- (void)setMarkedApertureValueClosestTo:(double)arg1;	// IMP=0x00000000000204d1
@property(readonly, nonatomic) double markedApertureValue;
@property(readonly, nonatomic) double apertureValue;
@property(readonly, nonatomic) double maximumApertureValue;
@property(readonly, nonatomic) double minimumApertureValue;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;	// IMP=0x0000000000020095
- (void)setApertureValueClosestTo:(double)arg1;	// IMP=0x000000000001ffb6
- (void)_updateMainTickMarkOffset;	// IMP=0x000000000001ff3f
- (id)valueText;	// IMP=0x000000000001fe86
- (double)horizontalValueLabelOffset;	// IMP=0x000000000001fe1b
- (void)_handleDidChangeValue:(id)arg1;	// IMP=0x000000000001fdcf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001fb19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
