//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>
#import <PhotosGraph/PGGraphEventCollection-Protocol.h>
#import <PhotosGraph/PGGraphScenedEventCollection-Protocol.h>

@class NSSet, NSString, PGGraphFeatureNodeCollection, PGGraphHighlightGroupNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphHighlightNodeCollection <PGGraphEventCollection, PGGraphScenedEventCollection, PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)highlightNodeAsCollectionByHighlightUUIDForArrayOfHighlightUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018bde0
+ (id)highlightNodeAsCollectionByHighlightUUIDForHighlightUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018bd89
+ (id)dayHighlightNodesInGraph:(id)arg1;	// IMP=0x000000000018bcfc
+ (id)highlightNodeForUUID:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018bc6a
+ (id)highlightNodesForArrayOfUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018bbd8
+ (id)highlightNodesForUUIDs:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000018bb46
+ (Class)nodeClass;	// IMP=0x000000000018bb35
- (id)highlightNodeByHighlightUUID;	// IMP=0x000000000018b887
- (id)highlightNodeAsCollectionByHighlightUUID;	// IMP=0x000000000018b7b8
@property(readonly, nonatomic) NSSet *localIdentifiers;
@property(readonly, nonatomic) NSSet *uuids;
- (void)enumerateUUIDs:(CDUnknownBlockType)arg1;	// IMP=0x000000000018b642
- (id)eventMomentNodes;	// IMP=0x000000000018b630
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
- (id)searchConfidenceSceneNodes;	// IMP=0x000000000018b5c4
- (id)highConfidenceSceneNodes;	// IMP=0x000000000018b574
- (id)sceneNodes;	// IMP=0x000000000018b524
@property(readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

