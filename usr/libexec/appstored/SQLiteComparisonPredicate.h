//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SQLiteComparisonPredicate
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x00200000001b0d00
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x00100000001b0ce8
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x00100000001b0c58
- (void).cxx_destruct;	// IMP=0x00200000001b120a
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x00100000001b115d
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00100000001b109c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b0f60
- (unsigned long long)hash;	// IMP=0x00100000001b0ed3
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00100000001b0dfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b0df3

@end

