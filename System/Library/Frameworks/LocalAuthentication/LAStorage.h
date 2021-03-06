//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSXPCConnection;
@protocol LASecureStorageService;

@interface LAStorage : NSObject
{
    unsigned int _instanceId;	// 8 = 0x8
    long long _domain;	// 16 = 0x10
    LAContext *_authenticationContext;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    id <LASecureStorageService> _remoteObjectProxy;	// 40 = 0x28
}

+ (id)objectDescription:(id)arg1;	// IMP=0x000000000000776d
+ (unsigned int)newInstanceId;	// IMP=0x0000000000007759
- (void).cxx_destruct;	// IMP=0x0000000000009440
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, nonatomic) id <LASecureStorageService> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) LAContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(readonly, nonatomic) long long domain; // @synthesize domain=_domain;
- (void)_callProxyBlock:(CDUnknownBlockType)arg1 authenticationPolicy:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009042
- (long long)_authenticationPolicyForKey:(long long)arg1 selector:(SEL)arg2;	// IMP=0x0000000000009023
- (void)_bootstrapServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008e9b
- (void)_resetConnection;	// IMP=0x0000000000008e69
- (void)_connectToEndpoint:(id)arg1;	// IMP=0x0000000000008aae
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)arg1 proxyBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000892d
- (_Bool)boolForKey:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000087dd
- (_Bool)setBool:(_Bool)arg1 forKey:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000000869b
- (void)boolForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000852a
- (void)setBool:(_Bool)arg1 forKey:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000084a3
- (void)removeObjectForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008135
- (void)objectForKey:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007d35
- (void)setObject:(id)arg1 forKey:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007859
- (id)description;	// IMP=0x000000000000767c
- (void)dealloc;	// IMP=0x0000000000007611
- (id)initWithDomain:(long long)arg1 authenticationContext:(id)arg2;	// IMP=0x000000000000750d

@end

