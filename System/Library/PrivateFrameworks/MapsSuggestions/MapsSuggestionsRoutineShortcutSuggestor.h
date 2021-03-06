//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor-Protocol.h>

@class MapsSuggestionsRoutine, NSString;

@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor>
{
    MapsSuggestionsRoutine *_routine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ee6e7
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee3fb
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x00000000000ee1bb
- (id)initWithRoutine:(id)arg1;	// IMP=0x00000000000ee03e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

