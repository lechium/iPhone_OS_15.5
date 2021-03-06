//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage
{
    NSUUID *_sha256HashUUID;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013e358
- (void).cxx_destruct;	// IMP=0x000000000013e327
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013e27b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013e1fe
- (id)_sha256HashUUID;	// IMP=0x000000000013e110
- (_Bool)_isEligibleForProxying;	// IMP=0x000000000013e108
- (void)_setImageData:(id)arg1;	// IMP=0x000000000013e09d
- (id)_imageData;	// IMP=0x000000000013e08b
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x000000000013dfbf
- (id)_dictionaryRepresentation;	// IMP=0x000000000013de30
- (id)_identifier;	// IMP=0x000000000013dde0
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ddc7
- (_Bool)_requiresRetrieval;	// IMP=0x000000000013dd94
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013dce8
- (id)initWithImageData:(id)arg1;	// IMP=0x000000000013dc78
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a7193

@end

