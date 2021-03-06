//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsShortcutAtMapItemDeduper <MapsSuggestionsDeduper>
{
    struct vector<MapsSuggestionsEntryType, std::allocator<MapsSuggestionsEntryType>> _types;	// 8 = 0x8
}

+ (_Bool)isEnabled;	// IMP=0x000000000011090f
- (id).cxx_construct;	// IMP=0x000000000011094a
- (void).cxx_destruct;	// IMP=0x0000000000110926
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;	// IMP=0x0000000000110420
- (id)initWithSacrificedTypes:(const void *)arg1;	// IMP=0x00000000001103a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

