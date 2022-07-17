//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsMapsSyncObserver-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsMapsSync, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsMapsSyncSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    MapsSuggestionsMapsSync *_mapsSync;	// 16 = 0x10
}

+ (unsigned long long)disposition;	// IMP=0x000000000005fe3a
+ (_Bool)isEnabled;	// IMP=0x000000000005fe23
- (void).cxx_destruct;	// IMP=0x0000000000060f7b
- (void)awaitQueue;	// IMP=0x0000000000060f4b
- (void)mapsSync:(id)arg1 didChangeForContentType:(long long)arg2;	// IMP=0x0000000000060cb2
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060733
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x0000000000060643
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005ff90
- (void)stop;	// IMP=0x000000000005fef3
- (void)start;	// IMP=0x000000000005fe45
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;	// IMP=0x000000000005fab9
- (id)initWithMapsSync:(id)arg1 delegate:(id)arg2 name:(id)arg3;	// IMP=0x000000000005f900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
