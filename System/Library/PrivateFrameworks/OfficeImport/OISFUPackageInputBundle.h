//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUPackageInputBundle : NSObject <SFUInputBundle>
{
    NSString *_rootPath;	// 8 = 0x8
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000000298fc6
- (unsigned int)crc32ForEntry:(id)arg1;	// IMP=0x0000000000298ef8
- (long long)lengthOfEntry:(id)arg1;	// IMP=0x0000000000298d3d
- (id)bufferedInputStreamForEntry:(id)arg1;	// IMP=0x0000000000298cf1
- (id)inputStreamForEntry:(id)arg1;	// IMP=0x0000000000298c74
- (_Bool)hasEntryWithName:(id)arg1;	// IMP=0x0000000000298c59
- (id)_existingPathForEntryName:(id)arg1 isGz:(_Bool *)arg2;	// IMP=0x0000000000298baa
- (void)dealloc;	// IMP=0x0000000000298b6f
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000298b18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

