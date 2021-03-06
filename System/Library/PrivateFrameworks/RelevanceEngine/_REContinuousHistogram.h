//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RESortedDictionary;

@interface _REContinuousHistogram
{
    unsigned long long _binningValue;	// 8 = 0x8
    RESortedDictionary *_values;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002f491
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f2e4
- (void)_enumerateValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ef6b
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;	// IMP=0x000000000002eea4
- (unsigned long long)countForValue:(unsigned long long)arg1;	// IMP=0x000000000002ee0d
- (void)removeValue:(unsigned long long)arg1;	// IMP=0x000000000002ed45
- (void)addValue:(unsigned long long)arg1;	// IMP=0x000000000002ec7e
- (unsigned long long)standardDeviation;	// IMP=0x000000000002ea56
- (unsigned long long)mean;	// IMP=0x000000000002e89c
- (unsigned long long)count;	// IMP=0x000000000002e87f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e72a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e683
- (unsigned long long)hash;	// IMP=0x000000000002e62d
- (void)dealloc;	// IMP=0x000000000002e5ec
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;	// IMP=0x000000000002e572

@end

