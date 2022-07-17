//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class FCPersonalizationFeature;
@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_feature;	// 8 = 0x8
    double _featureClickPrior;	// 16 = 0x10
    double _featureImpressionPrior;	// 24 = 0x18
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *_absolutePresenceConfig;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002de10
@property(copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig; // @synthesize absolutePresenceConfig=_absolutePresenceConfig;
@property(nonatomic) double featureImpressionPrior; // @synthesize featureImpressionPrior=_featureImpressionPrior;
@property(nonatomic) double featureClickPrior; // @synthesize featureClickPrior=_featureClickPrior;
@property(copy, nonatomic) FCPersonalizationFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002dc6d
- (id)init;	// IMP=0x000000000002dc3e

@end
