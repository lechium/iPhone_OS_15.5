//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNPresenterDelegate-Protocol.h>
#import <ContactsUI/CNVisualIdentityPickerPresenterDelegate-Protocol.h>
#import <ContactsUI/QLPreviewControllerDataSource-Protocol.h>
#import <ContactsUI/QLPreviewControllerDelegate-Protocol.h>
#import <ContactsUI/UIDropInteractionDelegate-Protocol.h>
#import <ContactsUI/UIImagePickerControllerDelegate-Protocol.h>
#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNAvatarView, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNPhotoPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, CNAvatarViewDelegate, CNPresenterDelegate>
{
    _Bool _editing;	// 8 = 0x8
    _Bool _showEditingLabel;	// 9 = 0x9
    _Bool _modified;	// 10 = 0xa
    _Bool _shouldAllowTakePhotoAction;	// 11 = 0xb
    _Bool _prohibitsPersonaFetch;	// 12 = 0xc
    _Bool _isAnimatingBounce;	// 13 = 0xd
    _Bool _acceptsImageDrop;	// 14 = 0xe
    NSArray *_contacts;	// 16 = 0x10
    double _labelAlpha;	// 24 = 0x18
    CNAvatarView *_avatarView;	// 32 = 0x20
    id <CNPresenterDelegate> _presenterDelegate;	// 40 = 0x28
    id <CNContactPhotoViewDelegate> _delegate;	// 48 = 0x30
    CNMutableContact *_pendingEditContact;	// 56 = 0x38
    PRLikeness *_originalLikeness;	// 64 = 0x40
    PRLikeness *_currentLikeness;	// 72 = 0x48
    UIButton *_editPhotoButton;	// 80 = 0x50
    NSArray *_variableConstraints;	// 88 = 0x58
    UITapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 104 = 0x68
    UIDropInteraction *_dropInteraction;	// 112 = 0x70
    CNPhotoPickerViewController *_photoPicker;	// 120 = 0x78
}

+ (id)supportedPasteboardTypes;	// IMP=0x0000000000062618
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000000062610
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;	// IMP=0x00000000000624f1
+ (id)descriptorForRequiredKeys;	// IMP=0x00000000000624da
+ (struct CGSize)defaultSize;	// IMP=0x00000000000624c9
- (void).cxx_destruct;	// IMP=0x0000000000061e25
@property(retain, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) _Bool acceptsImageDrop; // @synthesize acceptsImageDrop=_acceptsImageDrop;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(nonatomic) _Bool prohibitsPersonaFetch; // @synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) _Bool shouldAllowTakePhotoAction; // @synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic) _Bool showEditingLabel; // @synthesize showEditingLabel=_showEditingLabel;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000000061a53
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000000619a6
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000000618a6
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x000000000006176f
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x0000000000061764
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x00000000000616ec
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;	// IMP=0x000000000006160b
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x00000000000615f9
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x000000000006138f
- (void)didUpdateContentForAvatarView:(id)arg1;	// IMP=0x0000000000061319
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;	// IMP=0x0000000000061261
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x0000000000061202
- (void)_bounceSmallPhoto;	// IMP=0x000000000006104d
- (void)_presentFullScreenPhoto:(id)arg1;	// IMP=0x0000000000060f3a
- (void)_zoomContactPhoto;	// IMP=0x0000000000060cb8
- (id)previewPath;	// IMP=0x0000000000060c6a
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;	// IMP=0x0000000000060ab3
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000000060a3e
- (void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2;	// IMP=0x00000000000607f4
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000000006060f
- (void)visualIdentityPicker:(id)arg1 presentationControllerWillDismiss:(id)arg2;	// IMP=0x0000000000060527
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;	// IMP=0x00000000000601c1
- (void)photoPickerDidCancel:(id)arg1;	// IMP=0x000000000006013e
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060060
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x000000000006004b
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000005ffbb
- (void)_presentPhotoPicker;	// IMP=0x000000000005fdb0
- (void)presentPhotoPicker;	// IMP=0x000000000005fd9e
- (_Bool)_isUsingSilhouette;	// IMP=0x000000000005fcc4
- (_Bool)_isUsingCuratedPhoto;	// IMP=0x000000000005fc0b
- (void)updatePendingContactWithEditedPropertyItem:(id)arg1;	// IMP=0x000000000005f9d7
- (void)updateEditPhotoButton;	// IMP=0x000000000005f5d6
- (void)updateViewsAndNotifyDelegate:(_Bool)arg1;	// IMP=0x000000000005f3aa
- (void)reloadData;	// IMP=0x000000000005f393
- (void)updatePhoto;	// IMP=0x000000000005f2f9
- (void)resetPhoto;	// IMP=0x000000000005f29c
- (void)paste:(id)arg1;	// IMP=0x000000000005ef66
- (void)copy:(id)arg1;	// IMP=0x000000000005ee3a
- (void)menuWillHide:(id)arg1;	// IMP=0x000000000005ee01
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000005ed4d
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000005ec6c
- (void)longPressGesture:(id)arg1;	// IMP=0x000000000005eba9
- (void)avatarTapped:(id)arg1;	// IMP=0x000000000005eb3d
- (void)disablePhotoTapGesture;	// IMP=0x000000000005eafe
- (void)setHighlightedFrame:(_Bool)arg1;	// IMP=0x000000000005e8d1
- (void)setEditing:(_Bool)arg1 preservingChanges:(_Bool)arg2;	// IMP=0x000000000005e89e
- (_Bool)hasPhoto;	// IMP=0x000000000005e705
- (void)saveEdits;	// IMP=0x000000000005e694
- (void)saveChangesFromPendingContact:(id)arg1 toContact:(id)arg2;	// IMP=0x000000000005e0a4
- (id)currentImageData;	// IMP=0x000000000005e03a
- (void)updateFontSizes;	// IMP=0x000000000005df87
- (id)newPendingContactPreservingChangesFrom:(id)arg1;	// IMP=0x000000000005df05
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;	// IMP=0x000000000005dd97
- (_Bool)isMeContact;	// IMP=0x000000000005dd8f
- (void)dealloc;	// IMP=0x000000000005da8a
- (id)initWithFrame:(struct CGRect)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 threeDTouchEnabled:(_Bool)arg3 contactStore:(id)arg4 allowsImageDrops:(_Bool)arg5 imageRenderer:(id)arg6;	// IMP=0x000000000005d162

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

