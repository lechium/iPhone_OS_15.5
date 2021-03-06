//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DTCPRemoteCache : NSObject
{
    id *_locks;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051a34
+ (id)kindToString:(long long)arg1;	// IMP=0x0000000000051a0a
+ (id)sharedDTCPRemoteCache;	// IMP=0x0000000000051951
- (_Bool)accessFileKind:(long long)arg1 device:(id)arg2 fileType:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000051d7e
- (id)_filePathForKind:(long long)arg1 fileType:(id)arg2 directoryURL:(id)arg3;	// IMP=0x0000000000051c9d
- (id)_directoryForDevice:(id)arg1;	// IMP=0x0000000000051b59
- (void)dealloc;	// IMP=0x0000000000051ae4
- (id)init;	// IMP=0x0000000000051a5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051a4f

@end

