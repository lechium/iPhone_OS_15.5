//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary;

@interface TKSEPKey : NSObject
{
    LAContext *_authContext;	// 8 = 0x8
}

+ (_Bool)canUseSEPLocally;	// IMP=0x00000000000122a2
+ (void)setContextErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012289
+ (void)set_testing_callerEntitlements:(id)arg1;	// IMP=0x0000000000012270
+ (id)_testing_callerEntitlements;	// IMP=0x0000000000012257
+ (void)setupKeybagForTesting:(_Bool)arg1;	// IMP=0x000000000001223e
+ (void)setClientToken:(id)arg1;	// IMP=0x000000000001222a
+ (id)clientToken;	// IMP=0x0000000000012219
+ (_Bool)isGibraltar;	// IMP=0x0000000000012200
+ (_Bool)isDaytona;	// IMP=0x00000000000121e7
+ (_Bool)hasSEP;	// IMP=0x00000000000121ce
- (void).cxx_destruct;	// IMP=0x0000000000014385
@property(retain, nonatomic) LAContext *authContext; // @synthesize authContext=_authContext;
- (id)initWithAttributes:(id)arg1 authContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012faf
@property(readonly, nonatomic) NSDictionary *attributes;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000012cd7
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012c85
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012c33
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012be1
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012b8f
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x0000000000012b3d
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x0000000000012aeb
@property(readonly, nonatomic) _Bool systemKey;
@property(readonly, nonatomic) long long keySize;
@property(readonly, nonatomic) id keyType;
@property(readonly, nonatomic) struct __SecAccessControl *accessControl;
@property(readonly, nonatomic) id objectID;
- (id)initLocalWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000128ec
- (id)initLocalWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000012834
- (id)initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000012757
- (id)initWithObjectID:(id)arg1 authContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000124d9
- (id)_initWithAuthContext:(id)arg1;	// IMP=0x000000000001246e

@end

