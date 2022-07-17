//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTVMBuffer_replayer : NSObject
{
    struct VMBuffer *_vmBuffer;	// 8 = 0x8
}

@property(readonly, nonatomic) struct VMBuffer *vmBuffer; // @synthesize vmBuffer=_vmBuffer;
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x001000000007c5d3
- (void)setLength:(unsigned long long)arg1;	// IMP=0x001000000007c57f
- (void *)mutableBytes;	// IMP=0x001000000007c56e
- (const void *)bytes;	// IMP=0x001000000007c55d
- (unsigned long long)length;	// IMP=0x001000000007c54f
- (void)dealloc;	// IMP=0x001000000007c4f9
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x001000000007c44a
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000007c3b0
- (id)initWithVMBuffer:(struct VMBuffer *)arg1;	// IMP=0x001000000007c352

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
