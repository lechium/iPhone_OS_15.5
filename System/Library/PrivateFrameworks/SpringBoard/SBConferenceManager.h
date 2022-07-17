//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUCallCenter;

@interface SBConferenceManager : NSObject
{
    _Bool _hasFaceTimeCapability;	// 8 = 0x8
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;	// 16 = 0x10
    TUCallCenter *_sharedCallCenter;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0000000000397ce3
+ (id)sharedInstance;	// IMP=0x000000000003c7b8
- (void).cxx_destruct;	// IMP=0x00000000003982d8
- (void)endFaceTime;	// IMP=0x0000000000398290
- (void)_faceTimeStateChanged:(id)arg1;	// IMP=0x00000000003980aa
- (void)dealloc;	// IMP=0x000000000039800c
- (_Bool)canStartFaceTime;	// IMP=0x0000000000397ff7
- (id)currentFaceTimeCall;	// IMP=0x0000000000090986
- (id)activeFaceTimeCall;	// IMP=0x000000000003ca4e
- (id)incomingFaceTimeCall;	// IMP=0x00000000000909cf
- (_Bool)inFaceTimeVideo;	// IMP=0x0000000000397fb3
- (_Bool)inFaceTime;	// IMP=0x0000000000090953
- (_Bool)activeFaceTimeCallExists;	// IMP=0x000000000003ca1b
- (_Bool)faceTimeInvitationExists;	// IMP=0x0000000000397f80
- (_Bool)faceTimeIsAvailable;	// IMP=0x0000000000397f27
- (_Bool)hasFaceTimeCapability;	// IMP=0x0000000000397f1e
- (id)init;	// IMP=0x0000000000397cfe

@end
