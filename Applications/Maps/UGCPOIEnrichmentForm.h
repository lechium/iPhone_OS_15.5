//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSString, UGCPhotosForm, UGCRatingsForm;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentForm
{
    NSString *_parentSubmissionIdentifier;	// 8 = 0x8
    long long _actionType;	// 16 = 0x10
    MKMapItem *_mapItem;	// 24 = 0x18
    UGCPhotosForm *_photosForm;	// 32 = 0x20
    UGCRatingsForm *_ratingsForm;	// 40 = 0x28
}

+ (id)editPOIEnrichmentFormWithMapItem:(id)arg1 parentSubmissionIdentifier:(id)arg2 photosForm:(id)arg3 ratingsForm:(id)arg4;	// IMP=0x00200000003f0bc6
+ (id)addPOIEnrichmentFormWithMapItem:(id)arg1 photosForm:(id)arg2 ratingsForm:(id)arg3;	// IMP=0x00100000003f0b32
- (void).cxx_destruct;	// IMP=0x00200000003f123b
@property(readonly, nonatomic) UGCRatingsForm *ratingsForm; // @synthesize ratingsForm=_ratingsForm;
@property(readonly, nonatomic) UGCPhotosForm *photosForm; // @synthesize photosForm=_photosForm;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)fillSubmissionFields:(id)arg1;	// IMP=0x00100000003f1059
- (void)formDidChange:(id)arg1;	// IMP=0x00100000003f1047
@property(readonly, nonatomic) _Bool passesMinimumRequirementsToBeSubmittable;
@property(readonly, nonatomic) _Bool isEdited;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (_Bool)isComplete;	// IMP=0x00100000003f0e4f
- (id)initWithMapItem:(id)arg1 actionType:(long long)arg2 photosForm:(id)arg3 ratingsForm:(id)arg4;	// IMP=0x00100000003f0d47
- (id)initWithMapItem:(id)arg1 parentSubmissionIdentifier:(id)arg2 photosForm:(id)arg3 ratingsForm:(id)arg4;	// IMP=0x00100000003f0c77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

