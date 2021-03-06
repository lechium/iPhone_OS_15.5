//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXReadStructProxy-Protocol.h>

@interface CKDistributedTimestampProxy <CKXReadStructProxy>
{
}

- (_Bool)unordered;	// IMP=0x00000000000d4660
- (unsigned long long)clock;	// IMP=0x00000000000d4547
- (unsigned char)modifier;	// IMP=0x00000000000d4430
- (void)copySiteIdentifierBytes:(void *)arg1 length:(unsigned long long *)arg2 isNull:(_Bool *)arg3;	// IMP=0x00000000000d4360
- (id)siteIdentifier;	// IMP=0x00000000000d42af
- (id)distributedSiteIdentifier;	// IMP=0x00000000000d41c4
- (id)timestamp;	// IMP=0x00000000000d8bc4

@end

