//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStoreConfig, _PASLock;

@interface ATXBiomeBlendingModelStream : NSObject
{
    BMStoreConfig *_storeConfig;	// 8 = 0x8
    _PASLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b168
- (id)_innerStreamForConsumerSubType:(unsigned char)arg1;	// IMP=0x000000000002b109
- (id)_validBlendingStreamConsumerSubTypes;	// IMP=0x000000000002b0f0
- (id)_innerStreamForStreamId:(id)arg1;	// IMP=0x000000000002ae5f
- (id)_streamIdForConsumerSubType:(unsigned char)arg1;	// IMP=0x000000000002ade8
- (void)donateBlendingModelUICacheUpdate:(id)arg1;	// IMP=0x000000000002ad48
- (id)deprecatedPublisherFromStartTime:(double)arg1;	// IMP=0x000000000002accf
- (id)publisherFromStartTime:(double)arg1 consumerSubType:(unsigned char)arg2;	// IMP=0x000000000002ac47
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x000000000002a9ea
- (id)streamIdentifiers;	// IMP=0x000000000002a7fd
- (id)initWithStoreConfig:(id)arg1;	// IMP=0x000000000002a70f
- (id)init;	// IMP=0x000000000002a6fb

@end

