//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface _DT_GCDAsyncWritePacket : NSObject
{
    NSData *buffer;	// 8 = 0x8
    unsigned long long bytesDone;	// 16 = 0x10
    long long tag;	// 24 = 0x18
    double timeout;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a90d
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;	// IMP=0x000000000002a880

@end

