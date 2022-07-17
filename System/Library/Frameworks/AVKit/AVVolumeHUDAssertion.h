//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/MPVolumeDisplaying-Protocol.h>

@class NSString, UIWindowScene;
@protocol AVVolumeHUDAssertionDelegate;

__attribute__((visibility("hidden")))
@interface AVVolumeHUDAssertion : NSObject <MPVolumeDisplaying>
{
    _Bool _prefersSystemVolumeHUDHidden;	// 8 = 0x8
    id <AVVolumeHUDAssertionDelegate> _delegate;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSString *_sceneIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003264a
@property(nonatomic) _Bool prefersSystemVolumeHUDHidden; // @synthesize prefersSystemVolumeHUDHidden=_prefersSystemVolumeHUDHidden;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) __weak id <AVVolumeHUDAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemController;	// IMP=0x00000000000325ad
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003229c
- (id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x00000000000321ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
@property(readonly) Class superclass;

@end
