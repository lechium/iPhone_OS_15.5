//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMSiriIntentEventsStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009eb89
- (id)source;	// IMP=0x000000000009eb73
- (id)publisher;	// IMP=0x000000000009eb05
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x000000000009eaef
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x000000000009eac9
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x000000000009eab3
- (id)init;	// IMP=0x000000000009ea02
@property(readonly, nonatomic) NSString *identifier;

@end

