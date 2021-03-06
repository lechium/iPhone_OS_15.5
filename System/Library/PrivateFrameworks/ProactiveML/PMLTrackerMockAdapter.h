//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTrackerAdapterProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol>
{
    NSMutableArray *_trackedMessages;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000042f51
- (id)trackedMessagesByClass:(Class)arg1;	// IMP=0x0000000000042dd9
- (void)clearAllTrackedMessages;	// IMP=0x0000000000042dc3
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;	// IMP=0x0000000000042daa
- (id)init;	// IMP=0x0000000000042d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

