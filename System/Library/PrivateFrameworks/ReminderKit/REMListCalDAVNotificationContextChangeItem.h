//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b361f
@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b334f
- (void)clearCalDAVNotifications;	// IMP=0x00000000000b3240
- (void)removeCalDAVNotication:(id)arg1;	// IMP=0x00000000000b3011
- (void)_addCalDAVNotification:(id)arg1;	// IMP=0x00000000000b2e59
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;	// IMP=0x00000000000b2cc5
@property(readonly, nonatomic) NSArray *calDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;	// IMP=0x00000000000b2be7

@end

