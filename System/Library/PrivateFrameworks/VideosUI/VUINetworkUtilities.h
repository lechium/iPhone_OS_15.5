//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/ICEnvironmentMonitorObserver-Protocol.h>
#import <VideosUI/RadiosPreferencesDelegate-Protocol.h>

@class NSString, RadiosPreferences;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUINetworkUtilities : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver>
{
    RadiosPreferences *_radioPrefs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_networkUtilityQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000018e4a4
- (void).cxx_destruct;	// IMP=0x000000000018e9d7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkUtilityQueue; // @synthesize networkUtilityQueue=_networkUtilityQueue;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x000000000018e9aa
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x000000000018e998
- (void)_notifyObservers;	// IMP=0x000000000018e7aa
- (void)airplaneModeChanged;	// IMP=0x000000000018e798
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic, getter=isAirplaneModeEnabled) _Bool airplaneModeEnabled;
@property(readonly, nonatomic, getter=isNetworkReachable) _Bool networkReachable;
- (void)dealloc;	// IMP=0x000000000018e5ec
- (id)init;	// IMP=0x000000000018e4f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
