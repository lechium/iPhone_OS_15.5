//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry
{
    id _value;	// 8 = 0x8
    HKCharacteristicType *_dataType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000427646
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x00000000004271b7
- (void).cxx_destruct;	// IMP=0x0000000000427891
@property(readonly, nonatomic) HKCharacteristicType *dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004277a5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042764e

@end

