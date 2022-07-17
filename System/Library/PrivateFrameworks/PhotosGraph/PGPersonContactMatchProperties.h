//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface PGPersonContactMatchProperties : NSObject
{
    _Bool _contactFaceprintMatch;	// 8 = 0x8
    NSString *_contactIdentifier;	// 16 = 0x10
    unsigned long long _numberOfWeakBirthdayMomentsAroundBirthdayDate;	// 24 = 0x18
    unsigned long long _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;	// 32 = 0x20
    unsigned long long _numberOfMomentsAtAddress;	// 40 = 0x28
    unsigned long long _numberOfMomentsAtMentionedAddress;	// 48 = 0x30
    unsigned long long _numberOfMomentsOverlappingWithCalendarEvents;	// 56 = 0x38
    unsigned long long _numberOfAppearancesInSharedAssets;	// 64 = 0x40
    unsigned long long _numberOfCMMSharedMomentsInMessageConversations;	// 72 = 0x48
    double _faceTimeFaceprintConfidence;	// 80 = 0x50
    NSMutableSet *_socialGroupDescriptions;	// 88 = 0x58
    NSMutableSet *_messageGroupDescriptions;	// 96 = 0x60
    double _socialGroupsOverlapScore;	// 104 = 0x68
    unsigned long long _numberOfMatchedRelationships;	// 112 = 0x70
    NSMutableSet *_matchedRelationships;	// 120 = 0x78
    unsigned long long _sexMatch;	// 128 = 0x80
    double _matchScore;	// 136 = 0x88
    double _birthdayScore;	// 144 = 0x90
    double _potentialBirthdayScore;	// 152 = 0x98
    double _addressScore;	// 160 = 0xa0
    double _mentionedAddressScore;	// 168 = 0xa8
    double _calendarScore;	// 176 = 0xb0
    double _sharedAssetScore;	// 184 = 0xb8
    double _sharedCMMScore;	// 192 = 0xc0
    double _relationshipScore;	// 200 = 0xc8
    double _scoreAfterMessagePenalty;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000351134
@property(nonatomic) double scoreAfterMessagePenalty; // @synthesize scoreAfterMessagePenalty=_scoreAfterMessagePenalty;
@property(nonatomic) double relationshipScore; // @synthesize relationshipScore=_relationshipScore;
@property(nonatomic) double sharedCMMScore; // @synthesize sharedCMMScore=_sharedCMMScore;
@property(nonatomic) double sharedAssetScore; // @synthesize sharedAssetScore=_sharedAssetScore;
@property(nonatomic) double calendarScore; // @synthesize calendarScore=_calendarScore;
@property(nonatomic) double mentionedAddressScore; // @synthesize mentionedAddressScore=_mentionedAddressScore;
@property(nonatomic) double addressScore; // @synthesize addressScore=_addressScore;
@property(nonatomic) double potentialBirthdayScore; // @synthesize potentialBirthdayScore=_potentialBirthdayScore;
@property(nonatomic) double birthdayScore; // @synthesize birthdayScore=_birthdayScore;
@property(nonatomic) unsigned long long sexMatch; // @synthesize sexMatch=_sexMatch;
@property(retain, nonatomic) NSMutableSet *matchedRelationships; // @synthesize matchedRelationships=_matchedRelationships;
@property(nonatomic) unsigned long long numberOfMatchedRelationships; // @synthesize numberOfMatchedRelationships=_numberOfMatchedRelationships;
@property(nonatomic) double socialGroupsOverlapScore; // @synthesize socialGroupsOverlapScore=_socialGroupsOverlapScore;
@property(retain, nonatomic) NSMutableSet *messageGroupDescriptions; // @synthesize messageGroupDescriptions=_messageGroupDescriptions;
@property(retain, nonatomic) NSMutableSet *socialGroupDescriptions; // @synthesize socialGroupDescriptions=_socialGroupDescriptions;
@property(nonatomic) double faceTimeFaceprintConfidence; // @synthesize faceTimeFaceprintConfidence=_faceTimeFaceprintConfidence;
@property(nonatomic) _Bool contactFaceprintMatch; // @synthesize contactFaceprintMatch=_contactFaceprintMatch;
@property(nonatomic) unsigned long long numberOfCMMSharedMomentsInMessageConversations; // @synthesize numberOfCMMSharedMomentsInMessageConversations=_numberOfCMMSharedMomentsInMessageConversations;
@property(nonatomic) unsigned long long numberOfAppearancesInSharedAssets; // @synthesize numberOfAppearancesInSharedAssets=_numberOfAppearancesInSharedAssets;
@property(nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents; // @synthesize numberOfMomentsOverlappingWithCalendarEvents=_numberOfMomentsOverlappingWithCalendarEvents;
@property(nonatomic) unsigned long long numberOfMomentsAtMentionedAddress; // @synthesize numberOfMomentsAtMentionedAddress=_numberOfMomentsAtMentionedAddress;
@property(nonatomic) unsigned long long numberOfMomentsAtAddress; // @synthesize numberOfMomentsAtAddress=_numberOfMomentsAtAddress;
@property(nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate; // @synthesize numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate=_numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property(nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate; // @synthesize numberOfWeakBirthdayMomentsAroundBirthdayDate=_numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)setPersonContactMatchScore:(double)arg1;	// IMP=0x0000000000350ed7
@property(readonly, nonatomic) double matchScore; // @synthesize matchScore=_matchScore;
- (id)edgeProperties;	// IMP=0x0000000000350773
- (id)_relationshipsDescription;	// IMP=0x00000000003506a2
- (id)_messageGroupsDescription;	// IMP=0x00000000003505f4
- (id)_socialGroupsDescription;	// IMP=0x0000000000350546
- (id)description;	// IMP=0x00000000003504f6
- (id)_stringsForRelationshipMatch;	// IMP=0x000000000035033d
- (void)registerMessageFrequencyPenaltyNewScore:(double)arg1;	// IMP=0x000000000035032f
- (void)registerBiologicalSexMatch:(unsigned long long)arg1;	// IMP=0x00000000003502f4
- (void)registerMatchedRelationship:(unsigned long long)arg1 withPeopleCount:(unsigned long long)arg2;	// IMP=0x0000000000350237
- (void)registerCMMWithPeopleCount:(unsigned long long)arg1;	// IMP=0x00000000003501d7
- (void)registerSocialGroupAndMessageGroupMatchScore:(double)arg1 debugSocialGroupsDescription:(id)arg2 debugMessageGroupsDescription:(id)arg3;	// IMP=0x0000000000350103
- (void)registerCalendarEventWithPeopleCount:(unsigned long long)arg1;	// IMP=0x00000000003500a7
- (void)registerFacetimeFaceprintMatchConfidence:(double)arg1;	// IMP=0x0000000000350084
- (void)registerContactFaceprintMatch;	// IMP=0x0000000000350062
- (void)registerSharedAssetAppearanceWithPeopleCount:(unsigned long long)arg1;	// IMP=0x0000000000350002
- (void)registerMomentAtMentionedAddressWithPeopleCount:(unsigned long long)arg1;	// IMP=0x000000000034ffa2
- (void)registerMomentAtAddressWithPeopleCount:(unsigned long long)arg1;	// IMP=0x000000000034ff4a
- (void)registerPotentialBirthdayWithPeopleCount:(unsigned long long)arg1;	// IMP=0x000000000034fef2
- (void)registerBirthdayWithPeopleCount:(unsigned long long)arg1;	// IMP=0x000000000034fe9e
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x000000000034fdb2

@end
