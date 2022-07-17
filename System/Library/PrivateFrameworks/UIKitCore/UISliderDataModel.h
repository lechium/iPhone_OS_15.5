//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIImage, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

@interface UISliderDataModel : NSObject
{
    struct __CFDictionary *_contentLookup;	// 8 = 0x8
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;	// 16 = 0x10
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;	// 24 = 0x18
    _Bool _continuous;	// 32 = 0x20
    _Bool _showValue;	// 33 = 0x21
    _Bool _thumbEnabled;	// 34 = 0x22
    _Bool _trackEnabled;	// 35 = 0x23
    _Bool _minimumTrackVisible;	// 36 = 0x24
    _Bool _enabled;	// 37 = 0x25
    _Bool _highlighted;	// 38 = 0x26
    _Bool _selected;	// 39 = 0x27
    _Bool _tracking;	// 40 = 0x28
    float _value;	// 44 = 0x2c
    float _minValue;	// 48 = 0x30
    float _maxValue;	// 52 = 0x34
    UIImage *_minimumValueImage;	// 56 = 0x38
    UIImage *_maximumValueImage;	// 64 = 0x40
    UIColor *_minTintColor;	// 72 = 0x48
    UIColor *_maxTintColor;	// 80 = 0x50
    UIColor *_thumbTintColor;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000135c4ba
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isMinimumTrackVisible) _Bool minimumTrackVisible; // @synthesize minimumTrackVisible=_minimumTrackVisible;
@property(nonatomic, getter=isTrackEnabled) _Bool trackEnabled; // @synthesize trackEnabled=_trackEnabled;
@property(nonatomic, getter=isThumbEnabled) _Bool thumbEnabled; // @synthesize thumbEnabled=_thumbEnabled;
@property(nonatomic) _Bool showValue; // @synthesize showValue=_showValue;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maxTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minTintColor;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(retain, nonatomic) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property(retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
- (id)maximumTrackImageForState:(unsigned long long)arg1;	// IMP=0x000000000135c18b
- (id)minimumTrackImageForState:(unsigned long long)arg1;	// IMP=0x000000000135c0e8
- (id)thumbImageForState:(unsigned long long)arg1;	// IMP=0x000000000135c045
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000135bf39
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000135be76
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000135bd6a
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000135bca7
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;	// IMP=0x000000000135ba59
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000135b996
- (id)_contentForState:(unsigned long long)arg1;	// IMP=0x000000000135b96c
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000135b8fc
- (_Bool)setMaximumValue:(float)arg1;	// IMP=0x000000000135b8ca
@property(readonly, nonatomic) float maximumValue; // @synthesize maximumValue=_maxValue;
- (_Bool)setMinimumValue:(float)arg1;	// IMP=0x000000000135b88d
@property(readonly, nonatomic) float minimumValue; // @synthesize minimumValue=_minValue;
- (_Bool)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3;	// IMP=0x000000000135b792
- (_Bool)setValue:(float)arg1;	// IMP=0x000000000135b766
@property(readonly, nonatomic) float value; // @synthesize value=_value;
- (void)dealloc;	// IMP=0x000000000135b71c
- (id)init;	// IMP=0x000000000135b6c8

@end
