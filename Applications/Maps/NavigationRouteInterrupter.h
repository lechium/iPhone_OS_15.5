//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEngine, NSString;

__attribute__((visibility("hidden")))
@interface NavigationRouteInterrupter : NSObject
{
    MapsSuggestionsEngine *_suggestionsEngine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000788fd9
@property(readonly, nonatomic) MapsSuggestionsEngine *suggestionsEngine; // @synthesize suggestionsEngine=_suggestionsEngine;
- (void)interruptHistoryEntryRoute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000788d5a
- (id)initWithSuggestionsEngine:(id)arg1;	// IMP=0x0010000000788cef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

