//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UIContentConfiguration-Protocol.h>

@class NSAttributedString, NSString, UIImage, UIListContentImageProperties, UIListContentTextProperties;

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins:1;
        unsigned int hasCustomizedDirectionalLayoutMargins:1;
        unsigned int hasCustomizedPrefersSideBySideTextAndSecondaryText:1;
        unsigned int hasCustomizedImageToTextPadding:1;
        unsigned int hasCustomizedTextToSecondaryTextHorizontalPadding:1;
        unsigned int hasCustomizedTextToSecondaryTextVerticalPadding:1;
    } _configurationFlags;	// 8 = 0x8
    _Bool _prefersSideBySideTextAndSecondaryText;	// 12 = 0xc
    unsigned long long _axesPreservingSuperviewLayoutMargins;	// 16 = 0x10
    double _imageToTextPadding;	// 24 = 0x18
    double _textToSecondaryTextHorizontalPadding;	// 32 = 0x20
    double _textToSecondaryTextVerticalPadding;	// 40 = 0x28
    long long _defaultStyle;	// 48 = 0x30
    UIListContentImageProperties *_imageProperties;	// 56 = 0x38
    UIListContentTextProperties *_textProperties;	// 64 = 0x40
    UIListContentTextProperties *_secondaryTextProperties;	// 72 = 0x48
    struct NSDirectionalEdgeInsets _directionalLayoutMargins;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e87148
+ (id)extraProminentInsetGroupedHeaderConfiguration;	// IMP=0x0000000000e86a84
+ (id)prominentInsetGroupedHeaderConfiguration;	// IMP=0x0000000000e865e2
+ (id)_prominentInsetGroupedHeaderConfiguration;	// IMP=0x0000000000e865d0
+ (id)_interactiveInsetGroupedHeaderConfiguration;	// IMP=0x0000000000e865be
+ (id)sidebarHeaderConfiguration;	// IMP=0x0000000000e86005
+ (id)accompaniedSidebarSubtitleCellConfiguration;	// IMP=0x0000000000e85f86
+ (id)sidebarSubtitleCellConfiguration;	// IMP=0x0000000000e85d97
+ (id)accompaniedSidebarCellConfiguration;	// IMP=0x0000000000e85cfa
+ (id)sidebarCellConfiguration;	// IMP=0x0000000000e85b11
+ (id)groupedFooterConfiguration;	// IMP=0x0000000000e854ce
+ (id)groupedHeaderConfiguration;	// IMP=0x0000000000e853ce
+ (id)plainFooterConfiguration;	// IMP=0x0000000000e852d4
+ (id)plainHeaderConfiguration;	// IMP=0x0000000000e851d7
+ (id)valueCellConfiguration;	// IMP=0x0000000000e84aeb
+ (id)subtitleCellConfiguration;	// IMP=0x0000000000e8475a
+ (id)cellConfiguration;	// IMP=0x0000000000e842bc
- (void).cxx_destruct;	// IMP=0x0000000000e88685
@property(readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties; // @synthesize secondaryTextProperties=_secondaryTextProperties;
@property(readonly, nonatomic) UIListContentTextProperties *textProperties; // @synthesize textProperties=_textProperties;
@property(readonly, nonatomic) UIListContentImageProperties *imageProperties; // @synthesize imageProperties=_imageProperties;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)arg1;	// IMP=0x0000000000e885c4
- (void)_setSwiftBridgingTextProperties:(id)arg1;	// IMP=0x0000000000e88521
- (void)_setSwiftBridgingImageProperties:(id)arg1;	// IMP=0x0000000000e884b5
@property(nonatomic) double textToSecondaryTextVerticalPadding;
@property(nonatomic) double textToSecondaryTextHorizontalPadding;
@property(nonatomic) double imageToTextPadding;
@property(nonatomic) _Bool prefersSideBySideTextAndSecondaryText;
@property(nonatomic) struct NSDirectionalEdgeInsets directionalLayoutMargins;
@property(nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property(copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIImage *image;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e87977
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e8787e
- (id)makeContentView;	// IMP=0x0000000000e87848
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e87525
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e87150
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x0000000000e86b03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

