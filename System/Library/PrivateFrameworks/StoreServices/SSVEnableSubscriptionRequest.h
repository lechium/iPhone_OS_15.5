//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSAuthenticationContext;

@interface SSVEnableSubscriptionRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000116fcb
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyXPCEncoding;	// IMP=0x0000000000116f6f
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000116e90
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000116c85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

