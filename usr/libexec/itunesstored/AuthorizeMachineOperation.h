//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSURLConnectionResponse;

@interface AuthorizeMachineOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    _Bool _allowSilentAuthentication;	// 104 = 0x68
    NSString *_clientIdentifierHeader;	// 112 = 0x70
    NSNumber *_familyMemberAccountIdentifier;	// 120 = 0x78
    NSString *_keybagPath;	// 128 = 0x80
    long long _mdRetryCount;	// 136 = 0x88
    NSString *_mdSyncState;	// 144 = 0x90
    NSString *_reason;	// 152 = 0x98
    SSURLConnectionResponse *_response;	// 160 = 0xa0
    _Bool _shouldAddKeysToKeyBag;	// 168 = 0xa8
    _Bool _shouldPromptForCredentials;	// 169 = 0xa9
    id _token;	// 176 = 0xb0
    NSString *_userAgent;	// 184 = 0xb8
}

- (void)_setResponse:(id)arg1;	// IMP=0x002000000009df0b
- (_Bool)_runAuthorizationWithAuthentication:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000009d8e1
- (_Bool)_runAuthentication:(id *)arg1;	// IMP=0x001000000009d6ed
- (void)_run;	// IMP=0x001000000009d25d
- (id)_newURLOperation;	// IMP=0x001000000009cfca
- (id)_newMachineDataOperationWithResponse:(id)arg1;	// IMP=0x001000000009cf18
- (id)_newBodyDictionary;	// IMP=0x001000000009cdc6
- (id)_newAuthenticationContext;	// IMP=0x001000000009cca6
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009ca39
- (id)_accountIdentifier;	// IMP=0x001000000009c9e4
- (void)run;	// IMP=0x001000000009c9aa
@property(copy) NSString *userAgent;
@property _Bool shouldPromptForCredentials;
@property _Bool shouldAddKeysToKeyBag;
@property(copy) NSString *reason;
@property(copy) NSString *keybagPath;
@property(copy) NSNumber *familyMemberAccountIdentifier;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) id authorizationToken;
@property _Bool allowSilentAuthentication;
@property(copy) NSNumber *accountIdentifier;
@property(readonly) SSURLConnectionResponse *response;
- (void)dealloc;	// IMP=0x001000000009c213
- (id)initWithAuthorizationRequest:(id)arg1;	// IMP=0x001000000009c0ef

@end
