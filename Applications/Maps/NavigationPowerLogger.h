//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NavigationPowerLogger : NSObject
{
    _Bool _screenIsLocked;	// 8 = 0x8
    NSDate *_eventStartDate;	// 16 = 0x10
    NSDictionary *_trackedState;	// 24 = 0x18
    _Bool _shouldLog;	// 32 = 0x20
    _Bool _displayingNavOnLockScreen;	// 33 = 0x21
    unsigned long long _mapType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000281937
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool displayingNavOnLockScreen; // @synthesize displayingNavOnLockScreen=_displayingNavOnLockScreen;
- (void)screenLayoutDidChange;	// IMP=0x00100000002818c6
- (void)_resetLogEvent;	// IMP=0x001000000028188d
- (void)_logCurrentNavStateIfNeeded;	// IMP=0x0010000000281887
- (void)_navigationEnded;	// IMP=0x0010000000281881
- (void)_navigationStarted;	// IMP=0x001000000028187b
- (void)stopLogging;	// IMP=0x001000000028186b
- (void)startLogging;	// IMP=0x001000000028184d
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x0010000000281801
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x00100000002817ef
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000002817a9
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000281797
- (void)dealloc;	// IMP=0x00100000002816e8
- (id)init;	// IMP=0x00100000002815e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
