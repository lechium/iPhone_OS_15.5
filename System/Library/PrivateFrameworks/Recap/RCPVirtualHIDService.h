//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Recap/HIDVirtualEventServiceDelegate-Protocol.h>
#import <Recap/RCPEventDeliveryService-Protocol.h>

@class HIDVirtualEventService, NSDictionary, NSMutableDictionary, NSString, RCPEventSenderProperties;
@protocol OS_dispatch_group;

@interface RCPVirtualHIDService : NSObject <HIDVirtualEventServiceDelegate, RCPEventDeliveryService>
{
    RCPEventSenderProperties *_properties;	// 8 = 0x8
    _Bool _isOpen;	// 16 = 0x10
    HIDVirtualEventService *_eventService;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSDictionary *_propertyDictionary;	// 40 = 0x28
    NSMutableDictionary *_dynamicMetaProperties;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_waitForOpenGroup;	// 56 = 0x38
}

+ (id)serviceWithIdentifier:(id)arg1 properties:(id)arg2;	// IMP=0x00000000000040d4
- (void).cxx_destruct;	// IMP=0x0000000000004b42
@property(retain, nonatomic) NSObject<OS_dispatch_group> *waitForOpenGroup; // @synthesize waitForOpenGroup=_waitForOpenGroup;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) NSMutableDictionary *dynamicMetaProperties; // @synthesize dynamicMetaProperties=_dynamicMetaProperties;
@property(retain, nonatomic) NSDictionary *propertyDictionary; // @synthesize propertyDictionary=_propertyDictionary;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) HIDVirtualEventService *eventService; // @synthesize eventService=_eventService;
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;	// IMP=0x0000000000004a01
- (_Bool)setOutputEvent:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000049f9
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000049f1
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;	// IMP=0x000000000000492f
- (id)propertyForKey:(id)arg1 forService:(id)arg2;	// IMP=0x000000000000487e
- (void)stop;	// IMP=0x00000000000047e5
@property(readonly, nonatomic) _Bool isRunning;
- (_Bool)startWithError:(id *)arg1;	// IMP=0x00000000000047aa
- (void)postHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000046f9
@property(retain) RCPEventSenderProperties *properties;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000004140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

