//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient;

@interface AKAuthorizationCredentialStateController : NSObject
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000060b07
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)_verifyUserID:(id)arg1;	// IMP=0x001000000006093c
- (id)_fetchDeveloperTeamWithClientID:(id)arg1;	// IMP=0x0010000000060700
- (id)_fetchDeveloperTeamWithTeamID:(id)arg1;	// IMP=0x001000000006049f
- (_Bool)_isDeviceTrustedForRequest:(id)arg1;	// IMP=0x00100000000603ac
- (_Bool)_demoModeEnabled;	// IMP=0x001000000006035c
- (void)_getCredentialStateWithStateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f3fd
- (long long)_internalCredentialStateForUserState:(long long)arg1 error:(id)arg2;	// IMP=0x001000000005f395
- (void)_verifyClientInformationForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f1a3
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f078
- (long long)getInternalCredentialStateForCredentialRequestContext:(id)arg1;	// IMP=0x001000000005ebc0
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e5ae
- (id)initWithClient:(id)arg1;	// IMP=0x001000000005e543
- (id)init;	// IMP=0x001000000005e518

@end

