//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/_PUPickerRemoteUIViewControllerHostInterface-Protocol.h>
#import <PhotosUI/_PUPickerUnavailableUIViewControllerDelegate-Protocol.h>
#import <PhotosUI/_UIRemoteViewControllerContaining-Protocol.h>

@class NSExtension, NSString, PHPickerConfiguration, PUPickerRemoteUIViewController, _UIRemoteViewController;
@protocol NSCopying, PHPickerViewControllerDelegate;

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface>
{
    PHPickerConfiguration *_configuration;	// 8 = 0x8
    id <PHPickerViewControllerDelegate> _delegate;	// 16 = 0x10
    NSExtension *__extension;	// 24 = 0x18
    id <NSCopying> __extensionRequestIdentifier;	// 32 = 0x20
    PUPickerRemoteUIViewController *__remoteUIViewController;	// 40 = 0x28
    id __overlayStorage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000140da1
@property(retain, nonatomic, setter=_setOverlayStorage:) id _overlayStorage; // @synthesize _overlayStorage=__overlayStorage;
@property(retain, nonatomic, setter=_setRemoteUIViewController:) PUPickerRemoteUIViewController *_remoteUIViewController; // @synthesize _remoteUIViewController=__remoteUIViewController;
@property(copy, nonatomic, setter=_setExtensionRequestIdentifier:) id <NSCopying> _extensionRequestIdentifier; // @synthesize _extensionRequestIdentifier=__extensionRequestIdentifier;
@property(retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // @synthesize _extension=__extension;
@property(nonatomic) __weak id <PHPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) PHPickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)_pickerDidFinishPicking:(id)arg1;	// IMP=0x0000000000140852
- (void)_pickerUnavailableUIViewControllerRetryButtonTapped:(id)arg1;	// IMP=0x0000000000140704
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg1;	// IMP=0x000000000014046f
- (void)_addOrReplaceChildUnavailableUIViewController:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000001402fe
- (void)_cancelExistingExtensionRequestIfPossible;	// IMP=0x00000000001401c1
- (void)_handleRemoteViewControllerConnection:(id)arg1 extension:(id)arg2 extensionRequestIdentifier:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000013fca0
- (void)_setupRemoteViewControllerForExtension:(id)arg1 withExtensionItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000013fa28
- (void)_setupExtension:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000013f7a3
- (void)_setup:(CDUnknownBlockType)arg1;	// IMP=0x000000000013f64d
- (void)_moveAssetWithIdentifier:(id)arg1 afterIdentifier:(id)arg2;	// IMP=0x000000000013f52f
- (void)_deselectAssetsWithIdentifiers:(id)arg1;	// IMP=0x000000000013f3af
- (void)dealloc;	// IMP=0x000000000013f371
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013f2ee
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000013f25e
- (id)init;	// IMP=0x000000000013f1e4
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000013eb04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
