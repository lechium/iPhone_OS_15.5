//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSString;

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>
{
}

+ (void)initialize;	// IMP=0x00000000000a1a3f
- (id)sceneTaxonomyHash;	// IMP=0x00000000000a2805
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a26bb
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a20d1
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a1f71
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a1a9b
- (void)handleOperation:(id)arg1;	// IMP=0x00000000000a1a7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

