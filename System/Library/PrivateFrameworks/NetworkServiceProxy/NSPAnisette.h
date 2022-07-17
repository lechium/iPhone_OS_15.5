//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSPAuthentication-Protocol.h>

@class NSString;

@interface NSPAnisette : NSObject <NSPAuthentication>
{
}

+ (void)sendRequestForTokens:(id)arg1 tokenFetchURLSession:(id)arg2 tokenActivationQuery:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000061770
+ (void)authenticationFailure;	// IMP=0x000000000006176a
+ (id)description;	// IMP=0x000000000006175d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
