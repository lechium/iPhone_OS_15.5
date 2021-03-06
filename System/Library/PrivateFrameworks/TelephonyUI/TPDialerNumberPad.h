//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString, TPDialerSoundController;
@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad <TPDialerKeypadProtocol>
{
    _Bool _playsSounds;	// 8 = 0x8
    id <TPDialerKeypadDelegate> _delegate;	// 16 = 0x10
    TPDialerSoundController *_soundController;	// 24 = 0x18
}

+ (id)dialerNumberPadNumericCharacters;	// IMP=0x0000000000024b84
+ (id)dialerNumberPadFullCharacters;	// IMP=0x00000000000248d4
- (void).cxx_destruct;	// IMP=0x0000000000025520
@property(retain) TPDialerSoundController *soundController; // @synthesize soundController=_soundController;
@property id <TPDialerKeypadDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playsSounds; // @synthesize playsSounds=_playsSounds;
- (long long)indexForHighlightedKey;	// IMP=0x00000000000254ba
- (void)highlightKeyAtIndex:(long long)arg1;	// IMP=0x00000000000254b4
- (void)buttonLongPressed:(id)arg1;	// IMP=0x0000000000025160
- (void)buttonDown:(id)arg1;	// IMP=0x000000000002503f
- (void)buttonUpOutside:(id)arg1;	// IMP=0x0000000000024f0f
- (void)buttonUp:(id)arg1;	// IMP=0x0000000000024e3a
- (void)buttonTapped:(id)arg1;	// IMP=0x0000000000024e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

