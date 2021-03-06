//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLGPUDebugCommandEncoder-Protocol.h>

@class NSString;

@interface MTLGPUDebugBlitCommandEncoder <MTLGPUDebugCommandEncoder>
{
    unsigned int _encoderID;	// 36 = 0x24
}

@property(readonly) unsigned int encoderID; // @synthesize encoderID=_encoderID;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;	// IMP=0x0000000000098333
- (id)temporaryBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000098313
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;	// IMP=0x00000000000981dd
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000981d7
- (id)initWithBlitCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned int)arg3;	// IMP=0x00000000000981a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

