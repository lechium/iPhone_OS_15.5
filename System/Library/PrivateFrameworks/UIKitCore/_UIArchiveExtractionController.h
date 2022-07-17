//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _UIArchiveExtractionController : NSObject
{
    NSArray *_extractedContentAbsolutePaths;	// 8 = 0x8
    NSString *_sourceArchivePath;	// 16 = 0x10
    NSString *_destinationExtractionRootPath;	// 24 = 0x18
    NSString *_destinationContentProtectionType;	// 32 = 0x20
    NSString *_sourceArchiveExtractionRootPath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005c1ea2
@property(retain, nonatomic) NSString *sourceArchiveExtractionRootPath; // @synthesize sourceArchiveExtractionRootPath=_sourceArchiveExtractionRootPath;
@property(retain, nonatomic) NSString *destinationContentProtectionType; // @synthesize destinationContentProtectionType=_destinationContentProtectionType;
@property(retain, nonatomic) NSString *destinationExtractionRootPath; // @synthesize destinationExtractionRootPath=_destinationExtractionRootPath;
@property(readonly, nonatomic) NSString *sourceArchivePath; // @synthesize sourceArchivePath=_sourceArchivePath;
- (_Bool)_createDestinationRoot:(id *)arg1;	// IMP=0x00000000005c1c7e
- (id)extractedContentAbsolutePathsMatchingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000005c1b86
- (_Bool)extractArchiveContent:(id *)arg1;	// IMP=0x00000000005c1ade
- (id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2;	// IMP=0x00000000005c1a1d

@end
