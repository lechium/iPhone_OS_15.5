//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataFallbackIconTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSString;

@interface LPMapCollectionPublisherMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>
{
    unsigned int _numberOfPublishedCollections;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    LPImage *_icon;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000023b72
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002378b
- (void).cxx_destruct;	// IMP=0x0000000000023c10
@property(nonatomic) unsigned int numberOfPublishedCollections; // @synthesize numberOfPublishedCollections=_numberOfPublishedCollections;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023b5d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023a46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002396b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000238a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023793
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000081704
- (id)fallbackIconForTransformer:(id)arg1;	// IMP=0x0000000000081693
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000081681
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x00000000000815ea
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x00000000000815d1
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x00000000000810fe
- (id)_guideCount;	// IMP=0x0000000000081069

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
