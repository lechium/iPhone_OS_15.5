//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CRCarPlayCapabilitiesManager, NSString;
@protocol OS_dispatch_queue;

@interface CRCarPlayAppServiceAgent : NSObject
{
    _Bool _assetQueryInProgress;	// 8 = 0x8
    CARSessionStatus *_sessionStatus;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_assetQueue;	// 24 = 0x18
    CRCarPlayCapabilitiesManager *_carCapabilitiesManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000012a19
@property(retain, nonatomic) CRCarPlayCapabilitiesManager *carCapabilitiesManager; // @synthesize carCapabilitiesManager=_carCapabilitiesManager;
@property(nonatomic) _Bool assetQueryInProgress; // @synthesize assetQueryInProgress=_assetQueryInProgress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000127f2
- (id)_parseBlacklistContent:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000012575
- (void)_reloadWithAsset:(id)arg1;	// IMP=0x00100000000122fe
- (id)_mostRecentAssetForAssets:(id)arg1;	// IMP=0x00100000000122ae
- (id)_sortAssets:(id)arg1;	// IMP=0x0010000000012191
- (void)_queryForUpdatedAsset;	// IMP=0x0010000000011a15
- (void)_requestAssetCatalogDownload;	// IMP=0x0010000000011889
- (void)_setBlacklistPreference:(id)arg1;	// IMP=0x001000000001178f
- (id)_blacklistPreference;	// IMP=0x0010000000011769
- (void)dealloc;	// IMP=0x00100000000116f4
- (void)requestCarCapabilitiesStatus:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000113d8
- (void)requestCarCapabilitiesUpdate;	// IMP=0x0010000000011375
- (void)requestBlacklistUpdate;	// IMP=0x0010000000011363
- (id)initWithSessionStatus:(id)arg1;	// IMP=0x00100000000111fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

