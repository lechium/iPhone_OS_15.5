//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPHomeManagerObserverDelegate-Protocol.h>

@class NSString;

@interface MPHomeMonitor : NSObject <MPHomeManagerObserverDelegate>
{
    _Bool _soundCheckCachedValue;	// 8 = 0x8
}

+ (id)sharedMonitor;	// IMP=0x00000000002cde1b
+ (void)setupIfNecessary;	// IMP=0x00000000002cdca5
+ (_Bool)isCurrentDeviceValidHomeAccessory;	// IMP=0x00000000002cdc9d
- (void)soundCheckSettingDidUpdate:(_Bool)arg1;	// IMP=0x00000000002cdc84
- (void)homeUsersDidChange;	// IMP=0x00000000002cdc6b
- (void)currentUserDidChange;	// IMP=0x00000000002cdc52
- (void)currentHomeDidChange;	// IMP=0x00000000002cdc39
- (void)_postNotificationWithName:(id)arg1;	// IMP=0x00000000002cdb42
@property(nonatomic, getter=isSoundCheckEnabled) _Bool soundCheckEnabled;
- (id)init;	// IMP=0x00000000002cd9b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

