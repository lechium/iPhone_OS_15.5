//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetObservingDelegate-Protocol.h>
#import <DataDeliveryServices/DDSManagingDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol DDSAssetObserving, DDSAssetProviding, DDSManaging, OS_dispatch_queue;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSAssetObservingDelegate>
{
    id <DDSAssetProviding> _provider;	// 8 = 0x8
    id <DDSManaging> _managerInterface;	// 16 = 0x10
    NSMutableSet *_delegates;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <DDSAssetObserving> _assetObserver;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000000220f
- (void).cxx_destruct;	// IMP=0x0000000000002efb
@property(readonly, nonatomic) id <DDSAssetObserving> assetObserver; // @synthesize assetObserver=_assetObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) id <DDSManaging> managerInterface; // @synthesize managerInterface=_managerInterface;
@property(readonly, nonatomic) id <DDSAssetProviding> provider; // @synthesize provider=_provider;
- (void)triggerUpdate;	// IMP=0x0000000000002e8c
- (void)triggerDump;	// IMP=0x0000000000002e4f
- (void)serverDidUpdateAssetsWithType:(id)arg1;	// IMP=0x0000000000002c66
- (id)assertionIDsForClientID:(id)arg1;	// IMP=0x00000000000029e3
- (void)removeAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000000002971
- (void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;	// IMP=0x00000000000028aa
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;	// IMP=0x0000000000002813
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000278a
- (id)assetsForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002701
- (void)unregisterDelegate:(id)arg1;	// IMP=0x00000000000025c6
- (void)registerDelegate:(id)arg1;	// IMP=0x0000000000002466
- (id)initWithProvider:(id)arg1 managerInterface:(id)arg2;	// IMP=0x00000000000022d8
- (id)init;	// IMP=0x00000000000022ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
