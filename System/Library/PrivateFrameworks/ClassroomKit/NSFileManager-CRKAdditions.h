//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CRKAdditions)
+ (id)crk_computeNonContainerizedHomeDirectoryURL;	// IMP=0x00000000000b3cd2
+ (id)crk_nonContainerizedHomeDirectoryURL;	// IMP=0x00000000000b3c3d
- (id)crk_collisionAvoidingURLForURL:(id)arg1;	// IMP=0x00000000000b42a6
- (id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000b3dd9
- (_Bool)crk_safeRemoveItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b3cf2
@property(readonly) _Bool crk_isStudentdInstalled;
@end
