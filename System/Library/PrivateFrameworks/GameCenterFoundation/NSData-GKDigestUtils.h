//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GKDigestUtils)
+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dd549
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000dc344
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000dc1f8
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000db887
- (id)_gkMD5HashData;	// IMP=0x000000000001b9f0
- (id)_gkSHA1HashData;	// IMP=0x000000000001b946
- (id)_gkMD5HashString;	// IMP=0x000000000001b8ab
- (id)_gkSHA1HashString;	// IMP=0x000000000001b810
- (id)_gkZippedDictionaryValue;	// IMP=0x0000000000034371
- (id)_gkBase64EncodedString;	// IMP=0x000000000003435d
- (id)initWithBase64EncodedString_gk:(id)arg1;	// IMP=0x0000000000034349
@end

