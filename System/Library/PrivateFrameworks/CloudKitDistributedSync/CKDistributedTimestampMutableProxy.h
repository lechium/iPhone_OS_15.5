//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXWriteStructProxy-Protocol.h>

@interface CKDistributedTimestampMutableProxy <CKXWriteStructProxy>
{
}

- (void)setUnordered:(_Bool)arg1;	// IMP=0x00000000000d680c
- (void)setClock:(unsigned long long)arg1;	// IMP=0x00000000000d66f8
- (void)setModifier:(unsigned char)arg1;	// IMP=0x00000000000d65e5
- (void)setSiteIdentifierBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000d64d1
- (void)setSiteIdentifier:(id)arg1;	// IMP=0x00000000000d63ad
- (id)distributedSiteIdentifier;	// IMP=0x00000000000d62bf
- (void)copyFromReadProxy:(id)arg1;	// IMP=0x00000000000d5e62
- (void)copyFromTimestamp:(id)arg1;	// IMP=0x00000000000d8cfc

@end

