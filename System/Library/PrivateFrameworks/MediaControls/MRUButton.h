//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPButton.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MRUVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MRUButton : MPButton <MRUVisualStylingProviderObserver>
{
    MRUVisualStylingProvider *_stylingProvider;	// 8 = 0x8
    long long _pointerStyle;	// 16 = 0x10
    double _cursorScale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008073a
@property(nonatomic) double cursorScale; // @synthesize cursorScale=_cursorScale;
@property(nonatomic) long long pointerStyle; // @synthesize pointerStyle=_pointerStyle;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
- (void)updateVisualStyling;	// IMP=0x0000000000080675
- (id)pointerStyleWithProposedEffect:(id)arg1 proposedShape:(id)arg2;	// IMP=0x000000000008037f
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000008036d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000008023c
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000801fb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000080168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
