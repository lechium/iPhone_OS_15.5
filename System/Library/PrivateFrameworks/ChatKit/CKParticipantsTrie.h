//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CKParticipantsTrie : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSMutableArray *_entities;	// 16 = 0x10
    NSMutableArray *_children;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000393831
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)loadHandleEntityFromLastNode:(id)arg1 intoResult:(id)arg2;	// IMP=0x00000000003934c4
- (id)_lastNodeForString:(id)arg1;	// IMP=0x00000000003930f2
- (_Bool)_trieContainsEntity:(id)arg1;	// IMP=0x0000000000392eac
- (void)_addEntity:(id)arg1 named:(id)arg2 forCharacters:(id)arg3;	// IMP=0x0000000000392a65
- (id)_composedCharactersForString:(id)arg1 appendRootKey:(_Bool)arg2;	// IMP=0x000000000039293a
- (id)entitiesForPrefix:(id)arg1;	// IMP=0x0000000000392755
- (id)rawHandlesForParticipantName:(id)arg1;	// IMP=0x00000000003924f3
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x00000000003924c0
- (void)addParticipantName:(id)arg1 entity:(id)arg2;	// IMP=0x00000000003923d5
- (id)initWithKey:(id)arg1;	// IMP=0x000000000039236a
- (id)init;	// IMP=0x0000000000392351

@end
