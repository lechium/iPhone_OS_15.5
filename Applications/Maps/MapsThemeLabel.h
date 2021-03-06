//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MapsThemeLabel : UILabel
{
    CDUnknownBlockType _attributedTextProvider;	// 8 = 0x8
    CDUnknownBlockType _textColorProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004e987c
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
@property(copy, nonatomic) CDUnknownBlockType attributedTextProvider; // @synthesize attributedTextProvider=_attributedTextProvider;
- (void)_updateTextColor;	// IMP=0x00100000004e9785
- (void)_updateAttributedText;	// IMP=0x00100000004e966a
- (void)updateTheme;	// IMP=0x00100000004e95f6
- (void)didMoveToWindow;	// IMP=0x00100000004e9588
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000004e9466

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

