//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GKBase64)
+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001253c0
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000012424d
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000124101
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000123790
- (id)_gkZippedDictionaryValue;	// IMP=0x002000000008b764
- (id)_gkBase64EncodedString;	// IMP=0x001000000008b750
- (id)initWithBase64EncodedString_gk:(id)arg1;	// IMP=0x001000000008b73c
- (id)_gkMD5HashData;	// IMP=0x00100000000b780b
- (id)_gkSHA1HashData;	// IMP=0x00100000000b7761
- (id)_gkMD5HashString;	// IMP=0x00100000000b76c6
- (id)_gkSHA1HashString;	// IMP=0x00100000000b762b
- (void)_gkWriteToImageCacheWithURLString:(id)arg1;	// IMP=0x0010000000123318
- (id)_gkUnzippedData;	// IMP=0x00100000001231bc
- (id)_gkZippedData;	// IMP=0x0010000000123031
@end
