//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MeCardDataProvider, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MapsMetroAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_currentLocationUpdateTimer;	// 16 = 0x10
    MeCardDataProvider *_meCardProvider;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x002000000037be29
- (void).cxx_destruct;	// IMP=0x002000000037c667
@property(retain, nonatomic) MeCardDataProvider *meCardProvider; // @synthesize meCardProvider=_meCardProvider;
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x001000000037c44d
- (void)_stopLocationUpdateTimer;	// IMP=0x001000000037c417
- (void)_startLocationUpdateTimerIfNeeded;	// IMP=0x001000000037c2a6
- (void)_locationManagerApprovalDidChange:(id)arg1;	// IMP=0x001000000037c12a
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x001000000037c118
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000037c106
- (void)stopMonitoring;	// IMP=0x001000000037c0ac
- (void)startMonitoring;	// IMP=0x001000000037c04f
- (id)init;	// IMP=0x001000000037beae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

