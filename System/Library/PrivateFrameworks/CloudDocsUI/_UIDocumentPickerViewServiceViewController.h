//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsUI/_UIDocumentListControllerDelegate-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerOverviewDelegate-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerRemoteViewControllerContaining-Protocol.h>
#import <CloudDocsUI/_UIDocumentPickerViewController-Protocol.h>
#import <CloudDocsUI/_UIDocumentTargetSelectionControllerDelegate-Protocol.h>

@class NSArray, NSString, NSURL, UIViewController;
@protocol _UIDocumentPickerViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerViewServiceViewController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentListControllerDelegate, _UIDocumentTargetSelectionControllerDelegate, _UIDocumentPickerViewController>
{
    _Bool _displayedAsMenu;	// 8 = 0x8
    _Bool _hasBeenDismissed;	// 9 = 0x9
    _Bool _showingSpinner;	// 10 = 0xa
    int _sortOrder;	// 12 = 0xc
    NSArray *_pickableTypes;	// 16 = 0x10
    unsigned long long _pickerMode;	// 24 = 0x18
    NSURL *_uploadURL;	// 32 = 0x20
    NSArray *_auxiliaryOptions;	// 40 = 0x28
    NSString *_currentPickerIdentifier;	// 48 = 0x30
    UIViewController *_currentPicker;	// 56 = 0x38
}

+ (id)_logicalURLForPhysicalURL:(id)arg1;	// IMP=0x000000000003850d
+ (id)_urlByResolvingExternalDocumentReferenceForURL:(id)arg1;	// IMP=0x00000000000383f1
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000000033916
+ (id)_exportedInterface;	// IMP=0x0000000000033866
- (void).cxx_destruct;	// IMP=0x000000000003aa2a
@property(retain, nonatomic) UIViewController *currentPicker; // @synthesize currentPicker=_currentPicker;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(nonatomic) _Bool hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(nonatomic) _Bool displayedAsMenu; // @synthesize displayedAsMenu=_displayedAsMenu;
@property(retain, nonatomic) NSString *currentPickerIdentifier; // @synthesize currentPickerIdentifier=_currentPickerIdentifier;
@property(retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic, setter=_setUploadURL:) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(nonatomic, setter=_setPickerMode:) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(copy, nonatomic, setter=_setPickableTypes:) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)_warnSharingForTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a18e
- (void)_warnSharingPreMove;	// IMP=0x0000000000039dff
- (_Bool)_shouldWarnForSharing;	// IMP=0x0000000000039d35
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;	// IMP=0x0000000000039665
- (void)_showExistsAlertForFile:(id)arg1 withSourceURL:(id)arg2;	// IMP=0x0000000000038eb3
- (id)_mangledFilenameForURL:(id)arg1;	// IMP=0x0000000000038b6a
- (void)pickLocationForUpload:(id)arg1;	// IMP=0x0000000000038aae
- (void)documentTargetSelectionController:(id)arg1 didSelectItemAtURL:(id)arg2;	// IMP=0x00000000000389fc
- (void)documentListController:(id)arg1 performAction:(long long)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000389f6
- (void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2;	// IMP=0x0000000000038710
- (void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2;	// IMP=0x00000000000385b3
- (void)setNavigationItemSpinner:(_Bool)arg1;	// IMP=0x00000000000381ac
- (void)_didSelectPicker;	// IMP=0x00000000000381a6
- (void)_stitchFileCreationAtURL:(id)arg1;	// IMP=0x00000000000381a0
- (void)_dismissWithOption:(id)arg1;	// IMP=0x000000000003819a
- (void)_didSelectURL:(id)arg1;	// IMP=0x00000000000380ee
- (void)_invalidatePicker:(id)arg1;	// IMP=0x00000000000380a2
- (void)_doneButton:(id)arg1;	// IMP=0x0000000000038020
- (void)_dismissViewController;	// IMP=0x000000000003800a
- (struct CGSize)_updatedContentSizeForPreferredContentSize:(struct CGSize)arg1;	// IMP=0x0000000000037f66
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;	// IMP=0x0000000000037e94
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;	// IMP=0x0000000000037aa3
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x00000000000377c7
- (void)_showLocationPopup:(id)arg1;	// IMP=0x0000000000037795
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;	// IMP=0x0000000000037781
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;	// IMP=0x0000000000037377
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 placeholder:(id)arg2;	// IMP=0x0000000000036bdc
- (void)_showPicker:(id)arg1;	// IMP=0x00000000000363ed
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;	// IMP=0x00000000000361ca
- (void)_showTopLevelViewController;	// IMP=0x0000000000035f38
- (void)_willAppearInRemoteViewController;	// IMP=0x0000000000035e02
- (void)_cloudEnabledStatusDidChange:(id)arg1;	// IMP=0x0000000000035da9
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035ca7
- (void)_setSourceIsManaged:(_Bool)arg1;	// IMP=0x0000000000035c95
- (void)_setIsContentManaged:(_Bool)arg1;	// IMP=0x0000000000035c7c
- (void)_setUploadURLWrapper:(id)arg1;	// IMP=0x0000000000035c2d
- (void)_updateDefaultPicker;	// IMP=0x0000000000035b4e
- (void)_showDefaultPicker;	// IMP=0x0000000000035b3c
- (void)_setTintColor:(id)arg1;	// IMP=0x0000000000035aca
- (void)_documentPickerDidDismiss;	// IMP=0x0000000000035a73
- (void)_waitForDownloadOfURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034c36
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000034a87
- (void)_dismissWithImportURL:(id)arg1;	// IMP=0x00000000000349f0
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000342b0
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;	// IMP=0x0000000000033e11
@property(readonly, nonatomic) id <_UIDocumentPickerViewControllerHost> hostingViewController; // @dynamic hostingViewController;
- (void)dealloc;	// IMP=0x0000000000033936

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

