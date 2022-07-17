//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImpactFeedbackGenerator;
@protocol UISwitchControl;

@interface UISwitchVisualElement
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    id <UISwitchControl> _switchControl;	// 24 = 0x18
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 32 = 0x20
    double _enabledAlpha;	// 40 = 0x28
}

+ (_Bool)isFixedSize;	// IMP=0x00000000005a706e
+ (struct UIEdgeInsets)preferredAlignmentRectInsets;	// IMP=0x00000000005a6f75
+ (struct CGSize)preferredContentSize;	// IMP=0x00000000005a6f5f
- (void).cxx_destruct;	// IMP=0x00000000005a7123
@property(nonatomic) double enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(nonatomic) __weak id <UISwitchControl> switchControl; // @synthesize switchControl=_switchControl;
@property(copy) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setShowsOnOffLabel:(_Bool)arg1;	// IMP=0x00000000005a7068
- (struct CGSize)preferredContentSize;	// IMP=0x00000000005a7052
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;	// IMP=0x00000000005a7013
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005a6fac
- (void)setOffImage:(id)arg1;	// IMP=0x00000000005a6fa6
- (void)setOnImage:(id)arg1;	// IMP=0x00000000005a6fa0
- (void)tintColorDidChange;	// IMP=0x00000000005a6f9a
- (void)setThumbTintColor:(id)arg1;	// IMP=0x00000000005a6f94
- (void)setTintColor:(id)arg1;	// IMP=0x00000000005a6f8e
- (void)setOnTintColor:(id)arg1;	// IMP=0x00000000005a6f88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005a6ee0

@end
