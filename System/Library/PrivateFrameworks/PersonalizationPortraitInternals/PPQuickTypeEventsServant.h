//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPQuickTypeServantProtocol-Protocol.h>

@class PPLocalEventStore;

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol>
{
    PPLocalEventStore *_localEventStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008c0f8
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;	// IMP=0x000000000008a101
- (id)init;	// IMP=0x0000000000089ee3

@end

