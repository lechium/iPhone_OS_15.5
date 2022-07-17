//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

#import <ActionKitUI/SFSafariViewControllerDelegate-Protocol.h>
#import <ActionKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKitUI/WFShowWebPageActionUserInterface-Protocol.h>
#import <ActionKitUI/WFWebViewControllerDelegate-Protocol.h>

@class NSString, WFFileRepresentation;

__attribute__((visibility("hidden")))
@interface WFShowWebPageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface, UIAdaptivePresentationControllerDelegate>
{
    WFFileRepresentation *_richTextFile;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004718e
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFFileRepresentation *richTextFile; // @synthesize richTextFile=_richTextFile;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000470f4
- (void)webViewControllerDidFinish:(id)arg1;	// IMP=0x00000000000470a0
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000047061
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000046fbe
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046f1b
- (void)showRichText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046d5a
- (void)showURL:(id)arg1 readerView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046b9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
