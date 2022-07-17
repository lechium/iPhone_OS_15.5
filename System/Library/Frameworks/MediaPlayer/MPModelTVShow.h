//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelTVShowCreator, NSString;

@interface MPModelTVShow
{
}

+ (id)__tagline_KEY;	// IMP=0x00000000002d2b1b
+ (id)__episodesCount_KEY;	// IMP=0x00000000002d2b0e
+ (id)__editorialArtworkCatalogBlock_KEY;	// IMP=0x00000000002d2b01
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x00000000002d2af4
+ (id)__creator_KEY;	// IMP=0x00000000002d2ae7
+ (id)__shortEditorNotes_KEY;	// IMP=0x00000000002d2ada
+ (id)__editorNotes_KEY;	// IMP=0x00000000002d2acd
+ (id)__shortTitle_KEY;	// IMP=0x00000000002d2ac0
+ (id)__title_KEY;	// IMP=0x00000000002d2ab3
+ (id)kindWithSeasonKind:(id)arg1;	// IMP=0x00000000002d2a9a
+ (long long)genericObjectType;	// IMP=0x000000000020b78c
- (id)editorialArtworkCatalog;	// IMP=0x00000000002d2a42
- (id)artworkCatalog;	// IMP=0x00000000002d29ea
- (id)humanDescription;	// IMP=0x00000000002d28c4

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) MPModelTVShowCreator *creator; // @dynamic creator;
@property(copy, nonatomic) NSString *editorNotes; // @dynamic editorNotes;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(nonatomic) long long episodesCount; // @dynamic episodesCount;
@property(copy, nonatomic) NSString *shortEditorNotes; // @dynamic shortEditorNotes;
@property(copy, nonatomic) NSString *shortTitle; // @dynamic shortTitle;
@property(copy, nonatomic) NSString *tagline; // @dynamic tagline;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
