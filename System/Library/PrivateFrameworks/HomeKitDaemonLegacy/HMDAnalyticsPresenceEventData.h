//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsPresenceEventData : HMFObject
{
    int _presenceEventGranularity;	// 8 = 0x8
    int _presenceEventType;	// 12 = 0xc
}

@property(nonatomic) int presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property(nonatomic) int presenceEventGranularity; // @synthesize presenceEventGranularity=_presenceEventGranularity;

@end
