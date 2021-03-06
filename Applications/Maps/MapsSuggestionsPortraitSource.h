//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

@class MapsSuggestionsPortrait, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsPortraitSource : MapsSuggestionsBaseSource
{
    MapsSuggestionsPortrait *_portrait;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (unsigned long long)disposition;	// IMP=0x0020000000562c4b
+ (_Bool)isEnabled;	// IMP=0x0010000000562c34
- (void).cxx_destruct;	// IMP=0x0020000000564197
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000564088
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000563e90
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000563a9f
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000563a97
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x0010000000563a8a
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000056316d
- (void)stop;	// IMP=0x00100000005630fa
- (void)start;	// IMP=0x0010000000563087
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;	// IMP=0x0010000000562d1d
- (id)initWithPortrait:(id)arg1 delegate:(id)arg2 name:(id)arg3;	// IMP=0x0010000000562c56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

