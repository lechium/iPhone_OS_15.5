//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface BMFileHandleIntern : NSObject
{
    NSMapTable *_fhCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000003aee
- (void).cxx_destruct;	// IMP=0x0000000000004318
- (id)openFileWithAttributes:(id)arg1 createNewFile:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000003ce1
- (id)fileHandleForFilePath:(id)arg1 permissions:(unsigned long long)arg2 protectionClass:(unsigned long long)arg3 createIfNotCached:(_Bool)arg4 createNewFile:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0000000000003ba9
- (id)init;	// IMP=0x0000000000003b43

@end

