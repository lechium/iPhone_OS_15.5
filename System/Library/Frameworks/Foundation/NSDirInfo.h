//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDirInfo : NSMutableDictionary
{
    NSMutableDictionary *dict;	// 8 = 0x8
}

- (id)serializeToData;	// IMP=0x00000000001c1e38
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;	// IMP=0x00000000001c1e30
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000001c1e13
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c1df6
- (id)keyEnumerator;	// IMP=0x00000000001c1dd9
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001c1dbc
- (unsigned long long)count;	// IMP=0x00000000001c1d9f
- (void)dealloc;	// IMP=0x00000000001c1d3a
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000001c1cfb
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000001c1cbc
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c1c7d
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000001c1c2f
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001c1bdc
- (id)init;	// IMP=0x00000000001c1ba2

@end

