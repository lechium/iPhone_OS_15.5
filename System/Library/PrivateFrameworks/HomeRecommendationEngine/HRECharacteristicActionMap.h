//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface HRECharacteristicActionMap
{
    NSMutableDictionary *_characteristicTypeValues;	// 8 = 0x8
}

+ (id)conditonalCharacteristicActionMap:(id)arg1 condition:(id)arg2;	// IMP=0x0000000000014a3c
+ (id)characteristicActionMap:(id)arg1;	// IMP=0x00000000000149ed
+ (id)emptyMap;	// IMP=0x000000000001494f
- (void).cxx_destruct;	// IMP=0x00000000000151b9
@property(retain, nonatomic) NSMutableDictionary *characteristicTypeValues; // @synthesize characteristicTypeValues=_characteristicTypeValues;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015073
- (id)flattenedMapEvaluatedForObject:(id)arg1;	// IMP=0x0000000000014f9a
- (id)mergeWithActionMaps:(id)arg1;	// IMP=0x0000000000014aac
- (id)initWithMap:(id)arg1 condition:(id)arg2;	// IMP=0x00000000000148c9

@end

