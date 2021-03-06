//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMTimeBasedPublisherStream-Protocol.h>

@class BMRestrictedStream, NSString;

@interface BMMediaReactionStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>
{
    BMRestrictedStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008f4ef
- (id)source;	// IMP=0x000000000008f4d9
- (id)publisher;	// IMP=0x000000000008f46b
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(_Bool)arg5;	// IMP=0x000000000008f455
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(_Bool)arg4;	// IMP=0x000000000008f43f
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x000000000008f429
- (id)init;	// IMP=0x000000000008f38b
@property(readonly, nonatomic) NSString *identifier;

@end

