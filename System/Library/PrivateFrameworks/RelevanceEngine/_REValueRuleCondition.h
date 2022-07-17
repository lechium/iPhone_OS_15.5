//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REFeature;

@interface _REValueRuleCondition <REAutomaticExportedInterface>
{
    _Bool _allowsEmptyValueForFeature;	// 8 = 0x8
    REFeature *_feature;	// 16 = 0x10
    long long _relation;	// 24 = 0x18
    unsigned long long _value;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000fef96
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000feefd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fedb3
- (unsigned long long)hash;	// IMP=0x00000000000fed6b
- (id)_inflectionFeatureValuePairs;	// IMP=0x00000000000fece8
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;	// IMP=0x00000000000febb7
- (id)_notCondition;	// IMP=0x00000000000feb3d
- (id)_dependentFeatures;	// IMP=0x00000000000feb16
- (void)dealloc;	// IMP=0x00000000000fead5
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3;	// IMP=0x00000000000fea30

@end
