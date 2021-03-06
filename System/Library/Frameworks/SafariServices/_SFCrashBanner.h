//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SFThemeColorEffectView, UIButton, UILabel, UIVisualEffectView, _SFBarTheme;

@interface _SFCrashBanner : UIView
{
    SFThemeColorEffectView *_backdrop;	// 8 = 0x8
    UIVisualEffectView *_contentEffectView;	// 16 = 0x10
    UIView *_separator;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    struct CGSize _cachedLabelLayoutSize;	// 40 = 0x28
    _SFBarTheme *_theme;	// 56 = 0x38
    UIButton *_closeButton;	// 64 = 0x40
    unsigned long long _type;	// 72 = 0x48
    NSString *_bannerText;	// 80 = 0x50
    NSString *_manuallyWrappedBannerText;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000054033
@property(readonly, nonatomic) NSString *manuallyWrappedBannerText; // @synthesize manuallyWrappedBannerText=_manuallyWrappedBannerText;
@property(readonly, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) _SFBarTheme *theme; // @synthesize theme=_theme;
- (void)setBannerText:(id)arg1 manuallyWrappedBannerText:(id)arg2;	// IMP=0x0000000000053f25
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000053f00
- (void)layoutSubviews;	// IMP=0x0000000000053dbd
- (struct CGSize)_labelLayoutSizeForWidth:(double)arg1;	// IMP=0x0000000000053c89
- (_Bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;	// IMP=0x0000000000053b4a
@property(copy, nonatomic) NSString *backdropGroupName;
- (void)setTheme:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000053a3a
- (id)_bannerTheme;	// IMP=0x00000000000539e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000052efd

@end

