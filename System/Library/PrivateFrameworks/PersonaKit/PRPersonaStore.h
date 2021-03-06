//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface PRPersonaStore : NSObject
{
    NSXPCConnection *_personaServiceConnection;	// 8 = 0x8
    NSLock *_connectionLock;	// 16 = 0x10
    NSLock *_dataVendingFlagLock;	// 24 = 0x18
    _Bool _hasVendedData;	// 32 = 0x20
    NSXPCListenerEndpoint *_serviceListenerEndpoint;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000008310
- (void)_stopListeningForCacheChangeNotifications;	// IMP=0x0000000000008234
- (void)_startListeningForCacheChangeNotifications;	// IMP=0x0000000000007e58
- (void)setScreenName:(id)arg1 forAppleIDWithAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007ae7
- (void)setScreenName:(id)arg1 forPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000077d2
- (void)screenNameForAppleIDWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007446
- (void)screenNameForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007116
- (void)screenNameForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d8a
- (void)screenNameForEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000069fe
- (id)likenessWithUniqueID:(id)arg1;	// IMP=0x00000000000069e4
- (void)likenessesWithExternalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006670
- (void)donateLikeness:(id)arg1 forPhoneNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000632b
- (void)donateLikeness:(id)arg1 forEmailAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005fa0
- (void)handleAppleIDEvent:(unsigned long long)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005c55
- (void)donateLikenessData:(id)arg1 forSenderID:(id)arg2 isPhoneNumber:(_Bool)arg3;	// IMP=0x0000000000005c4f
- (id)likenessDataForPropagationToRecipient:(id)arg1 lastContactDate:(id)arg2;	// IMP=0x0000000000005c20
- (void)setLikenessVersionDigest:(unsigned char)arg1 forPhoneNumber:(id)arg2;	// IMP=0x0000000000005c1a
- (void)setLikenessVersionDigest:(unsigned char)arg1 forEmail:(id)arg2;	// IMP=0x0000000000005c14
- (unsigned char)likenessVersionDigestForPhoneNumber:(id)arg1;	// IMP=0x0000000000005bfa
- (unsigned char)likenessVersionDigestForEmail:(id)arg1;	// IMP=0x0000000000005be0
- (void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000058f6
- (void)removeLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000055e9
- (void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000052dc
- (void)saveLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fc7
- (void)setLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fb5
- (void)likenessForEmailAddress:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004c41
- (void)likenessForEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004c2a
- (void)likenessForPhoneNumber:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004872
- (void)likenessForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000485b
- (void)allLikenessesForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004540
- (void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000416d
- (void)currentLikenessForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004156
- (void)_setHasVendedData:(_Bool)arg1;	// IMP=0x0000000000004086
@property(readonly, nonatomic) _Bool hasVendedData;
- (void)dealloc;	// IMP=0x0000000000003fb4
- (id)initWithServiceListenerEndpoint:(id)arg1;	// IMP=0x0000000000003eac
- (id)init;	// IMP=0x0000000000003e98

@end

