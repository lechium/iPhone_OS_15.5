//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>

@class ACAccount, AMSAuthenticateRequest, AMSProcessInfo, AMSURLSession, NSNumber, NSString;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAuthorizeMachineTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>
{
    _Bool _deauthorize;	// 8 = 0x8
    ACAccount *_validAccount;	// 16 = 0x10
    unsigned long long _authorizeReason;	// 24 = 0x18
    id <AMSBagProtocol> _bag;	// 32 = 0x20
    AMSProcessInfo *_clientInfo;	// 40 = 0x28
    NSNumber *_familyMemberAccountDSID;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    id <AMSRequestPresentationDelegate> _presentationDelegate;	// 64 = 0x40
    AMSAuthenticateRequest *_authenticateRequest;	// 72 = 0x48
    AMSURLSession *_session;	// 80 = 0x50
}

+ (id)bagKeySet;	// IMP=0x000000000009e18b
+ (id)createBagForSubProfile;	// IMP=0x000000000009cd20
+ (id)bagSubProfileVersion;	// IMP=0x000000000009cd13
+ (id)bagSubProfile;	// IMP=0x000000000009cd06
- (void).cxx_destruct;	// IMP=0x000000000009e304
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic, getter=isDeauthorize) _Bool deauthorize; // @synthesize deauthorize=_deauthorize;
@property(retain, nonatomic) AMSAuthenticateRequest *authenticateRequest; // @synthesize authenticateRequest=_authenticateRequest;
@property(nonatomic) __weak id <AMSRequestPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy) NSNumber *familyMemberAccountDSID; // @synthesize familyMemberAccountDSID=_familyMemberAccountDSID;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property unsigned long long authorizeReason; // @synthesize authorizeReason=_authorizeReason;
@property(retain, nonatomic) ACAccount *validAccount; // @synthesize validAccount=_validAccount;
- (id)account;	// IMP=0x000000000009e179
- (id)_keybagSyncStringForAccount:(id)arg1 withTransactionType:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000009e171
- (id)_checkRequestThrottle;	// IMP=0x000000000009df3a
- (id)_buildRequestTask;	// IMP=0x000000000009d802
- (id)_authenticate;	// IMP=0x000000000009d4ca
- (id)_buildRequestParametersWithError:(id *)arg1;	// IMP=0x000000000009d280
- (id)_buildRequest;	// IMP=0x000000000009cf31
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009cec6
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009ce40
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009cdba
- (id)_performAuthorization;	// IMP=0x000000000009c8eb
- (id)performAuthorization;	// IMP=0x000000000009c8d9
- (id)performDeauthorization;	// IMP=0x000000000009c8bc
- (id)initWithUsername:(id)arg1 authorizeReason:(unsigned long long)arg2 bag:(id)arg3 presentationDelegate:(id)arg4;	// IMP=0x000000000009c757
- (id)initWithAccount:(id)arg1 authorizeReason:(unsigned long long)arg2 bag:(id)arg3;	// IMP=0x000000000009c683

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

