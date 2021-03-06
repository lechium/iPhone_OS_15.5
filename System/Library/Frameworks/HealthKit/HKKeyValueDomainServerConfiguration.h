//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HKKeyValueDomainServerConfiguration
{
    long long _category;	// 8 = 0x8
    NSString *_domainName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012d438
- (void).cxx_destruct;	// IMP=0x000000000012d5c4
@property(readonly, copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012d502
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012d440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012d3aa
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2;	// IMP=0x000000000012d31e

@end

