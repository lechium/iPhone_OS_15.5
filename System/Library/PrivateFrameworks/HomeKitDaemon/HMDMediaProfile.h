//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLocking-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaSession, HMFUnfairLock, NSDictionary, NSString;

@interface HMDMediaProfile <HMFLogging, HMFLocking>
{
    HMFUnfairLock *_lock;	// 16 = 0x10
    HMDMediaSession *_mediaSession;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009db5c2
+ (id)logCategory;	// IMP=0x00000000009db592
+ (id)uniqueIdentifierFromAccessory:(id)arg1;	// IMP=0x00000000009db486
+ (id)sessionNamespace;	// IMP=0x00000000009db456
+ (id)namespace;	// IMP=0x00000000009db426
- (void).cxx_destruct;	// IMP=0x00000000009da674
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009da1b4
- (void)sessionAudioControlUpdated:(id)arg1;	// IMP=0x00000000009d9df2
- (void)handleSessionVolumeUpdatedNotification:(id)arg1;	// IMP=0x00000000009d9954
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;	// IMP=0x00000000009d98c6
- (void)handleSessionUpdatedNotification:(id)arg1;	// IMP=0x00000000009d952c
- (void)_handleSetPower:(id)arg1;	// IMP=0x00000000009d9526
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009d92e6
- (void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009d91dc
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(_Bool)arg2;	// IMP=0x00000000009d816b
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;	// IMP=0x00000000009d7fbb
- (void)_handleMediaResponses:(id)arg1 message:(id)arg2;	// IMP=0x00000000009d7edf
- (void)_handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x00000000009d7e5b
- (_Bool)_updateAudioControl:(id)arg1;	// IMP=0x00000000009d7d2e
- (void)_handleRefreshPlayback:(id)arg1;	// IMP=0x00000000009d7caa
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x00000000009d7c2b
- (void)_handleSetPlayback:(id)arg1;	// IMP=0x00000000009d7ba7
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x00000000009d7b28
@property(retain) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) unsigned long long capability;
- (void)unregisterForNotifications;	// IMP=0x00000000009d7880
- (void)registerForNotifications;	// IMP=0x00000000009d77c9
- (void)registerForMessages;	// IMP=0x00000000009d75dc
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x00000000009d74f3
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000009d7477
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x00000000009d7405
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000009d7375
- (void)unlock;	// IMP=0x00000000009d7358
- (void)lock;	// IMP=0x00000000009d733b
@property(readonly, copy) NSString *mediaRouteID;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
