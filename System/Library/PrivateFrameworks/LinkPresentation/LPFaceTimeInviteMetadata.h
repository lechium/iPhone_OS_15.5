//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataFallbackIconTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class NSString;

@interface LPFaceTimeInviteMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_title;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000025a32
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025825
- (void).cxx_destruct;	// IMP=0x0000000000025a78
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025970
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000258ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000258c5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002582d
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000031da4
- (id)fallbackIconForTransformer:(id)arg1;	// IMP=0x0000000000031d8b
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000031d83
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x0000000000031cae
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x0000000000031c99
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000031714

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
