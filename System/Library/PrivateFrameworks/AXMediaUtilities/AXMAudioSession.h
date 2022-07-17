//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSMutableArray;

@interface AXMAudioSession : NSObject
{
    NSMutableArray *_notificationObserverTokens;	// 8 = 0x8
    AVAudioSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c84b
@property(retain, nonatomic) AVAudioSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *notificationObserverTokens; // @synthesize notificationObserverTokens=_notificationObserverTokens;
- (void)_handleSilenceSecondaryAudio:(unsigned long long)arg1;	// IMP=0x000000000002c7cf
- (void)_handleMediaServicesReset;	// IMP=0x000000000002c78e
- (void)_handleMediaServicesLost;	// IMP=0x000000000002c74d
- (void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2;	// IMP=0x000000000002c6f8
- (id)_stringForRouteChangeReason:(unsigned long long)arg1;	// IMP=0x000000000002c679
- (void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002c624
- (_Bool)activateSessionWithError:(id *)arg1;	// IMP=0x000000000002c4dc
- (_Bool)deactivateSessionWithError:(id *)arg1;	// IMP=0x000000000002c44c
- (void)dealloc;	// IMP=0x000000000002c2b6
- (id)init;	// IMP=0x000000000002ba68

@end
