//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface WBSURLCredentialCache : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSDictionary *_credentialCache;	// 16 = 0x10
    CDUnknownBlockType _credentialFetchBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005055
- (void)getCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005045
@property(readonly, copy) NSDictionary *credentials;
- (void)invalidate;	// IMP=0x0000000000005037
- (id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fbc
- (id)initWithCredentialFetchBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f1d

@end

