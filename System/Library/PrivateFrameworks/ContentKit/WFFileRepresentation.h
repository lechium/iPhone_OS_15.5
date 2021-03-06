//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString, NSURL, WFFileType;

@interface WFFileRepresentation
{
    _Bool _deletesFileOnDeallocation;	// 8 = 0x8
    _Bool _securityScopedResource;	// 9 = 0x9
    _Bool _isTemporaryFile;	// 10 = 0xa
    NSString *_filename;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSURL *_fileURL;	// 32 = 0x20
    WFFileType *_wfType;	// 40 = 0x28
    NSString *_wfName;	// 48 = 0x30
    NSDate *_creationDate;	// 56 = 0x38
    NSDate *_modificationDate;	// 64 = 0x40
    NSURL *_originalURL;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006cd60
+ (_Bool)coordinateFileOperation:(unsigned long long)arg1 shouldCoordinate:(_Bool)arg2 fileURL:(id)arg3 destinationURL:(id)arg4 accessor:(CDUnknownBlockType)arg5;	// IMP=0x000000000006c909
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 unsanitizedName:(id *)arg3;	// IMP=0x000000000006c501
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000006c4ec
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 unsanitizedName:(id *)arg3;	// IMP=0x000000000006c40c
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2;	// IMP=0x000000000006c3f7
+ (id)typeOfFile:(id)arg1;	// IMP=0x000000000006c2bb
+ (id)typeOfData:(id)arg1;	// IMP=0x000000000006c1df
+ (_Bool)isAllowedToRepresentFileURL:(id)arg1;	// IMP=0x000000000006c17d
+ (_Bool)fileIsInDisallowedDirectory:(id)arg1;	// IMP=0x000000000006c005
+ (_Bool)sandboxAllowsRepresentingFileURL:(id)arg1;	// IMP=0x000000000006bff0
+ (void)addDisallowedDirectory:(id)arg1;	// IMP=0x000000000006bed2
+ (id)disallowedDirectoryURLs;	// IMP=0x000000000006bec1
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;	// IMP=0x000000000006be0d
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4;	// IMP=0x000000000006bdee
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3;	// IMP=0x000000000006bdd9
+ (id)fileWithURL:(id)arg1 options:(long long)arg2;	// IMP=0x000000000006bdc4
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;	// IMP=0x000000000006bd1a
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3;	// IMP=0x000000000006bd05
- (void).cxx_destruct;	// IMP=0x000000000006b614
@property(readonly, nonatomic) _Bool isTemporaryFile; // @synthesize isTemporaryFile=_isTemporaryFile;
@property(readonly, nonatomic) _Bool securityScopedResource; // @synthesize securityScopedResource=_securityScopedResource;
@property(readonly, nonatomic) _Bool deletesFileOnDeallocation; // @synthesize deletesFileOnDeallocation=_deletesFileOnDeallocation;
@property(readonly, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) WFFileType *wfType; // @synthesize wfType=_wfType;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (_Bool)isEncodable;	// IMP=0x000000000006b573
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b05a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ab23
- (id)copyWithName:(id)arg1 addingExtensionIfNecessary:(_Bool)arg2 zone:(struct _NSZone *)arg3;	// IMP=0x000000000006a973
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x000000000006a959
@property(readonly, nonatomic) NSString *wfName; // @synthesize wfName=_wfName;
- (id)updatedFilenameForUserEnteredName:(id)arg1 addingExtensionIfNecessary:(_Bool)arg2;	// IMP=0x000000000006a85a
- (id)typeForUserEnteredName:(id)arg1 addingExtensionIfNecessary:(_Bool)arg2;	// IMP=0x000000000006a7b3
- (id)description;	// IMP=0x000000000006a70e
- (id)mappedDataWithError:(id *)arg1;	// IMP=0x000000000006a60a
- (id)mappedData;	// IMP=0x000000000006a5f6
- (id)inputStream;	// IMP=0x000000000006a528
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic) long long representationType;
- (_Bool)writeToFileURL:(id)arg1 overwriting:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000006a40e
- (_Bool)writeToFileURL:(id)arg1 copy:(_Bool)arg2 overwrite:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000006a22d
- (_Bool)writeToTemporaryFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a172
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;	// IMP=0x0000000000069dbf
- (id)initWithFileURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;	// IMP=0x000000000006923c
- (id)initWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;	// IMP=0x0000000000068f49

@end

