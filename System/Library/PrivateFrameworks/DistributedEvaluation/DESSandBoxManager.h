//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface DESSandBoxManager : NSObject
{
    NSArray *_extensions;	// 8 = 0x8
    NSMutableArray *_consumedSandboxExtensions;	// 16 = 0x10
}

+ (id)sandboxExtensionsToXPCConnection:(id)arg1 fileURLs:(id)arg2 requireWrite:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x0000000000022212
+ (void)initialize;	// IMP=0x00000000000221c4
- (void).cxx_destruct;	// IMP=0x0000000000022d92
- (void)releaseExtensions;	// IMP=0x0000000000022b59
- (_Bool)consumeExtensionsWithError:(id *)arg1;	// IMP=0x00000000000227a8
- (void)dealloc;	// IMP=0x000000000002276a
- (id)initWithExtensions:(id)arg1;	// IMP=0x00000000000226d8

@end
