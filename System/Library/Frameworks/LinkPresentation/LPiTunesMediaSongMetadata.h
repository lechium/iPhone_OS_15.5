//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataSourceApplicationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStatusTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformer-Protocol.h>

@class LPArtworkMetadata, LPImage, LPLyricExcerptMetadata, NSArray, NSString, NSURL;

@interface LPiTunesMediaSongMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer, LPLinkMetadataStatusTransformer, LPLinkMetadataSourceApplicationTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_artist;	// 40 = 0x28
    NSString *_album;	// 48 = 0x30
    NSString *_lyrics;	// 56 = 0x38
    LPImage *_artwork;	// 64 = 0x40
    LPArtworkMetadata *_artworkMetadata;	// 72 = 0x48
    NSURL *_previewURL;	// 80 = 0x50
    NSArray *_offers;	// 88 = 0x58
    LPLyricExcerptMetadata *_lyricExcerpt;	// 96 = 0x60
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000018649
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017b9f
+ (id)statusForText:(id)arg1;	// IMP=0x000000000003b874
+ (id)transcriptBoldTextFont;	// IMP=0x000000000003b746
- (void).cxx_destruct;	// IMP=0x0000000000018847
@property(copy, nonatomic) LPLyricExcerptMetadata *lyricExcerpt; // @synthesize lyricExcerpt=_lyricExcerpt;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018634
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000183e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000181ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018044
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017ba7
- (id)actionURLForTransformer:(id)arg1;	// IMP=0x000000000003bc9e
- (id)statusForTransformer:(id)arg1;	// IMP=0x000000000003bb50
- (void)destroyForTransformer:(id)arg1;	// IMP=0x000000000003b6f3
- (void)initializeForTransformer:(id)arg1;	// IMP=0x000000000003b57c
- (id)sourceApplicationMetadataForTransformer:(id)arg1;	// IMP=0x000000000003b434
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x000000000003b422
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000003b2e5
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000003b2dd
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000003b1f4
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000003b1db
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000003a922
- (id)inlinePlaybackInformationForURL:(id)arg1;	// IMP=0x000000000003a599

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
