//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockTimerMutating-Protocol.h>

@class AFClockTimer, NSDate, NSString, NSURL, NSUUID;

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating>
{
    AFClockTimer *_baseModel;	// 8 = 0x8
    NSUUID *_timerID;	// 16 = 0x10
    NSURL *_timerURL;	// 24 = 0x18
    _Bool _isFiring;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    double _duration;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    double _fireTimeInterval;	// 72 = 0x48
    NSDate *_fireDate;	// 80 = 0x50
    NSDate *_firedDate;	// 88 = 0x58
    NSDate *_dismissedDate;	// 96 = 0x60
    NSDate *_lastModifiedDate;	// 104 = 0x68
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimerID:1;
        unsigned int hasTimerURL:1;
        unsigned int hasIsFiring:1;
        unsigned int hasTitle:1;
        unsigned int hasState:1;
        unsigned int hasDuration:1;
        unsigned int hasType:1;
        unsigned int hasFireTimeInterval:1;
        unsigned int hasFireDate:1;
        unsigned int hasFiredDate:1;
        unsigned int hasDismissedDate:1;
        unsigned int hasLastModifiedDate:1;
    } _mutationFlags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000004ded4
- (id)generate;	// IMP=0x000000000004db43
- (void)setLastModifiedDate:(id)arg1;	// IMP=0x000000000004db21
- (void)setDismissedDate:(id)arg1;	// IMP=0x000000000004daff
- (void)setFiredDate:(id)arg1;	// IMP=0x000000000004dadd
- (void)setFireDate:(id)arg1;	// IMP=0x000000000004dabb
- (void)setFireTimeInterval:(double)arg1;	// IMP=0x000000000004daaa
- (void)setType:(long long)arg1;	// IMP=0x000000000004da9c
- (void)setDuration:(double)arg1;	// IMP=0x000000000004da8d
- (void)setState:(long long)arg1;	// IMP=0x000000000004da7f
- (void)setTitle:(id)arg1;	// IMP=0x000000000004da5f
- (void)setIsFiring:(_Bool)arg1;	// IMP=0x000000000004da52
- (void)setTimerURL:(id)arg1;	// IMP=0x000000000004da32
- (void)setTimerID:(id)arg1;	// IMP=0x000000000004da12
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000004d9a7
- (id)init;	// IMP=0x000000000004d993

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

