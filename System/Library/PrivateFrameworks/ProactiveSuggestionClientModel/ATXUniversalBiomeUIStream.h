//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStoreConfig, _PASLock;

@interface ATXUniversalBiomeUIStream : NSObject
{
    BMStoreConfig *_storeConfig;	// 8 = 0x8
    _PASLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ffa3
- (id)_innerStreamForConsumerSubType:(unsigned char)arg1;	// IMP=0x000000000002ff44
- (id)_validUIStreamConsumerSubTypes;	// IMP=0x000000000002ff37
- (id)_innerStreamForStreamId:(id)arg1;	// IMP=0x000000000002fca6
- (id)_streamIdForConsumerSubType:(unsigned char)arg1;	// IMP=0x000000000002fc2f
- (void)donateGenericUIEvent:(id)arg1;	// IMP=0x000000000002fb8f
- (id)deprecatedGenericEventPublisherFromStartTime:(double)arg1;	// IMP=0x000000000002fb16
- (id)genericEventPublisherFromStartTime:(double)arg1 consumerSubType:(unsigned char)arg2;	// IMP=0x000000000002fa8e
- (id)genericEventPublisherFromStartTime:(double)arg1;	// IMP=0x000000000002f831
- (id)streamIdentifiers;	// IMP=0x000000000002f644
- (id)initWithStoreConfig:(id)arg1;	// IMP=0x000000000002f556
- (id)init;	// IMP=0x000000000002f542

@end

