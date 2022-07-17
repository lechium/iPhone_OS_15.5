//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSPAuthentication-Protocol.h>

@class NSString;

@interface NSPBAA : NSObject <NSPAuthentication>
{
}

+ (void)sendRequestForTokens:(id)arg1 tokenFetchURLSession:(id)arg2 tokenActivationQuery:(id)arg3 completionHandlerWithDataSign:(CDUnknownBlockType)arg4;	// IMP=0x0000000000062668
+ (void)sendRequestForTokens:(id)arg1 tokenFetchURLSession:(id)arg2 tokenActivationQuery:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000622a9
+ (void)fetchRequest:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061f8c
+ (void)authenticationFailure;	// IMP=0x0000000000061f48
+ (void)signData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061a39
+ (id)description;	// IMP=0x0000000000061a2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
