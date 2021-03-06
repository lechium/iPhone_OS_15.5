//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WebKit/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <WebKit/UIContextMenuInteractionDelegate-Protocol.h>
#import <WebKit/UIDocumentPickerDelegate-Protocol.h>
#import <WebKit/UIImagePickerControllerDelegate-Protocol.h>
#import <WebKit/UINavigationControllerDelegate-Protocol.h>
#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString;
@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate>
{
    struct WeakObjCPtr<WKContentView> _view;	// 8 = 0x8
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> _listener;	// 16 = 0x10
    struct RetainPtr<NSSet<NSString *>> _acceptedUTIs;	// 24 = 0x18
    struct OptionSet<WKFileUploadPanelImagePickerType> _allowedImagePickerTypes;	// 32 = 0x20
    struct CGPoint _interactionPoint;	// 40 = 0x28
    _Bool _allowMultipleFiles;	// 56 = 0x38
    _Bool _usingCamera;	// 57 = 0x39
    struct RetainPtr<WKFileUploadMediaTranscoder> _mediaTranscoder;	// 64 = 0x40
    struct RetainPtr<UIImagePickerController> _imagePicker;	// 72 = 0x48
    struct RetainPtr<UIViewController> _presentationViewController;	// 80 = 0x50
    struct RetainPtr<UIPopoverController> _presentationPopover;	// 88 = 0x58
    _Bool _isPresentingSubMenu;	// 96 = 0x60
    struct RetainPtr<UIContextMenuInteraction> _documentContextMenuInteraction;	// 104 = 0x68
    struct RetainPtr<UIDocumentPickerViewController> _documentPickerController;	// 112 = 0x70
    int _mediaCaptureType;	// 120 = 0x78
    id <WKFileUploadPanelDelegate> _delegate;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000040e0ca
- (void).cxx_destruct;	// IMP=0x000000000040dfb1
@property(nonatomic) __weak id <WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)platformSupportsPickerViewController;	// IMP=0x000000000040df84
- (void)_uploadMediaItemsTranscodingVideo:(id)arg1;	// IMP=0x000000000040de82
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000040dc8e
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000040db20
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000040da18
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000040d828
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000040d7cb
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000000040d798
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x000000000040d670
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000000040d43d
- (_Bool)_willMultipleSelectionDelegateBeCalled;	// IMP=0x000000000040d418
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x000000000040d3e5
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x000000000040d32e
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000040d31c
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000040d30a
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000040d265
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000040d169
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1;	// IMP=0x000000000040d11b
- (void)_showPhotoPickerWithSourceType:(long long)arg1;	// IMP=0x000000000040cfb8
- (_Bool)_shouldMediaCaptureOpenMediaDevice;	// IMP=0x000000000040cf89
- (void)_adjustMediaCaptureType;	// IMP=0x000000000040ceeb
- (void)showDocumentPickerMenu;	// IMP=0x000000000040ce53
- (void)showFilePickerMenu;	// IMP=0x000000000040ccb5
- (void)ensureContextMenuInteraction;	// IMP=0x000000000040cc39
- (void)removeContextMenuInteraction;	// IMP=0x000000000040cbb5
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000040cb21
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000040c75e
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000040c722
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000040c701
- (id)_cameraButtonLabel;	// IMP=0x000000000040c619
- (id)_photoLibraryButtonLabel;	// IMP=0x000000000040c590
- (id)_chooseFilesButtonLabel;	// IMP=0x000000000040c4e4
- (id)_mediaTypesForPickerSourceType:(long long)arg1;	// IMP=0x000000000040c1b0
- (id)acceptedTypeIdentifiers;	// IMP=0x000000000040c173
- (id)currentAvailableActionTitles;	// IMP=0x000000000040c0bd
- (void)_dismissDisplayAnimated:(_Bool)arg1;	// IMP=0x000000000040bfb5
- (void)dismiss;	// IMP=0x000000000040beed
- (void)presentWithParameters:(void *)arg1 resultListener:(void *)arg2;	// IMP=0x000000000040b516
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;	// IMP=0x000000000040b1c7
- (void)_chooseMediaItems:(id)arg1;	// IMP=0x000000000040aec8
- (void)_cancel;	// IMP=0x000000000040ae8b
- (void)_dispatchDidDismiss;	// IMP=0x000000000040ae2a
- (void)dealloc;	// IMP=0x000000000040ad9d
- (id)initWithView:(id)arg1;	// IMP=0x000000000040ad48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

