//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/UISpringLoadedInteractionEffect-Protocol.h>

@class NSString;
@protocol SBFSpringLoadedInteractionEffectDelegate, UISpringLoadedInteractionEffect;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;	// 8 = 0x8
    _Bool _useFastBlinkAnimation;	// 16 = 0x10
    id <SBFSpringLoadedInteractionEffectDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008cfa
@property(nonatomic) __weak id <SBFSpringLoadedInteractionEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useFastBlinkAnimation; // @synthesize useFastBlinkAnimation=_useFastBlinkAnimation;
- (id)fastBlinkAnimation;	// IMP=0x0000000000008c3d
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x0000000000008a62
- (id)init;	// IMP=0x00000000000089aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

