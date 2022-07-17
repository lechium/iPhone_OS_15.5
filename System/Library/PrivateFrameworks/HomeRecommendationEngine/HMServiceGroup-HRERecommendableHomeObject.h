//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMServiceGroup.h>

#import <HomeRecommendationEngine/HRERecommendableHomeObject-Protocol.h>

@class HFServiceNameComponents, HMHome, HMRoom, NSSet, NSString, NSUUID;
@protocol HFUIRepresentableHomeObject;

@interface HMServiceGroup (HRERecommendableHomeObject) <HRERecommendableHomeObject>
@property(readonly, nonatomic) _Bool hre_isVisible;
@property(readonly, nonatomic) _Bool hre_isActionable;
@property(readonly, nonatomic) NSSet *hre_characteristics;
@property(readonly, nonatomic) NSSet *hre_matchingTypes;
@property(readonly, nonatomic) NSString *hre_primaryType;
@property(readonly, nonatomic) HMRoom *hre_parentRoom;
@property(readonly, nonatomic) HMHome *hre_home;
@property(readonly, nonatomic) NSSet *hre_actionTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *hf_accessories;
@property(readonly, nonatomic) NSSet *hf_profiles;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSSet *hf_services;
@property(readonly, nonatomic) id <HFUIRepresentableHomeObject> hf_topLevelUIRepresentableHomeObject;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
