//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOKeyBagNotification : NSObject
{
    int _currentState;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
}

+ (_Bool)canAccessFilesWithProtection:(unsigned long long)arg1;	// IMP=0x00000000007fc9ae
+ (id)sharedObject;	// IMP=0x00000000007fc8de
- (void)updateState;	// IMP=0x00000000007fca51
@property(readonly, nonatomic) int state;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000007fc9c6
- (_Bool)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2;	// IMP=0x00000000007fc9be
- (_Bool)canAccessFilesWithProtection:(unsigned long long)arg1;	// IMP=0x00000000007fc9b6
- (void)dealloc;	// IMP=0x00000000007fc97f
- (id)init;	// IMP=0x00000000007fc933

@end

