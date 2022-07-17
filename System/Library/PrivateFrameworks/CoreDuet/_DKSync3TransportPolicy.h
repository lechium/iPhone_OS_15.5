//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject <_DKSync3PolicyCommonMethods>
{
    _Bool _isSyncDisabled;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_transport;	// 32 = 0x20
    unsigned long long _maximumSyncsPerDay;	// 40 = 0x28
    unsigned long long _syncBatchSizeInEvents;	// 48 = 0x30
    unsigned long long _maximumBatchesPerSync;	// 56 = 0x38
    unsigned long long _minimumSyncWindowInSeconds;	// 64 = 0x40
    unsigned long long _minimumTimeBetweenSyncsInSeconds;	// 72 = 0x48
    unsigned long long _singleDevicePeriodicSyncCadenceInDays;	// 80 = 0x50
    unsigned long long _additionsBucketCountTriggeringSync;	// 88 = 0x58
    unsigned long long _deletionsBucketCountTriggeringSync;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000008eeed
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;	// IMP=0x000000000008eb81
- (id)init;	// IMP=0x000000000008e35b

@end
