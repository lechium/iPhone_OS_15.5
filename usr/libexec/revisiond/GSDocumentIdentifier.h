//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GSDocumentIdentifier : NSObject
{
    unsigned char volumeUUID[16];	// 8 = 0x8
    unsigned long long documentID;	// 24 = 0x18
    int deviceID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000001fed
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00200000000021b4
- (id)description;	// IMP=0x0010000000002109
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002092
- (unsigned long long)hash;	// IMP=0x0010000000001ff5
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000001f38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001ec1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000001e92
- (id)initWithDocumentIdentifier:(id)arg1;	// IMP=0x0010000000001e2c

@end
