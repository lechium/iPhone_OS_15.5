//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CNKDestinationQueryControllerDelegate;

@interface CNKDestinationQueryController : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *scheduleIDSQuerySubject;	// 16 = 0x10
    MISSING_TYPE *scheduleIDSQueryGroupSubject;	// 24 = 0x18
    MISSING_TYPE *scheduleIDSCachedQuerySubject;	// 32 = 0x20
    MISSING_TYPE *scheduleIDSQueryDebouncer;	// 40 = 0x28
    MISSING_TYPE *scheduleIDSQueryGroupDebouncer;	// 48 = 0x30
    MISSING_TYPE *scheduleIDSCachedQueryDebouncer;	// 56 = 0x38
    MISSING_TYPE *scheduleNotificationSubject;	// 64 = 0x40
    MISSING_TYPE *scheduleNotificationDebouncer;	// 72 = 0x48
    MISSING_TYPE *idsDestinations;	// 80 = 0x50
    MISSING_TYPE *idsGroupDestinations;	// 88 = 0x58
    MISSING_TYPE *idsLookupManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000042c76
- (id)init;	// IMP=0x0000000000041fb0
@property(nonatomic) __weak id <CNKDestinationQueryControllerDelegate> delegate; // @synthesize delegate;

@end

