//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTXResourceTracker, NSArray;
@protocol OS_dispatch_queue;

@interface DTXTransport : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_handlerGuard;	// 16 = 0x10
    DTXResourceTracker *_tracker;	// 24 = 0x18
    CDUnknownBlockType _dataReceivedHandler;	// 32 = 0x20
    unsigned int _status;	// 40 = 0x28
    _Bool _resumed;	// 44 = 0x2c
}

+ (_Bool)recognizesURL:(id)arg1;	// IMP=0x00000000000067c3
+ (id)schemes;	// IMP=0x00000000000067bb
- (void).cxx_destruct;	// IMP=0x00000000000072f5
@property(readonly, nonatomic) DTXResourceTracker *resourceTracker; // @synthesize resourceTracker=_tracker;
@property unsigned int status; // @synthesize status=_status;
- (unsigned int)supportedDirections;	// IMP=0x00000000000072ce
- (id)permittedBlockCompressionTypes;	// IMP=0x0000000000007263
@property(readonly) NSArray *localAddresses;
@property(copy, nonatomic) CDUnknownBlockType dataReceivedHandler;
- (void)serializedDisconnect:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e62
- (void)disconnect;	// IMP=0x0000000000006dc2
- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006c78
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x0000000000006c70
- (id)initWithRemoteAddress:(id)arg1;	// IMP=0x0000000000006b81
- (void)dealloc;	// IMP=0x0000000000006b41
- (id)serializedXPCRepresentation;	// IMP=0x0000000000006b39
- (id)initWithXPCRepresentation:(id)arg1;	// IMP=0x00000000000069b3
- (id)init;	// IMP=0x0000000000006859

@end
