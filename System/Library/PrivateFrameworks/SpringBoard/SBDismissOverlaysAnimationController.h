//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBDismissOverlaysAnimationController
{
    unsigned long long _dismissOptions;	// 32 = 0x20
}

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1;	// IMP=0x00000000000355a7
+ (_Bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;	// IMP=0x000000000003558e
@property(readonly, nonatomic) unsigned long long dismissOptions; // @synthesize dismissOptions=_dismissOptions;
- (id)animationSettings;	// IMP=0x00000000000bee08
- (void)_startAnimation;	// IMP=0x00000000000beed2
- (_Bool)_canBeInterrupted;	// IMP=0x00000000003a5245
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000bedc4
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x00000000003a5193

@end
