//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSBundle, NSString, ProximityStatusViewController, SVSCommonNavController, UINavigationController, UIStoryboard;

__attribute__((visibility("hidden")))
@interface ProximityCommonViewControllerProxy
{
    _Bool _didDisappear;	// 24 = 0x18
    SVSCommonNavController *_navController;	// 32 = 0x20
    _Bool _pairingMode;	// 40 = 0x28
    UINavigationController *_proxCardFlowNavigationController;	// 48 = 0x30
    _Bool _small;	// 56 = 0x38
    ProximityStatusViewController *_statusViewController;	// 64 = 0x40
    UIStoryboard *_storyboard;	// 72 = 0x48
    int _viewType;	// 80 = 0x50
    _Bool _shareAudio;	// 84 = 0x54
    _Bool _tempPaired;	// 85 = 0x55
    unsigned long long _debounceStartTicks;	// 88 = 0x58
    NSBundle *_assetBundle;	// 96 = 0x60
    unsigned long long _assetBundleFlagHash;	// 104 = 0x68
    NSString *_localizedName;	// 112 = 0x70
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00400000001c4b2d
- (void).cxx_destruct;	// IMP=0x00200000001c58db
@property(nonatomic) _Bool tempPaired; // @synthesize tempPaired=_tempPaired;
@property(nonatomic) _Bool shareAudio; // @synthesize shareAudio=_shareAudio;
@property(nonatomic) _Bool small; // @synthesize small=_small;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) ProximityStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(nonatomic) _Bool pairingMode; // @synthesize pairingMode=_pairingMode;
@property(retain, nonatomic) SVSCommonNavController *navController; // @synthesize navController=_navController;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(nonatomic) unsigned long long assetBundleFlagHash; // @synthesize assetBundleFlagHash=_assetBundleFlagHash;
@property(retain, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
- (void)announceNotificationsCompleted;	// IMP=0x00100000001c5762
- (void)pushStatusViewController;	// IMP=0x00100000001c567f
- (void)presentInitialStatusViewController;	// IMP=0x00100000001c55c0
- (_Bool)updateViewForLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3 refind:(_Bool)arg4 missingAssets:(_Bool)arg5 reload:(_Bool)arg6;	// IMP=0x00100000001c4e59
- (MISSING_TYPE *)updateViewForLevelLeft:levelRight:levelCase:refind:missingAssets: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001c4e41
- (_Bool)updateViewForLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3 refind:(_Bool)arg4;	// IMP=0x00100000001c4e2a
- (_Bool)updateViewForLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3;	// IMP=0x00100000001c4e16
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001c4d95
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000001c4d8d
- (void)dismiss:(int)arg1;	// IMP=0x00100000001c4b35

@end
