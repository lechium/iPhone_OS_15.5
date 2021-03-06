//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002de7d
+ (id)defaultFields;	// IMP=0x000000000002dc5d
- (void).cxx_destruct;	// IMP=0x000000000002e490
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x000000000002e3d0
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e303
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002e22f
- (id)description;	// IMP=0x000000000002e191
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e08b
- (unsigned long long)hash;	// IMP=0x000000000002e010
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e005
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002df8c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002de85
- (id)init;	// IMP=0x000000000002de64
- (id)initWithFields:(id)arg1;	// IMP=0x000000000002dd97

@end

