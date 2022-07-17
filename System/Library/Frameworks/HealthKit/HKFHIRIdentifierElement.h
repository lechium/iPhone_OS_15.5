//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCodingCollection, NSArray, NSString;

@interface HKFHIRIdentifierElement : NSObject <NSSecureCoding, NSCopying, HKCodedObject>
{
    NSArray *_typeCodings;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    HKConcept *_type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012ebd6
+ (id)identifierWithTypeCodings:(id)arg1 value:(id)arg2;	// IMP=0x000000000012e7ed
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x000000000012e723
- (void).cxx_destruct;	// IMP=0x000000000012f6be
@property(readonly, copy, nonatomic) NSArray *typeCodings; // @synthesize typeCodings=_typeCodings;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012f52b
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012f3cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012f101
@property(readonly) unsigned long long hash;
- (void)_setType:(id)arg1;	// IMP=0x000000000012eff9
@property(readonly, copy, nonatomic) HKConcept *type;
- (void)_setTypeCodings:(id)arg1;	// IMP=0x000000000012eef0
@property(readonly, copy, nonatomic) HKMedicalCodingCollection *typeCodingCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012ee82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012ed9f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012ebde
@property(readonly, copy) NSString *description;
- (id)initWithTypeCodings:(id)arg1 value:(id)arg2;	// IMP=0x000000000012e8d3
- (id)init;	// IMP=0x000000000012e859

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
