//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEventDetailPredictedLocationCellDelegate-Protocol.h>
#import <EventKitUI/PKScribbleInteractionDelegate-Protocol.h>
#import <EventKitUI/PKScribbleInteractionElementSource-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class EKCalendarItemEditor, EKLocationEditItemViewController, EKUILocationEditItemModel, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem>
{
    EKUILocationEditItemModel *_viewModel;	// 32 = 0x20
    EKCalendarItemEditor *_editor;	// 40 = 0x28
    EKLocationEditItemViewController *_currentLocationEditController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019215a
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000191eae
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x0000000000191e53
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000191e34
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x0000000000191c2a
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x0000000000191b59
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x0000000000191b51
- (id)searchStringForEventAutocomplete;	// IMP=0x0000000000191ad5
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000000191ac0
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000191a4a
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000000191a38
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000019198d
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000001918e3
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;	// IMP=0x00000000001913c6
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;	// IMP=0x0000000000191282
- (void)editItemPendingVideoConferenceCompleted:(id)arg1;	// IMP=0x0000000000190c5f
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x0000000000190688
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;	// IMP=0x00000000001904f0
- (_Bool)forceRefreshURLItemOnSave;	// IMP=0x00000000001904e8
- (_Bool)forceRefreshStartAndEndDatesOnSave;	// IMP=0x00000000001904e0
- (_Bool)forceTableReloadOnSave;	// IMP=0x00000000001904d8
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x00000000001904d0
- (void)_clearLocationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000190372
- (void)_clearButtonTapped:(id)arg1;	// IMP=0x000000000019033e
- (id)_clearButtonView:(unsigned long long)arg1;	// IMP=0x0000000000190014
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018ff02
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000018fb4a
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x000000000018fb42
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000018fa75
- (void)_setEditor:(id)arg1 andUpdateScribbleInteractionOnCell:(id)arg2 addScribbleInteraction:(_Bool)arg3;	// IMP=0x000000000018f6fe
- (void)_updateVirtualConferenceCell:(id)arg1 index:(unsigned long long)arg2 virtualConference:(id)arg3;	// IMP=0x000000000018f156
- (void)_updateMapLocationCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;	// IMP=0x000000000018ed48
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;	// IMP=0x000000000018e3d3
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018e3bf
- (_Bool)isSaveable;	// IMP=0x000000000018e35b
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000018e06e
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000018dfff
- (void)reset;	// IMP=0x000000000018dfe2
- (_Bool)isInline;	// IMP=0x000000000018dfda
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x000000000018df32
- (void)refreshFromCalendarItemAndStore;	// IMP=0x000000000018df12
- (void)dealloc;	// IMP=0x000000000018dec9
- (id)init;	// IMP=0x000000000018de6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
