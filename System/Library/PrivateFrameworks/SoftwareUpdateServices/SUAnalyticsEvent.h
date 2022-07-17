//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SUAnalyticsEvent : NSObject <NSSecureCoding>
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_mutableEventPayload;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSString *_eventUUID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029aab
@property(retain, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
@property(readonly, retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)description;	// IMP=0x000000000002a11c
- (void)_queue_removeEventPayloadEntry:(id)arg1;	// IMP=0x000000000002a0cb
- (void)_queue_setEventPayloadEntryToNull:(id)arg1;	// IMP=0x000000000002a053
- (void)_queue_setEventPayloadEntry:(id)arg1 stringValue:(id)arg2;	// IMP=0x0000000000029fea
- (void)_queue_setEventPayloadEntry:(id)arg1 numberValue:(id)arg2;	// IMP=0x0000000000029f81
- (void)_queue_setEventPayloadEntry:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000000029f02
- (void)removeEventPayloadEntry:(id)arg1;	// IMP=0x0000000000029e84
- (void)setEventPayloadEntryToNull:(id)arg1;	// IMP=0x0000000000029e06
- (void)setEventPayloadEntry:(id)arg1 stringValue:(id)arg2;	// IMP=0x0000000000029d79
- (void)setEventPayloadEntry:(id)arg1 numberValue:(id)arg2;	// IMP=0x0000000000029cec
- (void)setEventPayloadEntry:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000000029c5f
@property(readonly, retain, nonatomic) NSDictionary *eventPayload;
- (id)initWithEventName:(id)arg1;	// IMP=0x0000000000029ab3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029a25
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002989e
- (id)init;	// IMP=0x000000000002985f

@end
