//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FezAdditions)
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000008afe
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000008adc
- (_Bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4 asCopy:(_Bool)arg5;	// IMP=0x0000000000008917
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x000000000000873f
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;	// IMP=0x0000000000008485
- (_Bool)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x0000000000008398
- (_Bool)_isPathOnMissingVolume:(id)arg1;	// IMP=0x0000000000008271
- (id)_randomSimilarFilePathAsPath:(id)arg1;	// IMP=0x000000000000819d
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;	// IMP=0x0000000000008021
- (id)_randomTemporaryPathWithFileName:(id)arg1;	// IMP=0x0000000000007ee2
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;	// IMP=0x0000000000007dfa
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;	// IMP=0x0000000000007d30
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;	// IMP=0x0000000000007d19
- (id)_randomTemporaryPathWithSuffix:(id)arg1;	// IMP=0x0000000000007d05
- (id)_generateLinkForURL:(id)arg1;	// IMP=0x0000000000007a89
@end
