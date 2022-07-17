//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView <_UIStatusBarDisplayable>
{
    _Bool _showsAlternateText;	// 8 = 0x8
    long long _fontStyle;	// 16 = 0x10
    NSString *_alternateText;	// 24 = 0x18
    NSString *_originalText;	// 32 = 0x20
    NSTimer *_alternateTextTimer;	// 40 = 0x28
    struct UIEdgeInsets _alignmentRectInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000e0e039
@property(readonly, nonatomic) NSTimer *alternateTextTimer; // @synthesize alternateTextTimer=_alternateTextTimer;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) _Bool showsAlternateText; // @synthesize showsAlternateText=_showsAlternateText;
@property(copy, nonatomic) NSString *alternateText; // @synthesize alternateText=_alternateText;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (void)didMoveToWindow;	// IMP=0x0000000000e0deee
- (void)_updateAlternateTextTimer;	// IMP=0x0000000000e0dce0
- (void)setText:(id)arg1;	// IMP=0x0000000000e0dc18
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000e0db0c
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly, nonatomic) _Bool wantsCrossfade;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e0da9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;

@end
