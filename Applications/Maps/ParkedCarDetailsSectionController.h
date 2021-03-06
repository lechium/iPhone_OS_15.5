//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MULabeledValueActionRowView, MULabeledValueActionTextFieldRowView, MUPlaceSectionView, NSDateComponentsFormatter, NSString, NSTimer, UGCPhotoCarouselCell, UGCPhotoCarouselController, UIImageView;
@protocol MULabeledValueActionTextFieldRowViewDelegate, ParkedCarDetailsSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface ParkedCarDetailsSectionController
{
    UGCPhotoCarouselCell *_carouselCell;	// 8 = 0x8
    UGCPhotoCarouselController *_photoCarouselController;	// 16 = 0x10
    MULabeledValueActionTextFieldRowView *_notesRowView;	// 24 = 0x18
    NSDateComponentsFormatter *_timestampFormatter;	// 32 = 0x20
    NSTimer *_timestampUpdateTimer;	// 40 = 0x28
    MULabeledValueActionRowView *_timestampRowView;	// 48 = 0x30
    MUPlaceSectionView *_sectionView;	// 56 = 0x38
    id <ParkedCarDetailsSectionControllerDelegate> _detailsDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002903a0
@property(nonatomic) __weak id <ParkedCarDetailsSectionControllerDelegate> detailsDelegate; // @synthesize detailsDelegate=_detailsDelegate;
@property(nonatomic) __weak id <MULabeledValueActionTextFieldRowViewDelegate> textFieldDelegate;
- (void)_updateTimestamp;	// IMP=0x0010000000290018
- (void)_scheduleTimestampUpdateTimerIfNecessary;	// IMP=0x001000000028ffa1
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000028ff1c
- (void)photoCarouselController:(id)arg1 didSelectImageWithIdentifier:(id)arg2;	// IMP=0x001000000028fea7
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x001000000028fe5b
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000028fddc
@property(readonly, nonatomic) UIImageView *photoImageView;
- (id)sectionView;	// IMP=0x001000000028fda3
- (void)updateFromParkedCar;	// IMP=0x001000000028fbcc
- (_Bool)resignNotesTextField;	// IMP=0x001000000028fbaf
- (_Bool)activateNotesTextField;	// IMP=0x001000000028fb92
- (id)sectionHeaderViewModel;	// IMP=0x001000000028faf6
- (void)_commonInit;	// IMP=0x001000000028f6a5
- (id)initWithParkedCar:(id)arg1;	// IMP=0x001000000028f659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

