//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    _Bool _requiresSecureMessage;	// 8 = 0x8
    _Bool _allowsAnonymousMessage;	// 9 = 0x9
    _Bool _requiresAccountMessage;	// 10 = 0xa
    unsigned long long _transportRestriction;	// 16 = 0x10
    unsigned long long _roles;	// 24 = 0x18
}

+ (id)defaultSecurePolicy;	// IMP=0x00000000003c6896
+ (id)defaultPolicy;	// IMP=0x00000000003c6865
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(_Bool)arg1 allowsAnonymousMessage:(_Bool)arg2 requiresAccountMessage:(_Bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;	// IMP=0x00000000003c67dc
@property(readonly) unsigned long long roles; // @synthesize roles=_roles;
@property(readonly) unsigned long long transportRestriction; // @synthesize transportRestriction=_transportRestriction;
@property(readonly) _Bool requiresAccountMessage; // @synthesize requiresAccountMessage=_requiresAccountMessage;
@property(readonly) _Bool allowsAnonymousMessage; // @synthesize allowsAnonymousMessage=_allowsAnonymousMessage;
@property(readonly) _Bool requiresSecureMessage; // @synthesize requiresSecureMessage=_requiresSecureMessage;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c6589
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c657e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c642e
- (unsigned long long)hash;	// IMP=0x00000000003c63b4
- (id)__initWithRequiresSecureMessage:(_Bool)arg1 allowsAnonymousMessage:(_Bool)arg2 requiresAccountMessage:(_Bool)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5;	// IMP=0x00000000003c632d
- (id)init;	// IMP=0x00000000003c6285

@end

