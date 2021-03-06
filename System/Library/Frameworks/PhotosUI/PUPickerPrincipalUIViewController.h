//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/NSExtensionRequestHandling-Protocol.h>
#import <PhotosUI/PUAssetPickerCoordinatorActionHandler-Protocol.h>
#import <PhotosUI/PUPickerPrincipalUIViewControllerInterface-Protocol.h>
#import <PhotosUI/_PUPickerUnavailableUIViewControllerDelegate-Protocol.h>

@class NSDate, NSFileProviderDomain, NSLayoutConstraint, NSOrderedSet, NSString, PUAssetPickerCoordinator;

__attribute__((visibility("hidden")))
@interface PUPickerPrincipalUIViewController : UIViewController <PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling, PUPickerPrincipalUIViewControllerInterface>
{
    NSFileProviderDomain *_domain;	// 8 = 0x8
    PUAssetPickerCoordinator *_coordinator;	// 16 = 0x10
    NSLayoutConstraint *_topConstraint;	// 24 = 0x18
    NSLayoutConstraint *_bottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_leadingConstraint;	// 40 = 0x28
    NSLayoutConstraint *_trailingConstraint;	// 48 = 0x30
    NSLayoutConstraint *_leadingSafeAreaConstraint;	// 56 = 0x38
    NSLayoutConstraint *_trailingSafeAreaConstraint;	// 64 = 0x40
    NSOrderedSet *_selectedObjectIDs;	// 72 = 0x48
    NSDate *_selectionDate;	// 80 = 0x50
}

+ (_Bool)shouldDebounceDidFinishPicking:(id)arg1 previousSelectedObjectIDs:(id)arg2 previousSelectionDate:(id)arg3;	// IMP=0x00000000000166eb
+ (id)_remoteViewControllerInterface;	// IMP=0x00000000000166d2
+ (id)_exportedInterface;	// IMP=0x00000000000166b2
+ (void)initialize;	// IMP=0x000000000001657f
- (void).cxx_destruct;	// IMP=0x0000000000015e30
@property(retain, nonatomic) NSDate *selectionDate; // @synthesize selectionDate=_selectionDate;
@property(retain, nonatomic) NSOrderedSet *selectedObjectIDs; // @synthesize selectedObjectIDs=_selectedObjectIDs;
@property(retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint; // @synthesize trailingSafeAreaConstraint=_trailingSafeAreaConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint; // @synthesize leadingSafeAreaConstraint=_leadingSafeAreaConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) PUAssetPickerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
- (void)coordinator:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x0000000000015932
- (void)_moveAssetWithIdentifier:(id)arg1 afterIdentifier:(id)arg2;	// IMP=0x00000000000157ca
- (void)_deselectAssetsWithIdentifiers:(id)arg1;	// IMP=0x0000000000015671
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg1;	// IMP=0x0000000000015632
- (void)finishPicking:(id)arg1;	// IMP=0x00000000000151b7
- (void)confirmPicking:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f2c
- (void)logExitIfNeeded:(id)arg1;	// IMP=0x0000000000014d07
- (_Bool)setImagePickerPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014b69
- (id)synchronousLoadConfigurationFromExtensionContext:(id *)arg1;	// IMP=0x0000000000014684
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001459e
- (void)updateViewConstraints;	// IMP=0x00000000000143f5
- (void)viewDidLoad;	// IMP=0x0000000000013bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

