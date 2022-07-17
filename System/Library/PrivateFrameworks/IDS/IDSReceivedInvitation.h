//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSReceivedInvitation <NSSecureCoding>
{
    NSString *_fromID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d0b37
- (void).cxx_destruct;	// IMP=0x00000000000d0e92
@property(readonly, copy, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d0cbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d0b3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d084c
- (id)description;	// IMP=0x00000000000d0748
- (void)setContext:(id)arg1;	// IMP=0x00000000000d0737
- (void)setState:(long long)arg1;	// IMP=0x00000000000d072d
- (void)setSenderMergeID:(id)arg1;	// IMP=0x00000000000d071c
- (id)initWithfromID:(id)arg1 state:(long long)arg2 expirationDate:(id)arg3 uniqueID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000d068e

@end
