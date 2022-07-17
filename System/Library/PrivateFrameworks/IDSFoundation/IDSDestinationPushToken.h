//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface IDSDestinationPushToken
{
    NSString *_alias;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000138619
- (void).cxx_destruct;	// IMP=0x0000000000138ab8
@property(readonly, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (id)destinationURIs;	// IMP=0x00000000001389d9
- (unsigned long long)hash;	// IMP=0x0000000000138995
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013898a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013884a
- (id)description;	// IMP=0x0000000000138794
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001386e6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000138621
- (id)initWithAlias:(id)arg1 pushToken:(id)arg2;	// IMP=0x0000000000138577

@end
