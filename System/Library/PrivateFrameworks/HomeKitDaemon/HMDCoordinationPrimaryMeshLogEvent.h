//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@interface HMDCoordinationPrimaryMeshLogEvent : HMMLogEvent
{
    _Bool _isLeader;	// 8 = 0x8
    _Bool _didChangeLeader;	// 9 = 0x9
    _Bool _didElectLeader;	// 10 = 0xa
    _Bool _isInSecondaryMesh;	// 11 = 0xb
}

@property _Bool isInSecondaryMesh; // @synthesize isInSecondaryMesh=_isInSecondaryMesh;
@property _Bool didElectLeader; // @synthesize didElectLeader=_didElectLeader;
@property _Bool didChangeLeader; // @synthesize didChangeLeader=_didChangeLeader;
@property _Bool isLeader; // @synthesize isLeader=_isLeader;

@end
