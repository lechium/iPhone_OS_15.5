//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/UIDocumentPickerDelegate-Protocol.h>
#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC14WorkflowEditor32FilePickerParameterSummaryEditor <UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate>
{
    MISSING_TYPE *chooser;	// 8 = 0x8
    MISSING_TYPE *modal;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001409c0
- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(long long)arg4 processing:(_Bool)arg5;	// IMP=0x0000000000140910
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x000000000013f440
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg1;	// IMP=0x000000000013f1b0
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x000000000013f130
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000140e60
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000140db0
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0000000000140c60
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x0000000000140ab0

@end

