//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSObject, NSString, SSAuthenticationContext;
@protocol OS_xpc_object;

@interface SSVServerAuthenticateRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;	// 56 = 0x38
    NSObject<OS_xpc_object> *_dialog;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000118c82
@property(readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog; // @synthesize encodedDialog=_dialog;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyXPCEncoding;	// IMP=0x0000000000118bfb
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000118b16
- (void)startWithAuthenticateResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118866
- (id)initWithEncodedDialog:(id)arg1;	// IMP=0x00000000001187f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

