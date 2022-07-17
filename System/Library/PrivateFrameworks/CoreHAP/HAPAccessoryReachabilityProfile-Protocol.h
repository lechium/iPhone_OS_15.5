//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSCopying-Protocol.h>
#import <CoreHAP/NSObject-Protocol.h>

@class HAPCharacteristic;

@protocol HAPAccessoryReachabilityProfile <NSObject, NSCopying>
@property(readonly, nonatomic) HAPCharacteristic *pollCharacteristic;
@property(readonly, nonatomic) HAPCharacteristic *sleepIntervalCharacteristic;
@property(nonatomic) double sleepInterval;
@end
