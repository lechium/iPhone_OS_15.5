//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendarNotification, NSString;

@interface CALNSharedCalendarInvitationNotificationInfo : NSObject
{
    _Bool _isDelegate;	// 8 = 0x8
    NSString *_sourceClientIdentifier;	// 16 = 0x10
    EKCalendarNotification *_calendarNotification;	// 24 = 0x18
    NSString *_sourceTitle;	// 32 = 0x20
    NSString *_sourceIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005822b
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceTitle; // @synthesize sourceTitle=_sourceTitle;
@property(readonly, nonatomic) _Bool isDelegate; // @synthesize isDelegate=_isDelegate;
@property(readonly, nonatomic) EKCalendarNotification *calendarNotification; // @synthesize calendarNotification=_calendarNotification;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
- (id)description;	// IMP=0x00000000000580ba
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 isDelegate:(_Bool)arg3 sourceTitle:(id)arg4 sourceIdentifier:(id)arg5;	// IMP=0x0000000000057fa7

@end
