//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject
{
    NSDictionary *_images;	// 8 = 0x8
}

+ (id)manifestFileForRegion:(id)arg1;	// IMP=0x0000000000108302
+ (void)saveManifestDataToDeviceForRegion:(id)arg1 data:(id)arg2;	// IMP=0x00000000001080ed
+ (void)downloadManifestForRegion:(id)arg1 url:(id)arg2 fileDownloader:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000107d44
+ (id)manifestForRegion:(id)arg1;	// IMP=0x0000000000107a3b
+ (void)removeManifestFileForRegion:(id)arg1;	// IMP=0x00000000001074c8
+ (_Bool)manifestFileExistsForRegion:(id)arg1;	// IMP=0x000000000010742c
- (void).cxx_destruct;	// IMP=0x0000000000108422
@property(readonly, nonatomic) NSDictionary *images; // @synthesize images=_images;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001075c4

@end

