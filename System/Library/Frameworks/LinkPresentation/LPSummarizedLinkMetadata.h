//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>

@class NSString;

@interface LPSummarizedLinkMetadata <LPLinkMetadataPresentationTransformer>
{
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000002676a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026657
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000266f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000266b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000266ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002665f
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000007b97f
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000007b965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

