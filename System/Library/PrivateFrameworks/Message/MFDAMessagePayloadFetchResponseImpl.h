//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFDAMessagePayloadFetchResponse-Protocol.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse>
{
    _Bool streaming;	// 8 = 0x8
    _Bool streamingDone;	// 9 = 0x9
    NSData *data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000029396
- (id)data;	// IMP=0x0000000000029388
- (_Bool)streamingDone;	// IMP=0x000000000002937f
- (_Bool)streaming;	// IMP=0x0000000000029376
- (id)initWithData:(id)arg1 streaming:(_Bool)arg2 streamingDone:(_Bool)arg3;	// IMP=0x00000000000292e1

@end
