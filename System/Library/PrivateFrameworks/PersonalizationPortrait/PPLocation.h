//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/MLFeatureProvider-Protocol.h>
#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class CLPlacemark, NSSet, NSString, PPLocationRecord;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>
{
    unsigned short _category;	// 8 = 0x8
    CLPlacemark *_placemark;	// 16 = 0x10
    PPLocationRecord *_mostRelevantRecord;	// 24 = 0x18
    NSString *_clusterIdentifier;	// 32 = 0x20
}

+ (id)clusterIdentifierFromPlacemark:(id)arg1;	// IMP=0x0000000000031c45
+ (unsigned short)categoryForDescription:(id)arg1;	// IMP=0x0000000000031b48
+ (id)describeCategory:(unsigned short)arg1;	// IMP=0x0000000000031acb
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031ac3
- (void).cxx_destruct;	// IMP=0x000000000002f9f1
@property(readonly, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property(readonly, nonatomic) PPLocationRecord *mostRelevantRecord; // @synthesize mostRelevantRecord=_mostRelevantRecord;
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000002f838
@property(readonly, nonatomic) NSSet *featureNames;
- (unsigned long long)hash;	// IMP=0x000000000002f566
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f4fe
- (id)customizedDescription;	// IMP=0x000000000002f28e
- (_Bool)isEqualToLocation:(id)arg1;	// IMP=0x000000000002ed4b
- (id)description;	// IMP=0x000000000002ecbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ec36
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eb38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002eb2d
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;	// IMP=0x000000000002e9e4
- (id)init;	// IMP=0x000000000002e9de

@end
