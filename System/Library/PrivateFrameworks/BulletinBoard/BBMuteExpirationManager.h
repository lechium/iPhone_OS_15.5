//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol BBMuteExpirationManagerDelegate, OS_dispatch_queue;

@interface BBMuteExpirationManager : NSObject
{
    id <BBMuteExpirationManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_timersBySectionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000069994
@property(retain, nonatomic) NSMutableDictionary *timersBySectionID; // @synthesize timersBySectionID=_timersBySectionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BBMuteExpirationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_triggerDidFireForExpiryTimer:(id)arg1;	// IMP=0x00000000000697fc
- (void)_cancelTimerForSectionID:(id)arg1;	// IMP=0x0000000000069737
- (id)scheduledExpirationDateForSectionID:(id)arg1;	// IMP=0x0000000000069671
- (void)stopWatchingExpirationsForSectionID:(id)arg1;	// IMP=0x000000000006965f
- (_Bool)cleanAndWatchExpirationsForSectionInfo:(id)arg1;	// IMP=0x000000000006938e
- (void)dealloc;	// IMP=0x0000000000069307
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000006926b

@end
