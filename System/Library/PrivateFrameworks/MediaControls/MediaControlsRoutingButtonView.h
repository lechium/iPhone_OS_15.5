//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingButtonView : MPButton
{
    _Bool _userInterfaceStyleSwitchingEnabled;	// 8 = 0x8
    long long _currentMode;	// 16 = 0x10
    long long _deviceType;	// 24 = 0x18
    CCUICAPackageView *_packageView;	// 32 = 0x20
}

+ (_Bool)_cursorInteractionEnabled;	// IMP=0x0000000000040044
- (void).cxx_destruct;	// IMP=0x000000000003ffc9
@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) _Bool userInterfaceStyleSwitchingEnabled; // @synthesize userInterfaceStyleSwitchingEnabled=_userInterfaceStyleSwitchingEnabled;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;	// IMP=0x000000000003fe4c
- (void)_updateGlyphState;	// IMP=0x000000000003fd7d
- (void)_updateGlyphPackage;	// IMP=0x000000000003fc64
- (id)_glyphResource;	// IMP=0x000000000003fbb4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003fb0c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003fa73
- (void)layoutSubviews;	// IMP=0x000000000003f909
- (void)setAlpha:(double)arg1;	// IMP=0x000000000003f881
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003f7c1

@end

