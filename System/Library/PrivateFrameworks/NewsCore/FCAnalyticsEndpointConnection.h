//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, FCEndpointConnection;

@interface FCAnalyticsEndpointConnection : NSObject
{
    FCEndpointConnection *_endpointConnection;	// 8 = 0x8
    FCAsyncSerialQueue *_serialQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d5d0c
@property(retain, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) FCEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 priority:(float)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002d4ff5
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002d4f27
- (id)initWithEndpointConnection:(id)arg1;	// IMP=0x00000000002d4ea2

@end
