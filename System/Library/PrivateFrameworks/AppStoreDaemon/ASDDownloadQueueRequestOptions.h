//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDJobManifest;

@interface ASDDownloadQueueRequestOptions
{
    ASDJobManifest *_manifest;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a512
- (void).cxx_destruct;	// IMP=0x000000000002a601
@property(copy, nonatomic) ASDJobManifest *manifest; // @synthesize manifest=_manifest;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a5b5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a51a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a49e
- (id)initWithManifest:(id)arg1;	// IMP=0x000000000002a430

@end

