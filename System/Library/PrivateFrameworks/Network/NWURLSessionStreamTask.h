//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NWURLSessionStreamTask
{
}

- (void)startSecureConnection;	// IMP=0x0000000000050eb0
- (void)closeRead;	// IMP=0x0000000000050ea0
- (void)closeWrite;	// IMP=0x0000000000050e90
- (void)captureStreams;	// IMP=0x0000000000050e80
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050e70
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050e50
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000050df0

@end
