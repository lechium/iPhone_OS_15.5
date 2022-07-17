//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UILibArchiveStreamingReader;

@interface _UIArchiveListingController : NSObject
{
    _UILibArchiveStreamingReader *_archiveReader;	// 8 = 0x8
    _Bool _isValidArchive;	// 16 = 0x10
    _Bool _excludeDotFilesFromResults;	// 17 = 0x11
    NSString *_archivePath;	// 24 = 0x18
    long long _appleDoubleIdentificationType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005c19f5
@property(nonatomic) _Bool excludeDotFilesFromResults; // @synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults;
@property(nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (_Bool)_shouldVisitItem:(id)arg1;	// IMP=0x00000000005c18d5
- (_Bool)enumerateLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000005c1662
- (_Bool)determineIsReadableArchive;	// IMP=0x00000000005c1604
- (void)dealloc;	// IMP=0x00000000005c15c2
- (id)initWithArchivePath:(id)arg1;	// IMP=0x00000000005c154b

@end
