//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGFeature : NSObject
{
    id _typeSpecificIdentifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)featuresForEncodedFeatures:(id)arg1;	// IMP=0x00000000004b36f4
+ (id)stringForFeatureType:(unsigned long long)arg1;	// IMP=0x00000000004b350f
+ (id)nameForNode:(id)arg1;	// IMP=0x00000000004b3351
+ (id)noneFeatureWithType:(unsigned long long)arg1;	// IMP=0x00000000004b3331
+ (id)featureWithType:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x00000000004b32cf
+ (id)featureWithMeaningfulEvent:(id)arg1;	// IMP=0x00000000004b325f
+ (id)featureWithType:(unsigned long long)arg1 node:(id)arg2;	// IMP=0x00000000004b31c0
+ (id)featureWithNode:(id)arg1;	// IMP=0x00000000004b2b92
- (void).cxx_destruct;	// IMP=0x00000000004b296e
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000004b2855
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b275e
- (unsigned long long)hash;	// IMP=0x00000000004b2754
- (id)nodeInGraph:(id)arg1;	// IMP=0x00000000004b1aec
@property(readonly) _Bool isNoneFeature;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)encodedFeature;	// IMP=0x00000000004b194f
- (id)initWithEncodedFeature:(id)arg1;	// IMP=0x00000000004b1859

@end
