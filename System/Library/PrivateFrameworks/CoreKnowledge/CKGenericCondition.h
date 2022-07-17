//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding>
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *negated;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_sql;	// 40 = 0x28
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0000000000056120
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000560b0
- (void).cxx_destruct;	// IMP=0x0000000000056c00
- (id)init;	// IMP=0x0000000000056bb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056b50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056410
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000055fe0
- (_Bool)evaluateOn:(id)arg1;	// IMP=0x0000000000055e80
- (id)or:(id)arg1;	// IMP=0x00000000000558d0
- (id)and:(id)arg1;	// IMP=0x00000000000557d0
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(_Bool)arg3;	// IMP=0x00000000000556b0
- (id)initWithValue:(_Bool)arg1;	// IMP=0x0000000000055590
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSPredicate *predicate;

@end
