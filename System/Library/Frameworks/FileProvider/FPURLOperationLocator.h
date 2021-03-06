//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FPURLOperationLocator
{
    _Bool _attachSandboxExtensionOnXPCEncoding;	// 16 = 0x10
    long long _size;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b6fc8
- (_Bool)requiresCrossDeviceCopy;	// IMP=0x00000000000b76bd
- (void)attachSandboxExtensionOnXPCEncoding;	// IMP=0x00000000000b76ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b75d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b744d
- (_Bool)isFolder;	// IMP=0x00000000000b7409
- (_Bool)isDownloaded;	// IMP=0x00000000000b7304
- (unsigned long long)size;	// IMP=0x00000000000b71e9
- (id)filename;	// IMP=0x00000000000b7199
- (id)parentIdentifier;	// IMP=0x00000000000b7126
- (id)identifier;	// IMP=0x00000000000b6fd8
- (_Bool)isExternalURL;	// IMP=0x00000000000b6fd0
- (id)description;	// IMP=0x00000000000b6f78
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000b6f35

@end

