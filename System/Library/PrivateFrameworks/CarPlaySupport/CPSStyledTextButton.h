//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIFont;

@interface CPSStyledTextButton
{
    UIFont *_fontOverride;	// 8 = 0x8
}

+ (id)buttonWithTextButton:(id)arg1;	// IMP=0x000000000004daf3
- (void).cxx_destruct;	// IMP=0x000000000004dfaa
@property(retain, nonatomic) UIFont *fontOverride; // @synthesize fontOverride=_fontOverride;
- (_Bool)canBecomeFocused;	// IMP=0x000000000004df7d
- (id)_externalUnfocusedBorderColor;	// IMP=0x000000000004df64
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004ded1
- (id)_buttonFont;	// IMP=0x000000000004ddbf

@end

