//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrustedPeers/NSSecureCoding-Protocol.h>

@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>
{
    NSString *_prefix;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000021f3
+ (id)ruleWithPrefix:(id)arg1 category:(id)arg2;	// IMP=0x0000000000002167
- (void).cxx_destruct;	// IMP=0x000000000000213f
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002033
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001f85
- (id)description;	// IMP=0x0000000000001ef2
- (unsigned long long)hash;	// IMP=0x0000000000001e65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001dfe
- (_Bool)isEqualToCategoryRule:(id)arg1;	// IMP=0x0000000000001cf4

@end

