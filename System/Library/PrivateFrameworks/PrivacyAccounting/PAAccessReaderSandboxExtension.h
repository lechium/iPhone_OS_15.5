//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAAccessReaderSandboxExtension : NSObject
{
    long long _handle;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000cc58
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;	// IMP=0x000000000000cc14
- (id)initWithHandle:(long long)arg1 forRootDirectory:(id)arg2;	// IMP=0x000000000000cb9e
- (id)initWithToken:(id)arg1 forPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000cac8

@end

