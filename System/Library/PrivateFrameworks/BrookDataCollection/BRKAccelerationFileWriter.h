//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BrookDataCollection/BRKAccelerationWriter-Protocol.h>

@class NSOutputStream, NSString;

@interface BRKAccelerationFileWriter <BRKAccelerationWriter>
{
    NSOutputStream *_outputStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000294f
- (void)_lock_close;	// IMP=0x0000000000002917
- (void)close;	// IMP=0x00000000000028b5
- (void)_lock_openWithDataCount:(unsigned long long)arg1;	// IMP=0x00000000000027b0
- (void)openWithDataCount:(unsigned long long)arg1;	// IMP=0x0000000000002740
- (void)_lock_writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;	// IMP=0x00000000000026db
- (void)writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;	// IMP=0x000000000000264e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
