//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitEventRouter/HMEEvent.h>

@class HMAccessoryInfo;

@interface HMAccessoryInfoEvent : HMEEvent
{
    HMAccessoryInfo *_accessoryInfo;	// 8 = 0x8
}

+ (id)decodeAccessoryInfoFromEvent:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000146f99
- (void).cxx_destruct;	// IMP=0x0000000000146f86
@property(readonly, nonatomic) HMAccessoryInfo *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
- (id)encodedData;	// IMP=0x0000000000146efb
- (id)initWithAccessoryInfo:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;	// IMP=0x0000000000146e23

@end

