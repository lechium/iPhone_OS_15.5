//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSuggestionsMutableSignalPack, NSObject, NSString;
@protocol MapsSuggestionsFeelerDelegate, OS_dispatch_queue;

@interface MapsSuggestionsRoutineFeeler
{
    MapsSuggestionsMutableSignalPack *_signalPack;	// 8 = 0x8
    double _pollingFrequency;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (_Bool)isEnabled;	// IMP=0x002000000000d188
- (void).cxx_destruct;	// IMP=0x002000000000f18a
- (double)updateSignals;	// IMP=0x001000000000d2fe
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x001000000000d1bd
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x001000000000d19f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
