//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXAdComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary, UIColor;
@protocol SXComponentAnchor;

@interface SXAdvertisementComponent <SXAdComponent>
{
    unsigned long long adType;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long adType; // @synthesize adType;
@property(readonly, nonatomic) unsigned long long placementType;
@property(readonly, nonatomic) UIColor *debugColor;
@property(readonly, nonatomic) unsigned long long traits;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;	// IMP=0x0000000000071bf8

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *advertising; // @dynamic advertising;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXJSONArray *conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) NSString *placementIdentifier; // @dynamic placementIdentifier;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type;

@end
