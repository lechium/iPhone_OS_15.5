//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AttentionAwareness/NSSecureCoding-Protocol.h>

@interface AWRemoteAttentionEvent <NSSecureCoding>
{
    long long _usagePage;	// 40 = 0x28
    long long _usage;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c712
@property(readonly, nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) long long usagePage; // @synthesize usagePage=_usagePage;
- (id)description;	// IMP=0x000000000001c5de
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(struct AWRemoteMetadata *)arg3;	// IMP=0x000000000001c57e
- (void)validateMask;	// IMP=0x000000000001c546
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c329
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c1f0

@end

