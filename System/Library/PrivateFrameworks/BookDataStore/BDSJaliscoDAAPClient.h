//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookDataStore/BDSITunesAuthenticating-Protocol.h>
#import <BookDataStore/BDSJaliscoDAAPClientService-Protocol.h>

@class BDSServiceProxy, NSString;
@protocol BDSITunesAuthenticating;

@interface BDSJaliscoDAAPClient : NSObject <BDSITunesAuthenticating, BDSJaliscoDAAPClientService>
{
    _Bool _familyUpdateInProgress;	// 8 = 0x8
    id <BDSITunesAuthenticating> _authenticator;	// 16 = 0x10
    BDSServiceProxy *_serviceProxy;	// 24 = 0x18
}

+ (id)sharedClient;	// IMP=0x0000000000013985
- (void).cxx_destruct;	// IMP=0x000000000001411c
@property(retain, nonatomic) BDSServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) __weak id <BDSITunesAuthenticating> authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) _Bool familyUpdateInProgress; // @synthesize familyUpdateInProgress=_familyUpdateInProgress;
- (void)requestITunesAuthenticationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013f84
- (void)resetStaleJaliscoDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013f12
- (void)deleteItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013e8c
- (void)hideItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013e06
- (void)resetPurchasedTokenForStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013d80
- (void)setItemHidden:(_Bool)arg1 forStoreID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013cf2
- (void)updateFamilyPolitely:(_Bool)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013bbe
- (void)updatePolitelyAfterSignIn:(_Bool)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013b41
- (void)updatePolitelyAfterSignOut:(_Bool)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013ac4
- (void)updatePolitely:(_Bool)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013a47
- (id)init;	// IMP=0x00000000000139da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
