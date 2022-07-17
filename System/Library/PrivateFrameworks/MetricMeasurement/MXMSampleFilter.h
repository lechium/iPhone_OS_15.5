//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSSet;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_tagFilters;	// 8 = 0x8
    NSMutableDictionary *_attributeFilters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f8f7
+ (id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;	// IMP=0x000000000000ecd5
+ (id)filterWithAttributeFilters:(id)arg1;	// IMP=0x000000000000ec8c
+ (id)filterWithAttributeFilter:(id)arg1;	// IMP=0x000000000000ec43
+ (id)filterWithTagFilters:(id)arg1;	// IMP=0x000000000000ebfa
+ (id)filterWithTagFilter:(id)arg1;	// IMP=0x000000000000ebb1
- (void).cxx_destruct;	// IMP=0x000000000000fb85
@property(retain, nonatomic) NSMutableDictionary *attributeFilters; // @synthesize attributeFilters=_attributeFilters;
@property(retain, nonatomic) NSSet *tagFilters; // @synthesize tagFilters=_tagFilters;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f96d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f8ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f842
- (id)copy;	// IMP=0x000000000000f82e
- (_Bool)matchesSamplesWithTag:(id)arg1;	// IMP=0x000000000000f6d3
- (_Bool)matchesSamplesWithAttributes:(id)arg1;	// IMP=0x000000000000f579
- (_Bool)matchesSamplesWithAttribute:(id)arg1;	// IMP=0x000000000000f4df
- (_Bool)matchesSampleSet:(id)arg1;	// IMP=0x000000000000f437
- (_Bool)matchesSample:(id)arg1;	// IMP=0x000000000000f38f
@property(readonly, nonatomic, getter=finite) _Bool isFinite;
- (id)attributeFilterWithName:(id)arg1;	// IMP=0x000000000000f371
- (void)addAttributeFilters:(id)arg1;	// IMP=0x000000000000f1ab
- (id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2;	// IMP=0x000000000000eecc
- (id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;	// IMP=0x000000000000ee22
- (id)initWithAttributeFilters:(id)arg1;	// IMP=0x000000000000ee0e
- (id)initWithAttributeFilter:(id)arg1;	// IMP=0x000000000000edb2
- (id)initWithTagFilters:(id)arg1;	// IMP=0x000000000000ed9b
- (id)initWithTagFilter:(id)arg1;	// IMP=0x000000000000ed41

// Remaining properties
@property(readonly, nonatomic) _Bool finite;

@end
