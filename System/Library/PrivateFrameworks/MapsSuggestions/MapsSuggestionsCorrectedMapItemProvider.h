//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMeCardObserver-Protocol.h>

@class MapsSuggestionsMeCard, NSString;
@protocol MapsSuggestionsMeCardReader;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver>
{
    MapsSuggestionsMeCard *_meCard;	// 8 = 0x8
    id <MapsSuggestionsMeCardReader> _meCardReader;	// 16 = 0x10
    CDUnknownBlockType _updateHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000357e3
@property(readonly, nonatomic) NSString *uniqueName;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;	// IMP=0x00000000000356ee
- (id)mapItemFormShortcutForCNIdentifier:(id)arg1;	// IMP=0x000000000003543f
- (void)dealloc;	// IMP=0x00000000000353fa
- (id)initWithMeCardReader:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

