//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>
#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSDateComponents, NSString, PGGraphPersonNodeCollection;

@interface PGGraphPersonNode <PGPersonResult, PGAssetCollectionFeature>
{
    _Bool _isFavorite;	// 8 = 0x8
    _Bool _isUserCreated;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSString *_localIdentifier;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    NSDate *_birthdayDate;	// 40 = 0x28
    NSDate *_potentialBirthdayDate;	// 48 = 0x30
    NSDate *_anniversaryDate;	// 56 = 0x38
    unsigned long long _sex;	// 64 = 0x40
    unsigned long long _ageCategory;	// 72 = 0x48
}

+ (id)filterForBiologicalSex:(unsigned long long)arg1;	// IMP=0x0000000000228c4b
+ (id)filterForAgeCategories:(id)arg1 includingMe:(_Bool)arg2;	// IMP=0x0000000000228b51
+ (id)personActivityMeaningOfPerson;	// IMP=0x0000000000228afa
+ (id)workOfPerson;	// IMP=0x00000000002289ee
+ (id)homeOfPerson;	// IMP=0x00000000002288e2
+ (id)homeOrWorkOfPerson;	// IMP=0x000000000022888b
+ (id)socialGroupOfPerson;	// IMP=0x0000000000228834
+ (id)momentAuthoredByPerson;	// IMP=0x00000000002287dd
+ (id)momentOfPerson;	// IMP=0x0000000000228786
+ (id)inferredVipOfPerson;	// IMP=0x000000000022872f
+ (id)vipOfPerson;	// IMP=0x00000000002286d8
+ (id)inferredAcquaintanceOfPerson;	// IMP=0x0000000000228681
+ (id)acquaintanceOfPerson;	// IMP=0x000000000022862a
+ (id)inferredCoworkerSocialGroupOfPerson;	// IMP=0x00000000002285d3
+ (id)coworkerSocialGroupOfPerson;	// IMP=0x000000000022857c
+ (id)inferredCoworkerOfPerson;	// IMP=0x0000000000228525
+ (id)coworkerOfPerson;	// IMP=0x00000000002284ce
+ (id)inferredFriendOfPerson;	// IMP=0x0000000000228477
+ (id)friendOfPerson;	// IMP=0x0000000000228420
+ (id)inferredChildOfPerson;	// IMP=0x00000000002283c9
+ (id)childOfPerson;	// IMP=0x0000000000228372
+ (id)inferredFamilySocialGroupOfPerson;	// IMP=0x000000000022831b
+ (id)familySocialGroupOfPerson;	// IMP=0x00000000002282c4
+ (id)inferredFamilyOfPerson;	// IMP=0x000000000022826d
+ (id)familyOfPerson;	// IMP=0x0000000000228216
+ (id)inferredParentOfPerson;	// IMP=0x00000000002281bf
+ (id)parentOfPerson;	// IMP=0x0000000000228168
+ (id)inferredSonOfPerson;	// IMP=0x0000000000228111
+ (id)sonOfPerson;	// IMP=0x00000000002280ba
+ (id)inferredDaughterOfPerson;	// IMP=0x0000000000228063
+ (id)daughterOfPerson;	// IMP=0x000000000022800c
+ (id)inferredSisterOfPerson;	// IMP=0x0000000000227fb5
+ (id)sisterOfPerson;	// IMP=0x0000000000227f5e
+ (id)inferredBrotherOfPerson;	// IMP=0x0000000000227f07
+ (id)brotherOfPerson;	// IMP=0x0000000000227eb0
+ (id)inferredMotherOfPerson;	// IMP=0x0000000000227e59
+ (id)motherOfPerson;	// IMP=0x0000000000227e02
+ (id)inferredFatherOfPerson;	// IMP=0x0000000000227dab
+ (id)fatherOfPerson;	// IMP=0x0000000000227d54
+ (id)inferredPartnerOfPerson;	// IMP=0x0000000000227cfd
+ (id)partnerOfPerson;	// IMP=0x0000000000227ca6
+ (id)_specialDateComponentsForDate:(id)arg1;	// IMP=0x0000000000227c32
+ (id)_specialDateForDateComponents:(id)arg1;	// IMP=0x0000000000227c17
+ (double)_specialDateTimeIntervalForDate:(id)arg1;	// IMP=0x0000000000227b9d
+ (void)setAnniversaryDateComponents:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000227ae1
+ (void)setBirthdayDateComponents:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000227a25
+ (void)setName:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x00000000002279e9
+ (id)propertiesWithAgeCategory:(unsigned long long)arg1;	// IMP=0x0000000000227941
+ (id)propertiesWithBiologicalSex:(unsigned long long)arg1;	// IMP=0x0000000000227899
+ (id)propertiesWithPerson:(id)arg1;	// IMP=0x0000000000227430
+ (id)personSortDescriptors;	// IMP=0x0000000000227354
+ (id)personScoreSortDescriptors;	// IMP=0x0000000000227278
+ (id)filterNameEmpty;	// IMP=0x00000000002271a3
+ (id)filterNameNotEmpty;	// IMP=0x00000000002270a0
+ (id)filterIncludingMe;	// IMP=0x0000000000227017
+ (id)filterExcludingMe;	// IMP=0x0000000000226fe2
+ (id)filter;	// IMP=0x0000000000226fb2
+ (unsigned long long)type;	// IMP=0x00000000001b39c9
- (void).cxx_destruct;	// IMP=0x0000000000224ab8
@property(readonly) _Bool isUserCreated; // @synthesize isUserCreated=_isUserCreated;
@property(readonly) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(readonly) unsigned long long ageCategory; // @synthesize ageCategory=_ageCategory;
@property(readonly) unsigned long long sex; // @synthesize sex=_sex;
@property(readonly) NSDate *anniversaryDate; // @synthesize anniversaryDate=_anniversaryDate;
@property(readonly) NSDate *potentialBirthdayDate; // @synthesize potentialBirthdayDate=_potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *collection;
- (id)associatedNodesForRemoval;	// IMP=0x00000000002247f4
@property(readonly, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(readonly, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property(readonly, nonatomic) NSDateComponents *birthdayDateComponents;
- (id)changingPropertiesWithProperties:(id)arg1;	// IMP=0x00000000002240b2
- (_Bool)isIdentifiedByProperties:(id)arg1;	// IMP=0x0000000000223f95
- (id)stringDescription;	// IMP=0x0000000000223dc4
- (id)_contactSuggestionEdgesSortedByWeight;	// IMP=0x0000000000223c6f
- (_Bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;	// IMP=0x0000000000223c0a
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000223b46
@property(readonly) _Bool isMyInferredAcquaintance;
@property(readonly) _Bool isMyInferredFriend;
@property(readonly) _Bool isMyInferredCoworker;
@property(readonly) _Bool isMyInferredSibling;
@property(readonly) _Bool isMyInferredFather;
@property(readonly) _Bool isMyInferredMother;
@property(readonly) _Bool isMyInferredParent;
@property(readonly) _Bool isMyInferredChild;
@property(readonly) _Bool isMyInferredPartner;
@property(readonly) _Bool isInferredMemberOfMyFamily;
@property(readonly) _Bool isMyAcquaintance;
@property(readonly) _Bool isMyFriend;
@property(readonly) _Bool isMyCoworker;
@property(readonly) _Bool isMySibling;
@property(readonly) _Bool isMyFather;
@property(readonly) _Bool isMyMother;
@property(readonly) _Bool isMyParent;
@property(readonly) _Bool isMyChild;
@property(readonly) _Bool isMyPartner;
@property(readonly) _Bool isMemberOfMyFamily;
- (_Bool)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x0000000000223690
- (void)enumerateBirthdayMomentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022366f
- (void)enumerateHomeOrWorkNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000223587
- (void)enumerateHomeOrWorkAddressNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002234ab
- (void)enumerateHomeOrWorkAddressEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002233c3
- (void)enumerateMomentEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002233a2
@property(readonly) unsigned long long numberOfMomentNodes;
@property(readonly) _Bool belongsToBestSocialGroups;
@property(readonly) _Bool belongsToAnySocialGroup;
@property(readonly) double personScore;
@property(readonly) _Bool isMeNode;
- (unsigned short)domain;	// IMP=0x000000000022309b
- (id)label;	// IMP=0x000000000022307c
@property(readonly, copy) NSString *description;
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000222c98
- (id)propertyDictionary;	// IMP=0x00000000002229d3
- (_Bool)hasProperties:(id)arg1;	// IMP=0x0000000000222607
- (void)setLocalProperties:(id)arg1;	// IMP=0x00000000002222c1
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000022226f
- (id)initWithPerson:(id)arg1;	// IMP=0x00000000002221cf
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *fullName;
- (long long)compareToPerson:(id)arg1;	// IMP=0x00000000001b3518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly) Class superclass;

@end

