//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRBufferMap-Protocol.h>

@class NSString, TXRDefaultBuffer;

__attribute__((visibility("hidden")))
@interface TXRDefaultBufferMap : NSObject <TXRBufferMap>
{
    void *_bytes;	// 8 = 0x8
    TXRDefaultBuffer *_buffer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001ca0
@property(readonly, nonatomic) void *bytes;
- (id)initForBuffer:(id)arg1 withBytes:(void *)arg2;	// IMP=0x0000000000001c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
