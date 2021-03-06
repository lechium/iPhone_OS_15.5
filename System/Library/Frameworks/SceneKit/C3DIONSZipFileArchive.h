//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DIONSZipFileArchive : NSObject
{
    NSDictionary *_contents;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    id _provider;	// 24 = 0x18
    long long _desc;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    NSArray *_names;	// 48 = 0x30
    NSDictionary *_properties;	// 56 = 0x38
    NSMutableDictionary *_cachedContents;	// 64 = 0x40
    void *_reserved;	// 72 = 0x48
    struct __zFlags {
        unsigned int providerSuppliesContents:1;
        unsigned int providerSuppliesStreams:1;
        unsigned int providerSuppliesProperties:1;
        unsigned int noContentsCaching:1;
        unsigned int fileOpen:1;
        unsigned int reserved:27;
    } _zFlags;	// 80 = 0x50
    void *_reserved2[5];	// 88 = 0x58
}

- (_Bool)isValid;	// IMP=0x0000000000218126
- (void)invalidate;	// IMP=0x0000000000218069
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000218014
- (id)archiveStream;	// IMP=0x0000000000217fe2
- (id)archiveData;	// IMP=0x0000000000217a09
- (id)propertiesForEntryName:(id)arg1;	// IMP=0x000000000021798d
- (_Bool)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000217938
- (id)streamForEntryName:(id)arg1;	// IMP=0x00000000002177cb
- (id)contentsForEntryName:(id)arg1;	// IMP=0x0000000000217370
- (id)entryNames;	// IMP=0x0000000000217366
- (void)dealloc;	// IMP=0x0000000000217328
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000217242
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000002170ff
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000216a9a
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000216849

@end

