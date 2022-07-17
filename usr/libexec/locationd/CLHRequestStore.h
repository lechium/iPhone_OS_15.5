//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLHLocationClassifier, NSURL;

@interface CLHRequestStore : NSObject
{
    CLHLocationClassifier *_classifier;	// 8 = 0x8
    NSURL *_rootDir;	// 16 = 0x10
}

- (id)jsonObject;	// IMP=0x00200000008c5969
- (id)allArchiveURLs;	// IMP=0x00100000008c579f
- (id)requestArchivesForHarvester:(int)arg1;	// IMP=0x00100000008c558f
- (unsigned long long)pointCountForHarvester:(int)arg1;	// IMP=0x00100000008c5469
- (void)pruneSecondaryDataOlderThan:(double)arg1 forHarvester:(int)arg2;	// IMP=0x00100000008c534f
- (void)clearDataForHarvester:(int)arg1;	// IMP=0x00100000008c5245
- (id)classifyingStoreForHarvesterWithSubArchiving:(int)arg1 itemCountThresholdForAutoCleanUp:(int)arg2;	// IMP=0x00100000008c522b
- (id)classifyingStoreForHarvester:(int)arg1;	// IMP=0x00100000008c5211
- (id)classifyingStoreForHarvester:(int)arg1 enableSubArchiving:(_Bool)arg2 itemCountThresholdForAutoCleanUp:(int)arg3;	// IMP=0x00100000008c5147
- (id)archiveForHarvester:(int)arg1 withSuffix:(id)arg2;	// IMP=0x00100000008c509c
- (id)archiveForHarvester:(int)arg1;	// IMP=0x00100000008c5020
- (id)archiveWithIdentifier:(id)arg1;	// IMP=0x00100000008c4fbd
- (id)initWithRootDirectory:(id)arg1 classifier:(id)arg2;	// IMP=0x00100000008c4f54

@end
