//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVAccountInfoProvider-Protocol.h>

@class NSData, NSDictionary, NSError, NSSet, NSString, NSURL;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>
{
    NSString *_scheme;	// 8 = 0x8
    NSString *_host;	// 16 = 0x10
    NSString *_serverRoot;	// 24 = 0x18
    long long _port;	// 32 = 0x20
    NSString *_user;	// 40 = 0x28
    NSString *_password;	// 48 = 0x30
    NSData *_identityPersist;	// 56 = 0x38
    NSURL *_principalURL;	// 64 = 0x40
    NSString *_accountID;	// 72 = 0x48
    NSDictionary *_serverHeaders;	// 80 = 0x50
    NSSet *_serverComplianceClasses;	// 88 = 0x58
    NSString *_userAgentHeader;	// 96 = 0x60
    _Bool _shouldFailAllTasks;	// 104 = 0x68
    _Bool _started;	// 105 = 0x69
    _Bool _success;	// 106 = 0x6a
    NSError *_error;	// 112 = 0x70
    id <CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000016a80
@property(retain, nonatomic) NSString *userAgentHeader; // @synthesize userAgentHeader=_userAgentHeader;
@property(retain, nonatomic) NSSet *serverComplianceClasses; // @synthesize serverComplianceClasses=_serverComplianceClasses;
@property(retain, nonatomic) NSDictionary *serverHeaders; // @synthesize serverHeaders=_serverHeaders;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) id <CoreDAVAccountInfoProvider> backingAccountInfoProvider; // @synthesize backingAccountInfoProvider=_backingAccountInfoProvider;
@property(nonatomic) _Bool shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain, nonatomic) NSData *identityPersist; // @synthesize identityPersist=_identityPersist;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *serverRoot; // @synthesize serverRoot=_serverRoot;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (id)getAppleIDSession;	// IMP=0x0000000000016891
- (_Bool)shouldUseOpportunisticSockets;	// IMP=0x0000000000016858
- (struct __CFURLStorageSession *)copyStorageSession;	// IMP=0x000000000001681f
- (_Bool)shouldSendClientInfoHeaderForURL:(id)arg1;	// IMP=0x00000000000167c3
- (_Bool)shouldHandleHTTPCookiesForURL:(id)arg1;	// IMP=0x0000000000016767
- (_Bool)handleShouldUseCredentialStorage;	// IMP=0x000000000001672e
- (_Bool)handleAuthenticateAgainstProtectionSpace:(id)arg1;	// IMP=0x00000000000163c7
- (_Bool)renewCredential;	// IMP=0x000000000001638e
- (_Bool)shouldTryRenewingCredential;	// IMP=0x0000000000016355
- (_Bool)shouldRetryUnauthorizedTask:(id)arg1;	// IMP=0x00000000000162f9
- (_Bool)shouldTurnModalOnBadPassword;	// IMP=0x00000000000162f1
- (_Bool)handleCertificateError:(id)arg1;	// IMP=0x00000000000162db
- (_Bool)handleTrustChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016197
- (id)oauthInfoProvider;	// IMP=0x0000000000016151
- (id)clientCertificateInfoProvider;	// IMP=0x000000000001610b
- (id)clientToken;	// IMP=0x00000000000160c5
- (void)clientTokenRequestedByServer;	// IMP=0x000000000001608e
- (id)additionalHeaderValues;	// IMP=0x0000000000016048
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016000
- (id)url;	// IMP=0x0000000000015eb4
@property(readonly, copy) NSString *description;
- (id)initWithAccountInfoProvider:(id)arg1;	// IMP=0x0000000000015a2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
