//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPDCFDataBuffer
{
    struct __CFData *data;	// 8 = 0x8
}

- (id)copyXPCData;	// IMP=0x0000000000041078
- (struct __CFData *)copyCFData;	// IMP=0x000000000004105b
- (void)dealloc;	// IMP=0x0000000000040ff7
- (unsigned long long)length;	// IMP=0x0000000000040fe7
- (void *)bytes;	// IMP=0x0000000000040fd7
- (id)initWithCFData:(struct __CFData *)arg1;	// IMP=0x0000000000040f5e

@end
