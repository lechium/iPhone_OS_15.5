//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLStateTracker.h>

@interface CLDaemonStatusStateTracker : CLStateTracker
{
    struct _CLDaemonStatusStateTrackerState _state;	// 16 = 0x10
    void *_identifier;	// 56 = 0x38
    _Bool _inTransaction;	// 64 = 0x40
}

+ (const char *)trackerStateTypeName;	// IMP=0x00400000001ac165
+ (unsigned long long)trackerStateSize;	// IMP=0x00100000001ac15a
- (id).cxx_construct;	// IMP=0x00200000001ac183
- (void *)identifier;	// IMP=0x00100000001ac172
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;	// IMP=0x00100000001ac057
- (void)updateState:(CDUnknownBlockType)arg1;	// IMP=0x00100000001abebb
@property(nonatomic) _Bool restrictedMode;
@property(nonatomic) _Bool batterySaverModeEnabled;
@property(nonatomic) _Bool airplaneMode;
@property(nonatomic) int thermalLevel;
@property(nonatomic) int reachability;
@property(nonatomic) struct Battery batteryData;
- (void)dealloc;	// IMP=0x00100000001ab534
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ab2bb
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;	// IMP=0x00100000001ab2a6
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ab245
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;	// IMP=0x00100000001ab230

@end
