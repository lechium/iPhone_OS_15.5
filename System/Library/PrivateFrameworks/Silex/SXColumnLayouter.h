//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSMutableDictionary, NSString, SXLayouterFactory;
@protocol SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXColumnLayouter : NSObject <SXLayouter>
{
    id <SXLayouterDelegate> _delegate;	// 8 = 0x8
    SXLayouterFactory *_layouterFactory;	// 16 = 0x10
    NSMutableDictionary *_intersectionCache;	// 24 = 0x18
    id <SXLayoutContextFactory> _layoutContextFactory;	// 32 = 0x20
    id <SXUnitConverterFactory> _unitConverterFactory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000216b0
@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property(readonly, nonatomic) NSMutableDictionary *intersectionCache; // @synthesize intersectionCache=_intersectionCache;
@property(readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property(nonatomic) __weak id <SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
- (int)layoutAttributeForAnchor:(long long)arg1;	// IMP=0x0000000000021644
- (double)factorForLayoutAttribute:(int)arg1;	// IMP=0x000000000002161f
- (_Bool)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2;	// IMP=0x0000000000021530
- (_Bool)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4;	// IMP=0x0000000000021017
- (_Bool)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;	// IMP=0x0000000000020ba2
- (_Bool)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;	// IMP=0x000000000002059e
- (id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2;	// IMP=0x00000000000203b4
- (id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2;	// IMP=0x0000000000020013
- (void)analyzeSnapLinesForLayoutBlueprint:(id)arg1;	// IMP=0x000000000001faff
- (struct CGSize)calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4;	// IMP=0x000000000001deff
- (struct CGPoint)calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3;	// IMP=0x000000000001cbe7
- (id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2;	// IMP=0x000000000001c84a
- (void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3;	// IMP=0x000000000001a460
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(_Bool *)arg4;	// IMP=0x0000000000019694
- (id)initWithLayouterFactory:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;	// IMP=0x00000000000195dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

