//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol NTKArgonExtractorProviding, NTKArgonLocalKeyDatabaseProviding, OS_dispatch_queue;

@interface NTKArgonManager : NSObject
{
    id <NTKArgonLocalKeyDatabaseProviding> _keyDatabase;	// 8 = 0x8
    NSArray *_fetchers;	// 16 = 0x10
    id <NTKArgonExtractorProviding> _extractor;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010754a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <NTKArgonExtractorProviding> extractor; // @synthesize extractor=_extractor;
@property(readonly, nonatomic) NSArray *fetchers; // @synthesize fetchers=_fetchers;
@property(readonly, nonatomic) id <NTKArgonLocalKeyDatabaseProviding> keyDatabase; // @synthesize keyDatabase=_keyDatabase;
- (void)_queue_extractKnownKeyDescriptorsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001061b2
- (void)removeArgonManagerObserver:(id)arg1;	// IMP=0x0000000000106112
- (void)addArgonManagerObserver:(id)arg1;	// IMP=0x0000000000106072
- (void)extractKnownKeyDescriptorsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000105f88
- (void)refreshWithReason:(long long)arg1;	// IMP=0x0000000000104843
- (id)_queue_extractedKeyDescriptors;	// IMP=0x000000000010408c
- (id)initWithKeyDatabase:(id)arg1 fetchers:(id)arg2 extractor:(id)arg3;	// IMP=0x0000000000103f55

@end
