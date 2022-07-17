//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Recap/NSCoding-Protocol.h>
#import <Recap/NSCopying-Protocol.h>

@class NSArray, RCPEventSenderProperties;

@interface RCPEvent : NSObject <NSCoding, NSCopying>
{
    unsigned long long _deliveryTimestamp;	// 8 = 0x8
    RCPEventSenderProperties *_senderProperties;	// 16 = 0x10
    struct __IOHIDEvent *_hidEvent;	// 24 = 0x18
    NSArray *_preActions;	// 32 = 0x20
}

+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1 deliveryTimeStamp:(unsigned long long)arg2 senderProperties:(id)arg3 preActions:(id)arg4;	// IMP=0x0000000000006a5a
+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1 deliveryTimeStamp:(unsigned long long)arg2;	// IMP=0x0000000000006a11
+ (id)eventWithHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000069e7
- (void).cxx_destruct;	// IMP=0x0000000000006c8a
@property(readonly, nonatomic) NSArray *preActions; // @synthesize preActions=_preActions;
@property(readonly, nonatomic) struct __IOHIDEvent *hidEvent; // @synthesize hidEvent=_hidEvent;
@property(retain, nonatomic) RCPEventSenderProperties *senderProperties; // @synthesize senderProperties=_senderProperties;
@property(nonatomic) unsigned long long deliveryTimestamp; // @synthesize deliveryTimestamp=_deliveryTimestamp;
- (void)dealloc;	// IMP=0x0000000000006c08
- (id)eventAdjustedForDeliveryTimeInterval:(double)arg1 eventEnvironment:(id)arg2;	// IMP=0x0000000000006b0d
@property(readonly, nonatomic) unsigned long long timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000697e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000068cf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006779
- (id)init;	// IMP=0x0000000000006752
- (id)initWithDeliveryTimeStamp:(unsigned long long)arg1;	// IMP=0x0000000000006715

@end
