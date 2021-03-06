//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>
{
    NSArray *_codedValues;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000736d2
+ (id)codedValueCollectionWithCodedValues:(id)arg1;	// IMP=0x000000000007359c
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x0000000000073504
- (void).cxx_destruct;	// IMP=0x0000000000073cc9
@property(readonly, copy, nonatomic) NSArray *codedValues; // @synthesize codedValues=_codedValues;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000073b68
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000073a3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000738d9
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007388a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073811
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000736da
- (id)initWithCodedValues:(id)arg1;	// IMP=0x000000000007365f
- (id)init;	// IMP=0x00000000000735e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

