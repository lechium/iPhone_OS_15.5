//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTextFeature : NSObject
{
    float _weight;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    NSString *_originalString;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    unsigned long long _origin;	// 40 = 0x28
}

+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1;	// IMP=0x000000000022ef11
+ (id)vipTextFeatureTypes;	// IMP=0x000000000022eeca
+ (id)mergedTextFeatureFromTextFeatures:(id)arg1;	// IMP=0x000000000022e7f1
+ (id)stringForFeatureType:(unsigned long long)arg1;	// IMP=0x000000000022e7d8
+ (id)stringForFeatureOrigin:(unsigned long long)arg1;	// IMP=0x000000000022e769
+ (id)graphNamesForNode:(id)arg1;	// IMP=0x000000000022dee7
+ (id)_localizedNameForLocalizableNode:(id)arg1;	// IMP=0x000000000022ded2
+ (id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 options:(unsigned long long)arg5;	// IMP=0x000000000022d6fd
+ (id)_tokensFromString:(id)arg1 lemmatize:(_Bool)arg2;	// IMP=0x000000000022d421
+ (id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000022d39a
+ (id)_stringToIndexFromTokens:(id)arg1;	// IMP=0x000000000022d235
+ (id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000022cebc
- (void).cxx_destruct;	// IMP=0x000000000022ce94
@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void)markAsStrippedOut;	// IMP=0x000000000022ce53
- (id)description;	// IMP=0x000000000022ccfd
- (id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 origin:(unsigned long long)arg5;	// IMP=0x000000000022cc3c

@end
