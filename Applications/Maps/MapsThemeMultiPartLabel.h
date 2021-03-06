//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMultiPartLabel.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface MapsThemeMultiPartLabel : MKMultiPartLabel
{
    CDUnknownBlockType _textColorProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000099eb47
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
- (void)_updateTextColor;	// IMP=0x001000000099ea39
- (void)updateTheme;	// IMP=0x001000000099e9c7
- (void)didMoveToWindow;	// IMP=0x001000000099e959
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000099e837

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

