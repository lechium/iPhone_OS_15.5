//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface UAPasteboardGeneration : NSObject
{
    unsigned long long _generation;	// 8 = 0x8
    NSSet *_allTypes;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSMutableDictionary *_typePaths;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041bad
@property(retain) NSMutableDictionary *typePaths; // @synthesize typePaths=_typePaths;
@property(copy) NSArray *items; // @synthesize items=_items;
@property(copy) NSSet *allTypes; // @synthesize allTypes=_allTypes;
@property(readonly) unsigned long long generation; // @synthesize generation=_generation;
- (void)fetchTypeURL:(id)arg1;	// IMP=0x0000000000041762
- (_Bool)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000041115
- (_Bool)addItem:(id)arg1;	// IMP=0x0000000000040e8b
- (id)getTypePaths;	// IMP=0x0000000000040e43
- (id)initWithGeneration:(unsigned long long)arg1;	// IMP=0x0000000000040d73

@end
