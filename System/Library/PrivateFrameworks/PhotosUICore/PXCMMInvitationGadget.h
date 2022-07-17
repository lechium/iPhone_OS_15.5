//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMInvitationViewDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSManagedObjectID, NSString, PXCMMInvitationView, PXCMMInvitationViewModel, PXGadgetSpec, PXMomentShareStatusPresentation;
@protocol PXCMMInvitation, PXCMMInvitationGadgetDelegate, PXCMMWorkflowPresenting, PXGadgetDelegate;

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXCMMInvitationViewDelegate, PXGadget>
{
    id <PXCMMInvitation> _invitation;	// 8 = 0x8
    _Bool _didLoadInvitation;	// 16 = 0x10
    PXCMMInvitationViewModel *_invitationViewModel;	// 24 = 0x18
    PXCMMInvitationView *_invitationView;	// 32 = 0x20
    struct CGSize _requestedPosterImageSize;	// 40 = 0x28
    double _requestedWidth;	// 56 = 0x38
    _Bool _didRequestCachingOfPosterImage;	// 64 = 0x40
    PXGadgetSpec *_gadgetSpec;	// 72 = 0x48
    id <PXGadgetDelegate> _delegate;	// 80 = 0x50
    id <PXCMMWorkflowPresenting> _workflowPresenter;	// 88 = 0x58
    NSManagedObjectID *_objectID;	// 96 = 0x60
    id <PXCMMInvitationGadgetDelegate> _invitationGadgetDelegate;	// 104 = 0x68
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;	// 112 = 0x70
}

+ (id)_imageRequestOptions;	// IMP=0x00000000003f198f
+ (id)sharedUserInitiatedQueue;	// IMP=0x00000000003f195f
- (void).cxx_destruct;	// IMP=0x00000000003f1485
@property(retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation; // @synthesize momentShareStatusPresentation=_momentShareStatusPresentation;
@property(nonatomic) __weak id <PXCMMInvitationGadgetDelegate> invitationGadgetDelegate; // @synthesize invitationGadgetDelegate=_invitationGadgetDelegate;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void)presentDetailViewForInvitationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003f13ea
- (void)invitationViewSizeThatFitsDidChange:(id)arg1;	// IMP=0x00000000003f1399
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003f1297
- (void)_clearPosterImageCache;	// IMP=0x00000000003f1103
- (void)_cachePosterImageWithWidth:(double)arg1;	// IMP=0x00000000003f0ed8
- (void)_presentDetailViewAnimated:(_Bool)arg1;	// IMP=0x00000000003f0c79
- (void)_updateExpirationTitle:(id)arg1;	// IMP=0x00000000003f0994
- (void)_updateStatusString:(id)arg1;	// IMP=0x00000000003f0777
- (void)_updateTitle:(id)arg1;	// IMP=0x00000000003f0298
- (void)_registerMomentShareStatusPresentation;	// IMP=0x00000000003f0152
- (void)_lastExitedForYouDateDidChange:(id)arg1;	// IMP=0x00000000003f00ff
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000003f00ac
- (void)_loadInvitationIfNecessary;	// IMP=0x00000000003efff6
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x00000000003effe2
- (id)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(id)arg2;	// IMP=0x00000000003efdac
- (id)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000003efcbd
- (void)prefetchDuringScrollingForWidth:(double)arg1;	// IMP=0x00000000003efbaf
@property(retain, nonatomic) id <PXCMMInvitation> invitation;
- (void)contentHasBeenSeen;	// IMP=0x00000000003ef990
- (id)uniqueGadgetIdentifier;	// IMP=0x00000000003ef940
- (void)userDidSelectGadget;	// IMP=0x00000000003ef929
- (_Bool)supportsHighlighting;	// IMP=0x00000000003ef921
- (void)prepareCollectionViewItem:(id)arg1;	// IMP=0x00000000003ef67a
@property(readonly, nonatomic) Class collectionViewItemClass;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003ef617
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)presentDetailViewAnimated:(_Bool)arg1;	// IMP=0x00000000003ef551
- (id)initWithWorkflowPresenter:(id)arg1;	// IMP=0x00000000003ef310
- (id)init;	// IMP=0x00000000003ef296

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end
