//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformer-Protocol.h>

@class LPArtworkMetadata, LPImage, NSString;

@interface LPiTunesMediaMusicVideoMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_artist;	// 40 = 0x28
    LPImage *_artwork;	// 48 = 0x30
    LPArtworkMetadata *_artworkMetadata;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x00000000000196dd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001912e
- (void).cxx_destruct;	// IMP=0x0000000000019800
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x00000000000196c8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019527
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000193ae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000192c7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019136
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x000000000003c641
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000003c557
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000003c54f
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000003c497
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000003c47e
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000003c358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

