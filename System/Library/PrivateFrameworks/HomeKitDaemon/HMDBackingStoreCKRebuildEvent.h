//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDBackingStoreCKRebuildEvent <HMDAWDLogEvent>
{
    int _rebuildStatus;	// 8 = 0x8
}

@property(readonly) int rebuildStatus; // @synthesize rebuildStatus=_rebuildStatus;
- (id)initWithCloudZoneID:(id)arg1 rebuildStatus:(id)arg2;	// IMP=0x000000000097e2c8
- (id)metricForAWD;	// IMP=0x0000000000865072
- (unsigned int)AWDMessageType;	// IMP=0x0000000000865067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

