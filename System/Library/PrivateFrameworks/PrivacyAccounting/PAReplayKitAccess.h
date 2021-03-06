//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PAApplication;

@interface PAReplayKitAccess
{
    PAApplication *_broadcaster;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003993
+ (id)eventStreamIdentifier;	// IMP=0x000000000000356f
+ (id)accessWithAccessor:(id)arg1;	// IMP=0x0000000000003526
+ (id)accessWithAccessor:(id)arg1 fromBroadcaster:(id)arg2;	// IMP=0x00000000000034ba
- (void).cxx_destruct;	// IMP=0x0000000000003de3
@property(readonly, nonatomic) PAApplication *broadcaster; // @synthesize broadcaster=_broadcaster;
- (id)proto;	// IMP=0x0000000000003cfa
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000003c5e
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000003b2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003ab3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003a36
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000399b
- (id)description;	// IMP=0x0000000000003906
- (id)copyWithNewBroadcaster:(id)arg1;	// IMP=0x00000000000038a9
- (_Bool)isEqualToAccess:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000037c8
- (unsigned long long)hashWithOptions:(unsigned long long)arg1;	// IMP=0x000000000000376e
- (id)JSONObject;	// IMP=0x00000000000036ba
- (id)category;	// IMP=0x00000000000036ad
- (id)initWithAccessor:(id)arg1 broadcaster:(id)arg2 identifier:(id)arg3 kind:(long long)arg4;	// IMP=0x0000000000003623
- (id)initWithAccessor:(id)arg1;	// IMP=0x00000000000035f4
- (id)initWithAccessor:(id)arg1 fromBroadcaster:(id)arg2;	// IMP=0x000000000000357c

@end

