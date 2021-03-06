//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IISMetricStore : NSObject
{
    MISSING_TYPE *storageLock;	// 8 = 0x8
    MISSING_TYPE *windowStartDate;	// 90112 = 0x16000
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *enrichmentProviders;	// 90112 = 0x16000
    MISSING_TYPE *messageListeners;	// 5 = 0x5
    MISSING_TYPE *sendInterval;	// 20 = 0x14
}

+ (id)sharedInstance;	// IMP=0x0000000000009f75
- (void).cxx_destruct;	// IMP=0x000000000000efe4
- (_Bool)shouldSendMessages;	// IMP=0x000000000000e414
- (_Bool)sendMessagesWithShouldContinue:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e2cc
- (void)registerMessageListener:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b980
- (void)registerEnrichmentProvider:(id)arg1;	// IMP=0x000000000000b894
- (void)removeAllMetricsWithPrefix:(id)arg1;	// IMP=0x000000000000b796
- (id)saveMessage:(id)arg1 backend:(unsigned char)arg2 messageIdentifier:(id)arg3;	// IMP=0x000000000000b4e1
- (id)init;	// IMP=0x000000000000ab49

@end

