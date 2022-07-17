//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying>
{
    _Bool _shouldBeBoosted;	// 8 = 0x8
    NSString *_personalizationIdentifier;	// 16 = 0x10
    NSString *_fc_description;	// 24 = 0x18
    NSString *_tagID;	// 32 = 0x20
}

+ (id)featureObserver;	// IMP=0x00000000000f3d27
+ (id)featureForFreeValuedIdentifier:(id)arg1;	// IMP=0x00000000000f3d15
+ (id)featureForIdentifier:(id)arg1;	// IMP=0x00000000000f3706
+ (id)featureFromTagID:(id)arg1;	// IMP=0x00000000000f362b
+ (id)featuresFromTagIDs:(id)arg1;	// IMP=0x00000000000f35c2
+ (id)featuresFromTag:(id)arg1;	// IMP=0x00000000000f34f3
+ (id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2;	// IMP=0x00000000000f2f02
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;	// IMP=0x00000000000f2a3d
+ (id)featuresFromHeadline:(id)arg1 personalizationTreatment:(id)arg2;	// IMP=0x00000000000f2362
+ (id)featuresFromIssue:(id)arg1;	// IMP=0x00000000000f1ff8
- (void).cxx_destruct;	// IMP=0x00000000000f3e1f
@property(readonly, nonatomic) NSString *tagID;
@property(readonly, nonatomic) NSString *fc_description; // @synthesize fc_description=_fc_description;
@property(readonly, nonatomic) NSString *personalizationIdentifier;
@property(nonatomic) _Bool shouldBeBoosted; // @synthesize shouldBeBoosted=_shouldBeBoosted;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;	// IMP=0x00000000000f3de1
- (id)description;	// IMP=0x00000000000f3d4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f3d40
- (id)init;	// IMP=0x00000000000f3d2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019ba0b
- (unsigned long long)hash;	// IMP=0x000000000019b9e0

@end
