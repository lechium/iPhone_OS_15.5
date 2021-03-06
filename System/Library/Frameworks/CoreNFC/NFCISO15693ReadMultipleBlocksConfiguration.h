//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NFCISO15693ReadMultipleBlocksConfiguration
{
    unsigned char _flags;	// 8 = 0x8
    unsigned long long _chunkSize;	// 16 = 0x10
    struct _NSRange _range;	// 24 = 0x18
}

@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)asNSDataArrayWithUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000968f
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2;	// IMP=0x0000000000009674
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4;	// IMP=0x00000000000095ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000952d

@end

