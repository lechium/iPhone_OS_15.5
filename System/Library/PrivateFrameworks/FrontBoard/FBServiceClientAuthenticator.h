//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>
{
    NSString *_entitlement;	// 8 = 0x8
    unsigned long long _credentials;	// 16 = 0x10
}

+ (int)_authenticateAuditToken:(id)arg1 entitlement:(id)arg2 credentials:(unsigned long long)arg3 error:(out id *)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x0000000000056c24
+ (id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3;	// IMP=0x0000000000056a6a
+ (_Bool)authenticateAuditToken:(CDStruct_6ad76789)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000005665d
+ (id)sharedForegroundUIAppClientAuthenticator;	// IMP=0x000000000005650d
+ (id)sharedUIAppClientAuthenticator;	// IMP=0x00000000000564a3
+ (id)sharedSystemClientAuthenticator;	// IMP=0x0000000000056439
- (void).cxx_destruct;	// IMP=0x000000000005704d
@property(readonly, nonatomic) unsigned long long credentials; // @synthesize credentials=_credentials;
@property(readonly, copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000057027
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000056fd7
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000056f2d
- (id)succinctDescription;	// IMP=0x0000000000056edd
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 forEntitlement:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000000569b8
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000005699f
- (int)authenticateClient:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x00000000000568ef
- (_Bool)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;	// IMP=0x0000000000056869
- (_Bool)authenticateAuditToken:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000056850
- (_Bool)authenticateAuditToken:(id)arg1;	// IMP=0x000000000005683c
- (_Bool)authenticateClient:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000056798
- (_Bool)authenticateClient:(id)arg1;	// IMP=0x0000000000056784
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;	// IMP=0x00000000000565f0
- (id)initWithEntitlement:(id)arg1;	// IMP=0x00000000000565d9
- (id)initWithCredentials:(unsigned long long)arg1;	// IMP=0x00000000000565b3
- (id)init;	// IMP=0x0000000000056577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
