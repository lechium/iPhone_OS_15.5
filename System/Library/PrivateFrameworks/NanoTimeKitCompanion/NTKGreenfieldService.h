//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKGreenfieldDecodingServiceProtocol-Protocol.h>

@interface NTKGreenfieldService : NSObject <NTKGreenfieldDecodingServiceProtocol>
{
}

+ (id)_unzipWatchfaceFromURL:(id)arg1;	// IMP=0x00000000001cda70
- (void)removeFileAtPath:(id)arg1 withSandboxExtension:(char *)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cdd78
- (void)unzipWatchfaceFromURL:(id)arg1 withSandboxExtension:(char *)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cd7ae

@end

