//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAssetManager, NSString;

@interface CSAttSiriMitigationAssetHandler : NSObject
{
    CSAsset *_cachedAsset;	// 8 = 0x8
    CSAssetManager *_assetManager;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x0020000000030aa0
- (void).cxx_destruct;	// IMP=0x00200000000310c4
@property(retain, nonatomic) CSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x0010000000030f90
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x0010000000030f7b
- (void)_receivedNewAssetUpdate:(id)arg1;	// IMP=0x0010000000030db3
- (void)getMitigationAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030c06
- (void)start;	// IMP=0x0010000000030b58
- (id)init;	// IMP=0x0010000000030af5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

