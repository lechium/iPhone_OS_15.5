//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface OCPZipPackagePart
{
    OISFUZipEntry *mEntry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000377d29
@property(readonly, nonatomic) OISFUZipEntry *zipEntry; // @synthesize zipEntry=mEntry;
- (struct _xmlTextReader *)xmlReader;	// IMP=0x00000000001a622b
- (struct _xmlDoc *)xmlDocument;	// IMP=0x0000000000195316
- (void)copyToFile:(id)arg1;	// IMP=0x0000000000377cf8
- (id)data;	// IMP=0x00000000001acedb
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;	// IMP=0x0000000000194a20

@end

