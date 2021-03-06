//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

@interface OspreyMessageProducer : NSObject
{
    CDUnknownBlockType _serializer;	// 8 = 0x8
    id <OspreyClientStreamingContext> _streamingContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000047d6
- (void)finishProducing;	// IMP=0x00000000000047c0
- (void)produceMessage:(id)arg1 compressed:(_Bool)arg2;	// IMP=0x000000000000476e
- (void)produceMessage:(id)arg1;	// IMP=0x000000000000472b
- (id)initWithMessageSerializer:(CDUnknownBlockType)arg1 streamingContext:(id)arg2;	// IMP=0x000000000000468f

@end

