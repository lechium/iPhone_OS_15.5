//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>

@class NSAttributedString, NSString;

@interface LPApplePhotosStatusMetadata <LPLinkMetadataPresentationTransformer>
{
    NSAttributedString *_status;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x00000000000257cc
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002558a
- (void).cxx_destruct;	// IMP=0x0000000000025812
@property(copy, nonatomic) NSAttributedString *status; // @synthesize status=_status;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002570a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025689
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002565f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025592
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x00000000000b7081
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x00000000000b6d1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

