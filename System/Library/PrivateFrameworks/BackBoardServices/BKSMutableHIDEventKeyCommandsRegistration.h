//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet;

@interface BKSMutableHIDEventKeyCommandsRegistration
{
}

+ (id)new;	// IMP=0x000000000002c73b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c6fa
@property(copy, nonatomic) NSSet *keyCommands; // @dynamic keyCommands;
@property(copy, nonatomic) BKSHIDEventDeferringToken *deferringToken; // @dynamic deferringToken;
@property(copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment; // @dynamic deferringEnvironment;
- (id)init;	// IMP=0x000000000002b9cf

@end

