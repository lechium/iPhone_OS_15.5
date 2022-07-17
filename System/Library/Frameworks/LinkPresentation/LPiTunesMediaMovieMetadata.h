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

@interface LPiTunesMediaMovieMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_genre;	// 40 = 0x28
    LPImage *_artwork;	// 48 = 0x30
    LPArtworkMetadata *_artworkMetadata;	// 56 = 0x38
    LPImage *_branding;	// 64 = 0x40
    NSString *_brandingText;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000001fd17
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f768
- (void).cxx_destruct;	// IMP=0x000000000001fe84
@property(retain, nonatomic) NSString *brandingText; // @synthesize brandingText=_brandingText;
@property(retain, nonatomic) LPImage *branding; // @synthesize branding=_branding;
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fd02
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fb61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f9e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f901
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f770
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x000000000003fa89
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000003f9e9
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000003f9e1
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000003f94a
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000003f931
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000003f80e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
