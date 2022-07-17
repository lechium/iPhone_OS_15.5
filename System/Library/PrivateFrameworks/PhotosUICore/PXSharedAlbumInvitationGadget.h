//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXSharedAlbumInvitationViewDelegate-Protocol.h>

@class NSString, PXFeedInvitationSectionInfo, PXGadgetSpec, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView;
@protocol PXGadgetDelegate;

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget>
{
    _Bool _loadedContentData;	// 8 = 0x8
    PXGadgetSpec *_gadgetSpec;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    id <PXGadgetDelegate> _delegate;	// 32 = 0x20
    PXFeedInvitationSectionInfo *_invitationSectionInfo;	// 40 = 0x28
    PXSharedAlbumHeaderView *_headerView;	// 48 = 0x30
    PXSharedAlbumInvitationView *_invitationView;	// 56 = 0x38
}

+ (void)preloadResources;	// IMP=0x00000000009706d0
- (void).cxx_destruct;	// IMP=0x00000000009705b8
@property(nonatomic) _Bool loadedContentData; // @synthesize loadedContentData=_loadedContentData;
@property(retain, nonatomic) PXSharedAlbumInvitationView *invitationView; // @synthesize invitationView=_invitationView;
@property(retain, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // @synthesize invitationSectionInfo=_invitationSectionInfo;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000097041f
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000970384
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;	// IMP=0x00000000009702cf
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(_Bool)arg2;	// IMP=0x00000000009700bb
- (void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2;	// IMP=0x000000000096ff72
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x000000000096f920
- (void)_updateInvitationView;	// IMP=0x000000000096f87a
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000096f81c
- (id)uniqueGadgetIdentifier;	// IMP=0x000000000096f7a2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000096f75c
- (id)contentViewController;	// IMP=0x000000000096f6d2
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)viewWillLayoutSubviews;	// IMP=0x000000000096f551
- (void)viewDidLoad;	// IMP=0x000000000096f449
- (void)dealloc;	// IMP=0x000000000096f2ed
- (id)init;	// IMP=0x000000000096f217

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end
