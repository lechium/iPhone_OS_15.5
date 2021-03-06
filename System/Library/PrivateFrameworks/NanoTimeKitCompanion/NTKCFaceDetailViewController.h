//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailActionSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailComplicationPickerViewControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailComplicationSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailDescriptionSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionModifiedDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailOtherSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCFaceDetailPhotosSectionDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKCTableViewProviding-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>
#import <NanoTimeKitCompanion/UITableViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NTKCFaceContainerView, NTKCFaceDetailDescriptionSectionController, NTKCFaceDetailKaleidoscopeContentSectionController, NTKCFaceDetailKaleidoscopeStyleSectionController, NTKCFaceDetailOtherSectionController, NTKCFaceDetailPhotosSectionController, NTKCFaceDetailPigmentSectionController, NTKCompanionFaceViewController, NTKFace, NTKFaceCollection, NTKGreenfieldCompanionShareController, UIActivityIndicatorView, UIBarButtonItem, UIButton, UILabel, UITableView, UITableViewCell, UIView, _NTKCDetailHeaderView;
@protocol NTKCFaceDetailViewControllerDelegate;

@interface NTKCFaceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailActionSectionDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKCFaceDetailEditOptionModifiedDelegate, NTKCTableViewProviding, NTKCFaceDetailEditOptionSectionDelegate>
{
    _Bool _isSuppressingFaceDidChange;	// 8 = 0x8
    _Bool _shared;	// 9 = 0x9
    _Bool _faceHasBeenEdited;	// 10 = 0xa
    _Bool _inGallery;	// 11 = 0xb
    NTKFace *_face;	// 16 = 0x10
    id <NTKCFaceDetailViewControllerDelegate> _delegate;	// 24 = 0x18
    NTKCFaceContainerView *_faceContainer;	// 32 = 0x20
    NTKFaceCollection *_library;	// 40 = 0x28
    double _intrinsicHeaderHeight;	// 48 = 0x30
    _NTKCDetailHeaderView *_headerView;	// 56 = 0x38
    UILabel *_faceName;	// 64 = 0x40
    UIView *_headerSeparator;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
    NSMutableArray *_currentSections;	// 88 = 0x58
    NTKCFaceDetailDescriptionSectionController *_descriptionSection;	// 96 = 0x60
    NSMutableArray *_editOptionSections;	// 104 = 0x68
    NSMutableArray *_dynamicEditOptionSections;	// 112 = 0x70
    NTKCFaceDetailPhotosSectionController *_photosSection;	// 120 = 0x78
    NTKCFaceDetailKaleidoscopeContentSectionController *_kaleidoscopeContentSection;	// 128 = 0x80
    NTKCFaceDetailKaleidoscopeStyleSectionController *_kaleidoscopeStyleSection;	// 136 = 0x88
    NTKCFaceDetailOtherSectionController *_otherSection;	// 144 = 0x90
    NTKCFaceDetailPigmentSectionController *_pigmentSection;	// 152 = 0x98
    CDUnknownBlockType _selectionFinishedHandler;	// 160 = 0xa0
    UITableViewCell *_editOptionToMakeFullyVisible;	// 168 = 0xa8
    UIBarButtonItem *_shareNavButton;	// 176 = 0xb0
    NTKGreenfieldCompanionShareController *_shareController;	// 184 = 0xb8
    UIViewController *_modalViewControllerPresentedByThisViewController;	// 192 = 0xc0
    NTKCompanionFaceViewController *_faceVC;	// 200 = 0xc8
    NSArray *_externalAssets;	// 208 = 0xd0
    UIButton *_addButton;	// 216 = 0xd8
    UIActivityIndicatorView *_addSpinner;	// 224 = 0xe0
    struct CGSize _headerFaceSize;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000000ffbaf
@property(retain, nonatomic) UIActivityIndicatorView *addSpinner; // @synthesize addSpinner=_addSpinner;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(copy, nonatomic) NSArray *externalAssets; // @synthesize externalAssets=_externalAssets;
@property(nonatomic) _Bool inGallery; // @synthesize inGallery=_inGallery;
@property(retain, nonatomic) NTKCompanionFaceViewController *faceVC; // @synthesize faceVC=_faceVC;
@property(retain, nonatomic) UIViewController *modalViewControllerPresentedByThisViewController; // @synthesize modalViewControllerPresentedByThisViewController=_modalViewControllerPresentedByThisViewController;
@property(retain, nonatomic) NTKGreenfieldCompanionShareController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) UIBarButtonItem *shareNavButton; // @synthesize shareNavButton=_shareNavButton;
@property(readonly, nonatomic) _Bool faceHasBeenEdited; // @synthesize faceHasBeenEdited=_faceHasBeenEdited;
@property(retain, nonatomic) UITableViewCell *editOptionToMakeFullyVisible; // @synthesize editOptionToMakeFullyVisible=_editOptionToMakeFullyVisible;
@property(copy, nonatomic) CDUnknownBlockType selectionFinishedHandler; // @synthesize selectionFinishedHandler=_selectionFinishedHandler;
@property(retain, nonatomic) NTKCFaceDetailPigmentSectionController *pigmentSection; // @synthesize pigmentSection=_pigmentSection;
@property(retain, nonatomic) NTKCFaceDetailOtherSectionController *otherSection; // @synthesize otherSection=_otherSection;
@property(retain, nonatomic) NTKCFaceDetailKaleidoscopeStyleSectionController *kaleidoscopeStyleSection; // @synthesize kaleidoscopeStyleSection=_kaleidoscopeStyleSection;
@property(retain, nonatomic) NTKCFaceDetailKaleidoscopeContentSectionController *kaleidoscopeContentSection; // @synthesize kaleidoscopeContentSection=_kaleidoscopeContentSection;
@property(retain, nonatomic) NTKCFaceDetailPhotosSectionController *photosSection; // @synthesize photosSection=_photosSection;
@property(retain, nonatomic) NSMutableArray *dynamicEditOptionSections; // @synthesize dynamicEditOptionSections=_dynamicEditOptionSections;
@property(retain, nonatomic) NSMutableArray *editOptionSections; // @synthesize editOptionSections=_editOptionSections;
@property(retain, nonatomic) NTKCFaceDetailDescriptionSectionController *descriptionSection; // @synthesize descriptionSection=_descriptionSection;
@property(retain, nonatomic) NSMutableArray *currentSections; // @synthesize currentSections=_currentSections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerSeparator; // @synthesize headerSeparator=_headerSeparator;
@property(retain, nonatomic) UILabel *faceName; // @synthesize faceName=_faceName;
@property(retain, nonatomic) _NTKCDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double intrinsicHeaderHeight; // @synthesize intrinsicHeaderHeight=_intrinsicHeaderHeight;
@property(nonatomic) struct CGSize headerFaceSize; // @synthesize headerFaceSize=_headerFaceSize;
@property(retain, nonatomic) NTKFaceCollection *library; // @synthesize library=_library;
@property(retain, nonatomic) NTKCFaceContainerView *faceContainer; // @synthesize faceContainer=_faceContainer;
@property(nonatomic) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic) __weak id <NTKCFaceDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NTKFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) UITableView *ntk_tableView;
- (void)_didTapShareButton;	// IMP=0x00000000000ff40a
- (_Bool)_isShareButtonEnabled;	// IMP=0x00000000000ff3ce
- (void)_updateShareButton;	// IMP=0x00000000000ff29f
- (void)actionSectionDidDelete:(id)arg1;	// IMP=0x00000000000ff021
- (void)actionSectionDidSelect:(id)arg1;	// IMP=0x00000000000fefbb
- (void)otherSection:(id)arg1 didChangeShowSeconds:(id)arg2 forMode:(long long)arg3;	// IMP=0x00000000000fefa0
- (void)otherSectionDidSelectMonogramEdit:(id)arg1;	// IMP=0x00000000000fef16
- (void)otherSection:(id)arg1 didToggleMonogram:(id)arg2 forSlot:(id)arg3;	// IMP=0x00000000000feefe
- (void)faceDetailComplicationPickerViewController:(id)arg1 didSelectComplication:(id)arg2;	// IMP=0x00000000000fedf8
- (void)complicationSection:(id)arg1 wantsToPresentPickerForSlot:(id)arg2 selectedComplication:(id)arg3;	// IMP=0x00000000000fecb4
- (void)complicationSection:(id)arg1 didChangeToComplication:(id)arg2 forSlot:(id)arg3;	// IMP=0x00000000000fec9c
- (id)complicationSection:(id)arg1 allowedComplicationsForSlot:(id)arg2;	// IMP=0x00000000000febf2
- (void)photoSectionDidUpdate:(id)arg1;	// IMP=0x00000000000febc4
- (void)editOptionSection:(id)arg1 didSelectActionForOptionAtIndex:(long long)arg2;	// IMP=0x00000000000febbe
- (void)_applySectionIndexKeysToCurrentSectionsFromIndex:(unsigned long long)arg1;	// IMP=0x00000000000feb2c
- (void)_addOrRemoveDynamicSectionsWithCollection:(id)arg1;	// IMP=0x00000000000fe850
- (void)editOptionSection:(id)arg1 didSelectOptionAtIndex:(long long)arg2;	// IMP=0x00000000000fe70f
- (void)editOptionSection:(id)arg1 didModifyEditOption:(id)arg2 transiently:(_Bool)arg3 canceled:(_Bool)arg4;	// IMP=0x00000000000fe64e
- (void)descriptionSection:(id)arg1 didExpand:(_Bool)arg2;	// IMP=0x00000000000fe60b
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000fe5f9
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000fe5e7
- (void)faceCollectionDidLoad:(id)arg1;	// IMP=0x00000000000fe5d5
- (void)faceResourceDirectoryDidChange:(id)arg1;	// IMP=0x00000000000fe5c3
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;	// IMP=0x00000000000fe5ae
- (void)faceConfigurationDidChange:(id)arg1;	// IMP=0x00000000000fe59c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000fe3e3
- (id)_pruneComplicationsNotAvailableOnGizmo:(id)arg1;	// IMP=0x00000000000fe136
- (id)_pruneRemovedOrRestrictedComplications:(id)arg1;	// IMP=0x00000000000fde2e
- (_Bool)_cellIsHiddenBehindHeader:(id)arg1;	// IMP=0x00000000000fdce9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fdc34
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fdb44
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000000fdae2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fda37
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000fd9d9
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000fd936
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000fd8e4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000fd8c7
- (_Bool)_isEditable;	// IMP=0x00000000000fd889
- (void)_addFaceEndedForFace:(id)arg1;	// IMP=0x00000000000fd80c
- (void)_addFace;	// IMP=0x00000000000fc92a
- (void)_addTapped;	// IMP=0x00000000000fc785
- (void)attemptToAddFace;	// IMP=0x00000000000fc773
- (_Bool)_hasRemovedSystemApp;	// IMP=0x00000000000fc4ec
- (id)_errorMessageForErrorCode:(long long)arg1;	// IMP=0x00000000000fc045
@property(readonly, nonatomic) NSString *reasonFaceCanNotBeAddedToLibrary;
- (void)_updateAddButton;	// IMP=0x00000000000fbebf
- (void)_setFaceHasBeenEdited;	// IMP=0x00000000000fbdd4
- (_Bool)_isEditOptionFullyVisible:(id)arg1;	// IMP=0x00000000000fbbfc
- (void)_setEditOption:(id)arg1 forMode:(long long)arg2 slot:(id)arg3 transiently:(_Bool)arg4;	// IMP=0x00000000000fbad3
- (void)_setEditOption:(id)arg1 forMode:(long long)arg2 slot:(id)arg3;	// IMP=0x00000000000fbabe
- (void)_setComplication:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000000fb9a6
- (void)_loadLibrary;	// IMP=0x00000000000fb8f4
- (void)_dismissModalViewControllerPresentedByThisViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fb72b
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fb6bb
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fb62e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000fb5e9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fb593
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fb54f
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000000fb4ce
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000fa652
- (void)_ensureOtherSection;	// IMP=0x00000000000fa5bc
- (id)_sectionForEditOptionCollection:(id)arg1;	// IMP=0x00000000000f9fb6
- (void)_faceDidChangeResourceDirectory;	// IMP=0x00000000000f9f5b
- (void)_faceChangedOptionsForEditMode:(long long)arg1;	// IMP=0x00000000000f9b68
- (void)_faceDidChange;	// IMP=0x00000000000f96ba
- (void)viewDidLoad;	// IMP=0x00000000000f857d
- (void)dealloc;	// IMP=0x00000000000f8512
- (id)initWithFace:(id)arg1 inGallery:(_Bool)arg2 externalAssets:(id)arg3;	// IMP=0x00000000000f808d
- (id)initWithCandidateFace:(id)arg1 externalAssets:(id)arg2;	// IMP=0x00000000000f8073
- (id)initWithLibraryFace:(id)arg1;	// IMP=0x00000000000f805c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

