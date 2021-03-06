//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsQueue, NSMutableDictionary, NSString;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject>
{
    NSMutableDictionary *_suppressionEntries;	// 8 = 0x8
    NSString *_suppressionEntriesFilePath;	// 16 = 0x10
    MapsSuggestionsQueue *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f2868
- (void)awaitQueue;	// IMP=0x00000000000f2814
- (id)test_dateUntilSuppressedEntry:(id)arg1;	// IMP=0x00000000000f2631
- (void)test_deleteSuppressedEntriesFile;	// IMP=0x00000000000f252f
- (_Bool)saveSuppressedEntries;	// IMP=0x00000000000f24ce
- (_Bool)loadSuppressedEntries;	// IMP=0x00000000000f1f08
- (void)purge;	// IMP=0x00000000000f1d49
- (_Bool)suppressEntry:(id)arg1 forTime:(double)arg2;	// IMP=0x00000000000f16f9
- (_Bool)isSuppressedEntry:(id)arg1;	// IMP=0x00000000000f15db
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;	// IMP=0x00000000000f1580
- (id)initWithFilePath:(id)arg1;	// IMP=0x00000000000f14ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

