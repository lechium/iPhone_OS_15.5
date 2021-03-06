//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSHashTable, NSString;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject>
{
    NSString *_name;	// 8 = 0x8
    struct Queue _callbackQueue;	// 16 = 0x10
    NSHashTable *_innerObservers;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000000b6f8c
- (void).cxx_destruct;	// IMP=0x00000000000b6f50
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)synchronouslyCallBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b69d6
- (_Bool)callBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b63b3
- (unsigned long long)count;	// IMP=0x00000000000b6345
- (void)unregisterObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5fbf
- (void)registerObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b5c2c
- (id)init;	// IMP=0x00000000000b5ae8
- (id)initWithName:(id)arg1;	// IMP=0x00000000000b59e9
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2;	// IMP=0x00000000000b59d4
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2 strong:(_Bool)arg3;	// IMP=0x00000000000b56d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

