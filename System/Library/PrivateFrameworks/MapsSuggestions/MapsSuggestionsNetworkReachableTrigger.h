//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsCondition-Protocol.h>

@class NSString;

@interface MapsSuggestionsNetworkReachableTrigger <MapsSuggestionsCondition>
{
}

- (id)objectForJSON;	// IMP=0x00000000000361b0
- (_Bool)isTrue;	// IMP=0x0000000000036151
- (void)didRemoveLastObserver;	// IMP=0x00000000000360ea
- (void)didAddFirstObserver;	// IMP=0x000000000003607c
- (void)_reachabilityChanged;	// IMP=0x0000000000036045
- (id)init;	// IMP=0x000000000003600f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
