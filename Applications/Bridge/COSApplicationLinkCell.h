//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSApplicationLabelAccessoryView, COSInstallSpinnerButton, NSString, UIButton, UIColor;

@interface COSApplicationLinkCell
{
    _Bool _useInlineInstallButtonUI;	// 144 = 0x90
    COSApplicationLabelAccessoryView *_labelAccessoryView;	// 152 = 0x98
    UIButton *_installButton;	// 160 = 0xa0
    COSInstallSpinnerButton *_installSpinnerButton;	// 168 = 0xa8
    NSString *_appID;	// 176 = 0xb0
    UIColor *_enabledColor;	// 184 = 0xb8
    UIColor *_disabledColor;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000001d9ba
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) UIColor *enabledColor; // @synthesize enabledColor=_enabledColor;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) COSInstallSpinnerButton *installSpinnerButton; // @synthesize installSpinnerButton=_installSpinnerButton;
@property(retain, nonatomic) UIButton *installButton; // @synthesize installButton=_installButton;
@property(nonatomic) _Bool useInlineInstallButtonUI; // @synthesize useInlineInstallButtonUI=_useInlineInstallButtonUI;
@property(retain, nonatomic) COSApplicationLabelAccessoryView *labelAccessoryView; // @synthesize labelAccessoryView=_labelAccessoryView;
- (void)updateProgress:(id)arg1;	// IMP=0x001000000001d744
- (id)cachedInstalledProgressByAppID;	// IMP=0x001000000001d6ef
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x001000000001d258
- (void)layoutSubviews;	// IMP=0x001000000001c786
- (void)stopInstallation;	// IMP=0x001000000001c551
- (void)installApp;	// IMP=0x001000000001bd13
- (void)installNanoBundle:(id)arg1 forDevice:(id)arg2;	// IMP=0x001000000001b92d
- (id)device;	// IMP=0x001000000001b923
- (void)dealloc;	// IMP=0x001000000001b8ae
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x001000000001b27a

@end
