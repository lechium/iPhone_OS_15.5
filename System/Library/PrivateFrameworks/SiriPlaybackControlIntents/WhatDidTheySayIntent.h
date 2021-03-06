//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class Device, NSArray, NSDate;

@interface WhatDidTheySayIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x000000000017e850
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x000000000017e5e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017e490
- (id)init;	// IMP=0x000000000017e3d0

// Remaining properties
@property(nonatomic, retain) Device *device; // @dynamic device;
@property(nonatomic, copy) NSArray *deviceContext; // @dynamic deviceContext;
@property(nonatomic, copy) NSDate *startTime; // @dynamic startTime;

@end

