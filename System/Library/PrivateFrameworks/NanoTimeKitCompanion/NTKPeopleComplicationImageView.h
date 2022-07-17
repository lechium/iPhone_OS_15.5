//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKFullColorImageView-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationImageView-Protocol.h>

@class CLKImageProvider, CLKSymbolImageProvider, NSString, UIColor, UIImageView, UILabel;
@protocol CLKMonochromeFilterProvider;

@interface NTKPeopleComplicationImageView : UIView <NTKComplicationImageView, CLKFullColorImageView>
{
    UILabel *_nameLabel;	// 8 = 0x8
    UIImageView *_profileImageView;	// 16 = 0x10
    UIView *_ringView;	// 24 = 0x18
    double _monochromeTintAmount;	// 32 = 0x20
    _Bool _usingPersonSymbol;	// 40 = 0x28
    CLKSymbolImageProvider *_personSymbolImageProvider;	// 48 = 0x30
    _Bool _usesLegibility;	// 56 = 0x38
    CLKImageProvider *_imageProvider;	// 64 = 0x40
    UIColor *_color;	// 72 = 0x48
    UIColor *_overrideColor;	// 80 = 0x50
    id <CLKMonochromeFilterProvider> _filterProvider;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002a89bf
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)updateMonochromeColor;	// IMP=0x00000000002a8665
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x00000000002a8386
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000002a82ed
- (void)resumeLiveFullColorImageView;	// IMP=0x00000000002a82e7
- (void)pauseLiveFullColorImageView;	// IMP=0x00000000002a82e1
- (id)initFullColorImageViewWithDevice:(id)arg1;	// IMP=0x00000000002a82af
- (void)layoutSubviews;	// IMP=0x00000000002a7a1d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a780b

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
