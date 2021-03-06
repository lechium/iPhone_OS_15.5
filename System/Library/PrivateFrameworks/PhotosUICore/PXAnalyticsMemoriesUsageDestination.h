//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CPAnalyticsDestinationProtocol-Protocol.h>

@class NSString;
@protocol PXDisplayAssetCollection;

@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol>
{
    long long _defaultNavigationKind;	// 8 = 0x8
    long long _currentURLNavigationKind;	// 16 = 0x10
    long long _sessionInitialNavigationKind;	// 24 = 0x18
    id <PXDisplayAssetCollection> _lastAppearedAssetCollection;	// 32 = 0x20
    long long _lastAppearedAssetCollectionNavigationKind;	// 40 = 0x28
    _Bool _isPXStoryEnabled;	// 48 = 0x30
}

+ (id)payloadSessionStartTypeKey;	// IMP=0x000000000015812c
+ (id)payloadLaunchTypeKey;	// IMP=0x000000000015811f
+ (id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x00000000001580bf
+ (id)forYouTabOpenedEventName;	// IMP=0x00000000001580b2
+ (id)memoryPlayedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x0000000000158052
+ (id)memoryPlayedEventName;	// IMP=0x0000000000158045
+ (id)memoryOpenedAppEventNameWithNavigationKind:(long long)arg1;	// IMP=0x0000000000157fe5
+ (id)memoryOpenedEventName;	// IMP=0x0000000000157fd8
- (void).cxx_destruct;	// IMP=0x0000000000157b0e
- (void)processEvent:(id)arg1;	// IMP=0x0000000000157228
- (void)_userDidPlayMovieOfAssetCollection:(id)arg1;	// IMP=0x00000000001570e2
- (void)_userDidViewContentsOfAssetCollection:(id)arg1;	// IMP=0x0000000000156ef7
- (id)init;	// IMP=0x0000000000156e6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

