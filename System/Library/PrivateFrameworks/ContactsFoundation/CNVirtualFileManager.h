//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFileManager-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CNVirtualFileManager : NSObject <CNFileManager>
{
    NSMutableDictionary *_files;	// 8 = 0x8
    NSMutableSet *_directories;	// 16 = 0x10
}

+ (id)allParentFoldersOfURL:(id)arg1;	// IMP=0x0000000000021570
+ (id)URLByNormalizingDirectoryURL:(id)arg1;	// IMP=0x0000000000021511
- (void).cxx_destruct;	// IMP=0x00000000000216d1
- (id)removeExtendedAttribute:(id)arg1 atURL:(id)arg2;	// IMP=0x00000000000214f7
- (id)setValue:(id)arg1 forExtendedAttribute:(id)arg2 atURL:(id)arg3;	// IMP=0x000000000002141a
- (id)valueForExtendedAttribute:(id)arg1 atURL:(id)arg2;	// IMP=0x00000000000211f3
- (_Bool)getValue:(id *)arg1 forExtendendAttribute:(id)arg2 url:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000020fc7
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000020dfe
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3;	// IMP=0x0000000000020d21
- (_Bool)fileExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000000020c0d
- (_Bool)fileExistsAtURL:(id)arg1;	// IMP=0x0000000000020b6d
- (id)removeItemAtURL:(id)arg1;	// IMP=0x0000000000020963
- (id)asyncWriteData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000020887
- (id)observableWithContentsOfURL:(id)arg1;	// IMP=0x00000000000207d7
- (id)asyncDataWithContentsOfURL:(id)arg1;	// IMP=0x0000000000020727
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000020437
- (id)dataWithContentsOfURL:(id)arg1;	// IMP=0x00000000000201f0
- (id)init;	// IMP=0x0000000000020169

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
