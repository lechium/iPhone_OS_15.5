//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSDictionary, RMCommandPayload;

@interface RMCommandPayloadState : NSManagedObject
{
}

- (void)markPending;	// IMP=0x002000000001f74c
- (void)markFailedWithError:(id)arg1 reasons:(id)arg2;	// IMP=0x001000000001f3fc
- (void)markExecutedWithResult:(id)arg1 reasons:(id)arg2 unknownPayloadKeys:(id)arg3;	// IMP=0x001000000001f089
- (void)markQueued;	// IMP=0x001000000001f026

// Remaining properties
@property(retain, nonatomic) RMCommandPayload *command; // @dynamic command;
@property(copy, nonatomic) NSDate *modifiedDate; // @dynamic modifiedDate;
@property(copy, nonatomic) NSArray *reasons; // @dynamic reasons;
@property(copy, nonatomic) NSDictionary *result; // @dynamic result;
@property(nonatomic) short status; // @dynamic status;

@end

