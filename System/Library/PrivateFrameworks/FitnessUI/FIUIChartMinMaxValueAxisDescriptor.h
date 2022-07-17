//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartAxisDescriptor-Protocol.h>

@class NSNumber, NSString, UIColor, UIFont;

@interface FIUIChartMinMaxValueAxisDescriptor : NSObject <FIUIChartAxisDescriptor>
{
    UIFont *_labelFont;	// 8 = 0x8
    UIColor *_unhighlightedLabelColor;	// 16 = 0x10
    UIColor *_highlightedLabelColor;	// 24 = 0x18
    double _axisDescriptorPadding;	// 32 = 0x20
    UIColor *_shadowColor;	// 40 = 0x28
    double _shadowBlur;	// 48 = 0x30
    NSNumber *_minValue;	// 56 = 0x38
    NSNumber *_maxValue;	// 64 = 0x40
    NSNumber *_highlightedValue;	// 72 = 0x48
    struct CGSize _shadowOffset;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000058eca
@property(retain, nonatomic) NSNumber *highlightedValue; // @synthesize highlightedValue=_highlightedValue;
@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double axisDescriptorPadding; // @synthesize axisDescriptorPadding=_axisDescriptorPadding;
@property(retain, nonatomic) UIColor *highlightedLabelColor; // @synthesize highlightedLabelColor=_highlightedLabelColor;
@property(retain, nonatomic) UIColor *unhighlightedLabelColor; // @synthesize unhighlightedLabelColor=_unhighlightedLabelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
- (Class)expectedDataType;	// IMP=0x0000000000058db0
- (id)axisLabels;	// IMP=0x0000000000058c90
- (id)_axisLabelForValue:(id)arg1 highlighted:(_Bool)arg2;	// IMP=0x0000000000058b96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideClippedLabels;
@property(retain, nonatomic) UIColor *highlightedSubLabelColor;
@property(nonatomic) unsigned long long labelAlignment;
@property(retain, nonatomic) UIColor *selectedLabelColor;
@property(nonatomic) double subAxisDescriptorPadding;
@property(nonatomic) unsigned long long subLabelAlignment;
@property(retain, nonatomic) UIFont *subLabelFont;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *unhighlightedSubLabelColor;

@end
