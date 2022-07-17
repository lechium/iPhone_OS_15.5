//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence>
{
    _Bool _synchronizeWasCalled;	// 8 = 0x8
    NSMutableDictionary *_inMemoryStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000370bc
@property(readonly) _Bool synchronizeWasCalled; // @synthesize synchronizeWasCalled=_synchronizeWasCalled;
@property(retain) NSMutableDictionary *inMemoryStore; // @synthesize inMemoryStore=_inMemoryStore;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037047
- (_Bool)synchronize;	// IMP=0x000000000003703b
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000036f9e
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000036f5a
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000036f48
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000036f36
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000036f24
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000036eb2
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000036e2c
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000036da9
- (id)init;	// IMP=0x0000000000036c94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
