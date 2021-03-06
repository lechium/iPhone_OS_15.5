//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000bf33
+ (id)defaultFields;	// IMP=0x001000000000bd13
- (void).cxx_destruct;	// IMP=0x002000000000c546
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x001000000000c486
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c3b9
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000c2e5
- (id)description;	// IMP=0x001000000000c247
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000c141
- (unsigned long long)hash;	// IMP=0x001000000000c0c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000c0bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000c042
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000bf3b
- (id)init;	// IMP=0x001000000000bf1a
- (id)initWithFields:(id)arg1;	// IMP=0x001000000000be4d

@end

