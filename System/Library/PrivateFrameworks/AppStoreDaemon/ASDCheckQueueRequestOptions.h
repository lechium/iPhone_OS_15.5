//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ASDCheckQueueRequestOptions
{
    unsigned long long _reason;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004acf
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004b8d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004ad7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004a8c
- (id)initWithReason:(unsigned long long)arg1;	// IMP=0x0000000000004a48

@end

