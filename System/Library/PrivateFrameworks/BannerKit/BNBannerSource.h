//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/BNBannerClientContainerDelegate-Protocol.h>
#import <BannerKit/BNBannerSceneComponentProviderDelegate-Protocol.h>
#import <BannerKit/BNBannerSourceHostToClientInterface-Protocol.h>
#import <BannerKit/BNBannerSourceProviding-Protocol.h>
#import <BannerKit/BNBannerSourceProvidingPrivate-Protocol.h>

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol BNBannerClientContainer, BNBannerSourceDelegate, OS_dispatch_queue;

@interface BNBannerSource : NSObject <BNBannerSourceHostToClientInterface, BNBannerSceneComponentProviderDelegate, BNBannerClientContainerDelegate, BNBannerSourceProvidingPrivate, BNBannerSourceProviding>
{
    NSString *_machName;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    BSServiceConnection *_connection;	// 24 = 0x18
    NSMutableDictionary *_uniqueIDsToPresentables;	// 32 = 0x20
    id <BNBannerClientContainer> _bannerClientContainerDeferringFocus;	// 40 = 0x28
    _Bool _valid;	// 48 = 0x30
    long long _destination;	// 56 = 0x38
    NSString *_requesterIdentifier;	// 64 = 0x40
    id <BNBannerSourceDelegate> _delegate;	// 72 = 0x48
}

+ (void)_invalidateBannerSource:(id)arg1;	// IMP=0x0000000000005cbd
+ (id)bannerSourceForDestination:(long long)arg1 forRequesterIdentifier:(id)arg2;	// IMP=0x0000000000003c5a
+ (void)initialize;	// IMP=0x00000000000037a8
- (void).cxx_destruct;	// IMP=0x00000000000072c8
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak id <BNBannerSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier; // @synthesize requesterIdentifier=_requesterIdentifier;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
- (id)_revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(id)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x0000000000006ce6
- (void)_removePresentable:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000069a9
- (void)_removePresentableWithUniqueIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000006773
- (id)_presentableForUniqueIdentifier:(id)arg1;	// IMP=0x00000000000066de
- (void)_addPresentable:(id)arg1;	// IMP=0x0000000000006577
- (void)_invalidateConnection;	// IMP=0x000000000000649c
- (id)_activeConnectionWithError:(out id *)arg1;	// IMP=0x0000000000005dca
- (void)bannerClientContainerStoppedDeferringFocus:(id)arg1;	// IMP=0x0000000000005c61
- (_Bool)bannerClientContainerShouldDeferFocus:(id)arg1;	// IMP=0x0000000000005c37
- (void)sceneWillInvalidateForBannerSceneComponentProvider:(id)arg1;	// IMP=0x0000000000005bbe
- (id)containerViewControllerForBannerSceneComponentProvider:(id)arg1;	// IMP=0x00000000000059b6
- (void)invalidate;	// IMP=0x00000000000058b8
- (_Bool)setSuspended:(_Bool)arg1 forReason:(id)arg2 revokingCurrent:(_Bool)arg3 error:(out id *)arg4;	// IMP=0x00000000000054c4
- (id)keyWindowForScreen:(id)arg1;	// IMP=0x0000000000005428
- (id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x00000000000051d8
- (_Bool)revokePresentableWithRequestIdentifier:(id)arg1 animated:(_Bool)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x0000000000005195
- (id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000000506d
- (id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4 error:(out id *)arg5;	// IMP=0x0000000000004e99
- (_Bool)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000004266
- (id)layoutDescriptionWithError:(out id *)arg1;	// IMP=0x0000000000003ee9
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000003b54
- (id)initWithDestination:(long long)arg1 andRequesterIdentifier:(id)arg2;	// IMP=0x000000000000397f
- (id)initWithMachName:(id)arg1 andRequesterIdentifier:(id)arg2;	// IMP=0x00000000000037d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

