//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface ASDIAPInfoRequestOptions
{
    NSArray *_adamIds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003596b
- (void).cxx_destruct;	// IMP=0x0000000000035984
@property(readonly, nonatomic) NSArray *adamIds; // @synthesize adamIds=_adamIds;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035820
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000357f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000357a5
- (id)initWithAdamIds:(id)arg1;	// IMP=0x000000000003572b

@end
