//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>

@class NSSet, NSString, PGGraphFeatureNodeCollection, PGGraphHomeWorkNodeCollection, PGGraphMomentNodeCollection, PGGraphRelationshipEdgeCollection, PGGraphSocialGroupNodeCollection;

@interface PGGraphPersonNodeCollection <PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)favoritedPersonNodesIncludingMeInGraph:(id)arg1;	// IMP=0x0000000000226ad0
+ (id)favoritedPersonNodesExcludingMeInGraph:(id)arg1;	// IMP=0x00000000002269b0
+ (id)unnamedPersonNodesInGraph:(id)arg1;	// IMP=0x000000000022691f
+ (id)namedPersonNodesInGraph:(id)arg1;	// IMP=0x000000000022688e
+ (id)personNodesInAgeCategories:(id)arg1 includingMe:(_Bool)arg2 inGraph:(id)arg3;	// IMP=0x00000000002267f6
+ (id)personNodesForContactIdentifiers:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002266c1
+ (id)personNodesWithNames:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000022658c
+ (id)personNodesWithName:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002263bd
+ (id)personNodesForArrayOfLocalIdentifiers:(id)arg1 inGraph:(id)arg2;	// IMP=0x0000000000226288
+ (id)personNodesForLocalIdentifiers:(id)arg1 inGraph:(id)arg2;	// IMP=0x0000000000226153
+ (id)personNodesForLocalIdentifier:(id)arg1 inGraph:(id)arg2;	// IMP=0x0000000000225f84
+ (id)personNodesIncludingMeInGraph:(id)arg1;	// IMP=0x0000000000225ef7
+ (id)personNodesExcludingMeInGraph:(id)arg1;	// IMP=0x0000000000225e6a
+ (Class)nodeClass;	// IMP=0x0000000000225e59
- (void)enumerateBiologicalSexUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000225d1b
- (_Bool)containsMeNode;	// IMP=0x0000000000225cce
- (id)personNodeByLocalIdentifier;	// IMP=0x0000000000225c1e
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property(readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipInEdges;
@property(readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipOutEdges;
@property(readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipEdges;
@property(readonly, nonatomic) NSSet *uuids;
@property(readonly, nonatomic) NSSet *localIdentifiers;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *subsetExcludingMe;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *authoredMomentNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredAcquaintancePersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *acquaintancePersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredCoworkerPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *coworkerPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredDaughterPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *daughterPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredSonPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *sonPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredChildPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *childPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredBrotherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *brotherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredSisterPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *sisterPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredParentPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *parentPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredFamilyPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *familyPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredFriendPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *friendPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *relatedPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredFatherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *fatherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredMotherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *motherPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *inferredPartnerPersonNodes;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *partnerPersonNodes;
@property(readonly, nonatomic) PGGraphHomeWorkNodeCollection *workNodes;
@property(readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeNodes;
@property(readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeOrWorkNodes;
@property(readonly, nonatomic) PGGraphSocialGroupNodeCollection *socialGroupNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
