//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMStream-Protocol.h>

@class BMStoreStream, NSString;

@interface BMWorkoutStream : NSObject <BMSourceStream, BMStream>
{
    BMStoreStream *_storeStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035bec
- (id)source;	// IMP=0x0000000000035bd6
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000035bc0
- (id)init;	// IMP=0x0000000000035b0f
@property(readonly, nonatomic) NSString *identifier;

@end

