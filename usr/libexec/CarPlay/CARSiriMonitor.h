//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARObserverHashTable;

@interface CARSiriMonitor : NSObject
{
    _Bool _siriEnabled;	// 8 = 0x8
    CARObserverHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004496b
@property(retain) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
- (void)handleAssistantPreferencesChanged:(id)arg1;	// IMP=0x001000000004492d
- (void)handleAssistantLanguageChanged:(id)arg1;	// IMP=0x001000000004491b
- (void)_updateSiriEnabled;	// IMP=0x0010000000044860
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000447ee
- (void)addObserver:(id)arg1;	// IMP=0x001000000004477c
- (void)dealloc;	// IMP=0x00100000000446a8
- (id)init;	// IMP=0x0010000000044585

@end

