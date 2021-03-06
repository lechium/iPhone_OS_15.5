//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskOperationNotificationDelegate-Protocol.h>

@class CATRemoteTaskOperation, NSString;
@protocol CRKRequestPerformingProtocol;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate>
{
    id <CRKRequestPerformingProtocol> mDaemonProxy;	// 8 = 0x8
    CATRemoteTaskOperation *mSubscriptionOperation;	// 16 = 0x10
    long long _settingsUIVisible;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001d365
@property(nonatomic) long long settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
- (void)settingsUIVisibleDidChange:(_Bool)arg1;	// IMP=0x000000000001d30c
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000001d22f
- (_Bool)isCurrentSubscriptionOperation:(id)arg1;	// IMP=0x000000000001d222
- (void)endUpdating;	// IMP=0x000000000001d1dd
- (void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1;	// IMP=0x000000000001d155
- (void)beginUpdating;	// IMP=0x000000000001d072
- (id)initWithDaemonProxy:(id)arg1;	// IMP=0x000000000001cfff
- (void)dealloc;	// IMP=0x000000000001cfc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

