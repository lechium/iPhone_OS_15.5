//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsBlockDeduper <MapsSuggestionsDeduper>
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

+ (_Bool)isEnabled;	// IMP=0x00000000000ff632
+ (id)deduperWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ff39d
- (void).cxx_destruct;	// IMP=0x00000000000ff649
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;	// IMP=0x00000000000ff45c
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ff3ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

