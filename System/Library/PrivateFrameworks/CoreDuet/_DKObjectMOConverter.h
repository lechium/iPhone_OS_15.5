//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject
{
    _Bool _readMetadata;	// 8 = 0x8
    _Bool _deduplicateValues;	// 9 = 0x9
    NSArray *_excludedMetadataKeys;	// 16 = 0x10
    NSCache *_cache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011a546
@property(retain) NSArray *excludedMetadataKeys; // @synthesize excludedMetadataKeys=_excludedMetadataKeys;
@property _Bool deduplicateValues; // @synthesize deduplicateValues=_deduplicateValues;
@property _Bool readMetadata; // @synthesize readMetadata=_readMetadata;
- (id)dataIntervalsFromManagedObjects:(id)arg1;	// IMP=0x000000000011a181
- (id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000011a0bb
- (id)objectsFromManagedObjects:(id)arg1;	// IMP=0x0000000000119dc4
- (id)init;	// IMP=0x0000000000119d8a

@end

