//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutMonitorConfiguration, GEOObserverHashTable;

__attribute__((visibility("hidden")))
@interface MapsScreenLayoutMonitor : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    FBSDisplayLayout *_lastKnownLayout;	// 16 = 0x10
    _Bool _hasFirstUpdate;	// 24 = 0x18
    _Bool _needsUpdate;	// 25 = 0x19
    _Bool _locked;	// 26 = 0x1a
    _Bool _isScreenFullyOn;	// 27 = 0x1b
    _Bool _isScreenOn;	// 28 = 0x1c
    _Bool _isOurAppActive;	// 29 = 0x1d
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 32 = 0x20
    unsigned long long _changeReason;	// 40 = 0x28
    FBSDisplayLayoutMonitorConfiguration *_configuration;	// 48 = 0x30
}

+ (id)sharedMonitor;	// IMP=0x00200000005074d8
- (void).cxx_destruct;	// IMP=0x002000000050837d
@property(retain, nonatomic) FBSDisplayLayoutMonitorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long changeReason; // @synthesize changeReason=_changeReason;
// Error: Property attributes should begin with the type ('T') attribute, property name: isOurAppActive
// Property attributes: (null)

@property(nonatomic) _Bool isScreenOn; // @synthesize isScreenOn=_isScreenOn;
@property(nonatomic) _Bool isScreenFullyOn; // @synthesize isScreenFullyOn=_isScreenFullyOn;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
- (void)_layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000507f13
- (unsigned long long)_changeReasonWithNewLayout:(id)arg1 context:(id)arg2;	// IMP=0x0010000000507d09
- (_Bool)_isMapsActiveInLayout:(id)arg1;	// IMP=0x0010000000507b65
- (void)_notifyObservers;	// IMP=0x0010000000507a9e
- (void)_prepareLayoutMonitor;	// IMP=0x0010000000507a83
- (void)stopMonitoringWithObserver:(id)arg1;	// IMP=0x0010000000507963
- (void)startMonitoringWithObserver:(id)arg1;	// IMP=0x0010000000507813
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
- (void)dealloc;	// IMP=0x00100000005075be
- (id)init;	// IMP=0x001000000050752d

@end
