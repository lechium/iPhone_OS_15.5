//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

#import <ActionKitUI/UINavigationControllerDelegate-Protocol.h>
#import <ActionKitUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <ActionKitUI/UIVideoEditorControllerDelegate-Protocol.h>
#import <ActionKitUI/WFTrimVideoActionUserInterface-Protocol.h>

@class NSString, WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFTrimVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIVideoEditorControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, WFTrimVideoActionUserInterface>
{
    _Bool _hasSaved;	// 8 = 0x8
    WFFileRepresentation *_copiedFile;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000407c4
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool hasSaved; // @synthesize hasSaved=_hasSaved;
@property(retain, nonatomic) WFFileRepresentation *copiedFile; // @synthesize copiedFile=_copiedFile;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000040708
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000004066c
- (void)videoEditorControllerDidCancel:(id)arg1;	// IMP=0x0000000000040620
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;	// IMP=0x0000000000040548
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000004048f
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000403ec
- (void)dismissEditor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000403d2
- (void)showWithVideo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000401f8
- (id)copyFileToDealWithBadUIVideoEditorControllerSandboxHandling:(id)arg1;	// IMP=0x0000000000040115

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
