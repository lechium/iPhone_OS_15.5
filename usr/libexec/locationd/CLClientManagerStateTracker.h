//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLStateTracker.h>

@interface CLClientManagerStateTracker : CLStateTracker
{
    struct _CLClientManagerStateTrackerState _state;	// 16 = 0x10
    void *_identifier;	// 24 = 0x18
    _Bool _inTransaction;	// 32 = 0x20
}

+ (const char *)trackerStateTypeName;	// IMP=0x004000000029d0b3
+ (unsigned long long)trackerStateSize;	// IMP=0x001000000029d0a8
- (void *)identifier;	// IMP=0x002000000029d0c0
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;	// IMP=0x001000000029cfb7
- (void)updateState:(CDUnknownBlockType)arg1;	// IMP=0x001000000029ce3b
@property(nonatomic) _Bool locationRestricted;
@property(nonatomic) int locationServicesEnabledStatus;
- (void)dealloc;	// IMP=0x001000000029ca54
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x001000000029c7db
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;	// IMP=0x001000000029c7c6
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;	// IMP=0x001000000029c765
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;	// IMP=0x001000000029c750

@end

