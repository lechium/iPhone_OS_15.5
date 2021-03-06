//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AWDServerConnection : NSObject
{
    void *fServerConnection;	// 8 = 0x8
}

- (void)flushToQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001af6a
- (unsigned long long)getAWDTimestamp;	// IMP=0x000000000001af60
- (void)registerComponentParametersChangeCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ae9e
- (id)getComponentConfigurationParameters;	// IMP=0x000000000001ae77
- (_Bool)registerConfigChangeCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ac07
- (_Bool)registerQueriableMetricCallback:(CDUnknownBlockType)arg1 forIdentifier:(unsigned int)arg2;	// IMP=0x000000000001abec
- (_Bool)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ab1c
- (_Bool)submitMetric:(id)arg1;	// IMP=0x000000000001aa7b
- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;	// IMP=0x000000000001aa1a
- (void)dealloc;	// IMP=0x000000000001a9c4
- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(_Bool)arg2;	// IMP=0x000000000001a928
- (id)initWithComponentId:(unsigned int)arg1;	// IMP=0x000000000001a897

@end

