//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFileManager-Protocol.h>

@class NSFileManager, NSString;

@interface CNFileManager : NSObject <CNFileManager>
{
    NSFileManager *_fileManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ebb2
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)removeExtendedAttribute:(id)arg1 atURL:(id)arg2;	// IMP=0x000000000003eac8
- (_Bool)getValue:(id *)arg1 forExtendendAttribute:(id)arg2 url:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003eab2
- (id)valueForExtendedAttribute:(id)arg1 atURL:(id)arg2;	// IMP=0x000000000003e9aa
- (id)setValue:(id)arg1 forExtendedAttribute:(id)arg2 atURL:(id)arg3;	// IMP=0x000000000003e86d
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000003e7db
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3;	// IMP=0x000000000003e68b
- (id)removeItemAtURL:(id)arg1;	// IMP=0x000000000003e604
- (_Bool)fileExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x000000000003e5a8
- (_Bool)fileExistsAtURL:(id)arg1;	// IMP=0x000000000003e551
- (id)observableWithContentsOfURL:(id)arg1;	// IMP=0x000000000003e4e7
- (id)asyncWriteData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000003e362
- (id)asyncDataWithContentsOfURL:(id)arg1;	// IMP=0x000000000003e21a
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000003dfec
- (id)dataWithContentsOfURL:(id)arg1;	// IMP=0x000000000003df23
- (id)initWithFileManager:(id)arg1;	// IMP=0x000000000003dea5
- (id)init;	// IMP=0x000000000003de4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

