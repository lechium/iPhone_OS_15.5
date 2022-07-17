//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/PFStoryMutableRecipe-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol PFStoryRecipeSongAsset, PFStoryRecipeStyle;

@interface PFStoryConcreteMutableRecipe <PFStoryMutableRecipe>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077e05
@property(copy, nonatomic) NSDictionary *seedSongIdentifiersByCatalog; // @dynamic seedSongIdentifiersByCatalog;
@property(retain, nonatomic) NSDictionary *autoEditDecisionLists; // @dynamic autoEditDecisionLists;
@property(nonatomic) CDStruct_5d4c7ed3 overallDurationInfo;
- (void)removeLibraryWithKind:(long long)arg1;	// IMP=0x0000000000077c9e
- (void)addLibrary:(id)arg1;	// IMP=0x0000000000077bea
- (void)removePresentationWithIdentifier:(id)arg1;	// IMP=0x0000000000077aae
- (void)addPresentation:(id)arg1;	// IMP=0x00000000000779fa
@property(copy, nonatomic) NSArray *presentations; // @dynamic presentations;
- (void)removeAssetWithIdentifier:(id)arg1;	// IMP=0x0000000000077891
@property(copy, nonatomic) id <PFStoryRecipeStyle> currentStyle; // @dynamic currentStyle;
- (void)addAsset:(id)arg1;	// IMP=0x00000000000777c9
@property(copy, nonatomic) NSArray *assets; // @dynamic assets;
@property(copy, nonatomic) NSArray *libraries; // @dynamic libraries;
@property(nonatomic) long long minorVersion;
@property(nonatomic) long long majorVersion;
@property(copy, nonatomic) NSString *contentIdentifier;

// Remaining properties
@property(readonly, copy, nonatomic) id <PFStoryRecipeSongAsset> currentStyleSongAsset;
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long numberOfAssets;
@property(readonly, nonatomic) long long numberOfPresentations;

@end
