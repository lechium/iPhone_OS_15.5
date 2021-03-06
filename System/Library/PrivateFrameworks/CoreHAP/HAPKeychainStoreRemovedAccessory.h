//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFLogging-Protocol.h>

@class NSDate, NSError, NSString;

@interface HAPKeychainStoreRemovedAccessory : HMFObject <HMFLogging>
{
    NSString *_accessoryName;	// 8 = 0x8
    NSDate *_creationDate;	// 16 = 0x10
    NSError *_removeError;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000008753c
- (void).cxx_destruct;	// IMP=0x00000000000874fa
@property(retain, nonatomic) NSError *removeError; // @synthesize removeError=_removeError;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
- (id)initWithName:(id)arg1 creationDate:(id)arg2;	// IMP=0x00000000000872d3
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

