//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSITunesStore.h>

#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUIJSITunesStore-Protocol.h>

@class NSString, SKUIClientContext, SKUIJSAppleAccount, SKUIJSRestrictions;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    _Bool _isAppPreview;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008cdf8
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;	// IMP=0x000000000008cd77
- (id)_millisecondsFromTimeInterval:(double)arg1;	// IMP=0x000000000008cd51
- (void)_displayWifiConnectionRequiredAlert;	// IMP=0x000000000008cbda
- (void)_finishSoftwarePurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;	// IMP=0x000000000008c5ff
- (void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2;	// IMP=0x000000000008c024
- (void)itemStateCenterMediaLibrariesDidChange:(id)arg1;	// IMP=0x000000000008bf7c
- (void)fetchMSOProviderStatus:(id)arg1;	// IMP=0x000000000008bb16
- (void)fetchTemplates:(id)arg1:(id)arg2;	// IMP=0x000000000008b4f9
- (id)_rentalInfoFromMediaItems:(id)arg1;	// IMP=0x000000000008a9da
- (void)loadRental:(id)arg1:(id)arg2;	// IMP=0x000000000008a3c8
- (void)loadRentals:(id)arg1;	// IMP=0x0000000000089ed6
- (void)updateToggleStateForItem:(id)arg1 toggled:(_Bool)arg2:(id)arg3;	// IMP=0x0000000000089b9c
- (void)setPreviewOverlay:(id)arg1:(id)arg2;	// IMP=0x00000000000899e2
@property(nonatomic) long long applicationIconBadgeNumber;
- (void)restoreRemovedSystemApp:(id)arg1:(id)arg2;	// IMP=0x0000000000089443
- (_Bool)resourceExists:(id)arg1;	// IMP=0x0000000000089364
- (void)resetStateForActiveDocument;	// IMP=0x00000000000892a2
@property(readonly, nonatomic) SKUIJSRestrictions *restrictions;
@property(readonly, nonatomic) SKUIJSAppleAccount *primaryAppleAccount;
- (void)headsUp:(id)arg1:(id)arg2;	// IMP=0x000000000008918a
- (void)log:(id)arg1;	// IMP=0x0000000000089173
- (void)loadGratisContent:(id)arg1;	// IMP=0x0000000000088def
- (void)launchICloudFamilySettings;	// IMP=0x0000000000088de9
- (void)isRemovedSystemApp:(id)arg1:(id)arg2;	// IMP=0x00000000000888c3
- (void)isInstalledApp:(id)arg1:(id)arg2;	// IMP=0x00000000000885b5
- (void)getProfilePermissions:(id)arg1:(id)arg2;	// IMP=0x0000000000087f30
- (id)documentSizeForNavigationDocument:(id)arg1;	// IMP=0x0000000000087e8e
@property(readonly, nonatomic) _Bool isAppPreview;
@property(readonly, copy, nonatomic) NSString *hostApp;
- (void)getAdminStatus:(id)arg1:(id)arg2;	// IMP=0x0000000000087921
- (void)getBookSample:(id)arg1;	// IMP=0x0000000000087866
- (void)findToggleStateForItem:(id)arg1:(id)arg2;	// IMP=0x0000000000087516
- (void)findOwnedItems:(id)arg1:(id)arg2;	// IMP=0x0000000000086fb4
- (void)findLibraryItems:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000086c50
- (void)findApps:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000086599
- (void)exit:(id)arg1;	// IMP=0x0000000000086463
- (void)downloadExistsFor:(id)arg1:(id)arg2;	// IMP=0x0000000000085ec0
- (void)download:(id)arg1;	// IMP=0x0000000000085dc2
- (void)clearToggleStateItems;	// IMP=0x0000000000085d7e
- (void)approveInPerson:(id)arg1:(id)arg2;	// IMP=0x0000000000085d78
- (void)buy:(id)arg1;	// IMP=0x0000000000085688
- (void)attemptLocalAskToBuyApproval:(id)arg1;	// IMP=0x0000000000085682
- (_Bool)areVideosCloudPurchasesEnabled;	// IMP=0x000000000008564b
- (_Bool)sendOnShowPageEventType:(id)arg1 data:(id)arg2;	// IMP=0x000000000008538b
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize)arg1;	// IMP=0x00000000000852cc
- (_Bool)sendAppPreviewStateChanged:(_Bool)arg1;	// IMP=0x000000000008512f
- (_Bool)sendOnXEventWithDictionary:(id)arg1;	// IMP=0x0000000000084fea
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;	// IMP=0x0000000000084e3b
- (void)sendOnNavigationStackWillPop:(_Bool)arg1;	// IMP=0x0000000000084d38
- (void)sendApplicationWillEnterForeground;	// IMP=0x0000000000084d14
- (void)sendApplicationDidEnterBackground;	// IMP=0x0000000000084cf0
- (void)dealloc;	// IMP=0x0000000000084c34
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;	// IMP=0x0000000000084b0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

