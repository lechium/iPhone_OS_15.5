//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, PGGraph, PGGraphMomentNodeCollection, PGGraphPersonNodeCollection;

@interface PGGraphRelationshipProcessor : NSObject
{
    unsigned long long _runOptions;	// 8 = 0x8
    NSMutableArray *_analyzersToRun;	// 16 = 0x10
    unsigned long long _numberOfSignals;	// 24 = 0x18
    PGGraphPersonNodeCollection *_personNodes;	// 32 = 0x20
    PGGraphMomentNodeCollection *_momentNodes;	// 40 = 0x28
    NSSet *_contactIdentifiers;	// 48 = 0x30
    NSDictionary *_personLocalIdentifierByContactIdentifier;	// 56 = 0x38
    PGGraph *_graph;	// 64 = 0x40
    NSMutableDictionary *_relationshipAnalyzerPropertiesByPersonLocalIdentifier;	// 72 = 0x48
    NSMutableDictionary *_partnerScoreByPersonLocalIdentifier;	// 80 = 0x50
    NSMutableDictionary *_parentScoreByPersonLocalIdentifier;	// 88 = 0x58
    NSMutableDictionary *_childScoreByPersonLocalIdentifier;	// 96 = 0x60
    NSMutableDictionary *_familyScoreByPersonLocalIdentifier;	// 104 = 0x68
    NSMutableDictionary *_coworkerScoreByPersonLocalIdentifier;	// 112 = 0x70
    NSMutableDictionary *_friendScoreByPersonLocalIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000023ddef
@property(retain, nonatomic) NSMutableDictionary *friendScoreByPersonLocalIdentifier; // @synthesize friendScoreByPersonLocalIdentifier=_friendScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *coworkerScoreByPersonLocalIdentifier; // @synthesize coworkerScoreByPersonLocalIdentifier=_coworkerScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *familyScoreByPersonLocalIdentifier; // @synthesize familyScoreByPersonLocalIdentifier=_familyScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *childScoreByPersonLocalIdentifier; // @synthesize childScoreByPersonLocalIdentifier=_childScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *parentScoreByPersonLocalIdentifier; // @synthesize parentScoreByPersonLocalIdentifier=_parentScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *partnerScoreByPersonLocalIdentifier; // @synthesize partnerScoreByPersonLocalIdentifier=_partnerScoreByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *relationshipAnalyzerPropertiesByPersonLocalIdentifier; // @synthesize relationshipAnalyzerPropertiesByPersonLocalIdentifier=_relationshipAnalyzerPropertiesByPersonLocalIdentifier;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSDictionary *personLocalIdentifierByContactIdentifier; // @synthesize personLocalIdentifierByContactIdentifier=_personLocalIdentifierByContactIdentifier;
@property(readonly, nonatomic) NSSet *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly, nonatomic) unsigned long long numberOfSignals; // @synthesize numberOfSignals=_numberOfSignals;
@property(retain, nonatomic) NSMutableArray *analyzersToRun; // @synthesize analyzersToRun=_analyzersToRun;
@property(readonly, nonatomic) unsigned long long runOptions; // @synthesize runOptions=_runOptions;
- (id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)arg1;	// IMP=0x000000000023dc02
- (id)personLocalIdentifierForContactIdentifier:(id)arg1;	// IMP=0x000000000023dbec
- (void)_enumerateInferredCoworkersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023dbc3
- (void)_enumerateInferredFriendsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023db9a
- (void)_enumerateInferredChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023db71
- (void)_enumerateInferredParentsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023d90f
- (void)_enumerateInferredFamilyMembersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023d8e6
- (id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)arg1 minimumMatches:(unsigned long long)arg2 amongSocialGroupNodes:(id)arg3;	// IMP=0x000000000023d83f
- (void)_enumerateInferredRelationshipMembersFromScores:(id)arg1 cumulativeThreshold:(double)arg2 minimumConfidence:(double)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000023d0bc
- (void)_enumerateInferredPartnerUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023ceee
- (void)_aggregateScores;	// IMP=0x000000000023cdbb
- (void)_extractSignalsFromRunOptions;	// IMP=0x000000000023c89f
- (void)enumerateInferredRelationshipsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023c55e
- (void)runRelationshipAnalysisWithLoggingConnection:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023bc2a
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;	// IMP=0x000000000023badd

@end
