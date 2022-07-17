//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>

@interface PFChecksum : NSObject <NSCopying>
{
    struct PFChecksumBytes _bytes;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000035630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035625
- (unsigned long long)hash;	// IMP=0x0000000000035617
- (_Bool)isEqualToBytes:(struct PFChecksumBytes)arg1;	// IMP=0x00000000000355ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035556
- (id)string;	// IMP=0x00000000000354ba
- (struct PFChecksumBytes)checksumBytes;	// IMP=0x00000000000354ac
- (id)initWithChecksumAsData:(id)arg1;	// IMP=0x00000000000353e2
- (id)initWithData:(id)arg1;	// IMP=0x000000000003530d
- (id)initWithString:(id)arg1;	// IMP=0x00000000000351a0
- (id)initWithBytes:(struct PFChecksumBytes)arg1;	// IMP=0x000000000003515d

@end
