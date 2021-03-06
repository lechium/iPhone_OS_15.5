//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowEditor/WFLocationPickerViewControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFLocationParameterSummaryEditor <WFLocationPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;	// 8 = 0x8
}

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;	// IMP=0x00000000002ed7c1
- (void).cxx_destruct;	// IMP=0x00000000002ed723
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000002ed663
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000002ed651
- (void)locationPickerDidCancel:(id)arg1;	// IMP=0x00000000002ed5ef
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;	// IMP=0x00000000002ed4dc
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ed439
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x00000000002ed160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

