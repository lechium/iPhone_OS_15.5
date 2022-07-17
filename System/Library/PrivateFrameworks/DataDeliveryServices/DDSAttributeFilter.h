//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_filters;	// 8 = 0x8
}

+ (unsigned long long)hashSet:(id)arg1;	// IMP=0x00000000000047b8
+ (unsigned long long)hashDictionary:(id)arg1;	// IMP=0x000000000000460f
+ (unsigned long long)hashObject:(id)arg1;	// IMP=0x0000000000004553
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000422c
+ (id)attributeFilterWithDictionary:(id)arg1;	// IMP=0x0000000000003723
+ (id)attributeFilter;	// IMP=0x00000000000036fa
- (void).cxx_destruct;	// IMP=0x0000000000004935
@property(retain, nonatomic) NSMutableDictionary *filters; // @synthesize filters=_filters;
- (unsigned long long)hash;	// IMP=0x00000000000044f5
- (_Bool)isEqualToQueryFilter:(id)arg1;	// IMP=0x000000000000446b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004412
- (id)dumpDescription;	// IMP=0x000000000000438f
- (id)description;	// IMP=0x0000000000004234
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004035
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003fa7
- (void)removeAllowedValues:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000003f08
- (void)removeAllowedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000003e8a
- (void)addAllowedValues:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000003deb
- (void)addAllowedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000003d6d
- (_Bool)doesContainAttributes:(id)arg1;	// IMP=0x0000000000003c1d
- (id)entriesMatchingAttributes:(id)arg1;	// IMP=0x0000000000003a8a
- (void)addEntriesFromFilter:(id)arg1;	// IMP=0x0000000000003a1f
- (id)_setForKey:(id)arg1;	// IMP=0x000000000000394b
- (void)enumerateAllowedValuesAndKeys:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003870
- (id)allowedValuesForKey:(id)arg1;	// IMP=0x00000000000037ed
- (id)init;	// IMP=0x00000000000037df
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000376c

@end
