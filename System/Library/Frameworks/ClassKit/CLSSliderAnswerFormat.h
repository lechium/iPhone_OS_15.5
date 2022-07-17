//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSSliderAnswerFormat <CLSRelationable>
{
    long long _maximum;	// 8 = 0x8
    long long _minimum;	// 16 = 0x10
    NSString *_leadingValueLabel;	// 24 = 0x18
    NSString *_trailingValueLabel;	// 32 = 0x20
    NSString *_midValueLabel;	// 40 = 0x28
    long long _type;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000050279
+ (id)relations;	// IMP=0x0000000000039a0b
- (void).cxx_destruct;	// IMP=0x0000000000051c5d
- (_Bool)isValueEqual:(id)arg1;	// IMP=0x000000000005168b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000510b3
- (_Bool)validateObject:(id *)arg1;	// IMP=0x0000000000050f18
- (void)mergeWithObject:(id)arg1;	// IMP=0x0000000000050ccd
- (void)setType:(long long)arg1;	// IMP=0x0000000000050c79
@property(readonly, nonatomic) long long type;
@property(copy, nonatomic) NSString *midValueLabel;
@property(copy, nonatomic) NSString *trailingValueLabel;
@property(copy, nonatomic) NSString *leadingValueLabel;
@property(nonatomic) long long minimum;
@property(nonatomic) long long maximum;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000506d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050405
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000050281
- (id)init;	// IMP=0x00000000000501fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
