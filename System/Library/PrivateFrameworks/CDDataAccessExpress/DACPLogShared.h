//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DACPLogShared : NSObject
{
    NSMutableDictionary *_UUIDToFileMap;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0000000000016623
- (void).cxx_destruct;	// IMP=0x0000000000018a6e
- (_Bool)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(_Bool)arg5 sizeCheck:(long long)arg6 wantsCompressed:(_Bool)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(_Bool *)arg9 outNewFilePath:(id *)arg10;	// IMP=0x000000000001800b
- (_Bool)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(_Bool)arg3 sizeCheck:(long long)arg4 wantsCompressed:(_Bool)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(_Bool *)arg7 outNewFilePath:(id *)arg8;	// IMP=0x000000000001790f
- (id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2;	// IMP=0x00000000000167b2
- (_Bool)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id *)arg3;	// IMP=0x000000000001670a
- (id)init;	// IMP=0x00000000000166b4

@end
