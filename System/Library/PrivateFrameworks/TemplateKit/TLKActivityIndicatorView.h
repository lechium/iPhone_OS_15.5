//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TLKLabel, TLKMultilineText, UIActivityIndicatorView;

@interface TLKActivityIndicatorView
{
    TLKMultilineText *_subtitle;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    TLKLabel *_subtitleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000bcf9
@property(retain, nonatomic) TLKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
- (id)subtitleLabelText;	// IMP=0x000000000000bc4e
- (void)observedPropertiesChanged;	// IMP=0x000000000000bb84
- (void)tlk_updateForAppearance:(id)arg1;	// IMP=0x000000000000b6bf
- (void)didMoveToWindow;	// IMP=0x000000000000b67e
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000000b63d
- (_Bool)usesDefaultLayoutMargins;	// IMP=0x000000000000b635
- (id)setupContentView;	// IMP=0x000000000000b437

@end

