//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@interface ATXPBShortcutsEditorEventMetadata : PBCodable <NSCopying>
{
    unsigned int _numStepsInShortcut;	// 8 = 0x8
    struct {
        unsigned int numStepsInShortcut:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int numStepsInShortcut; // @synthesize numStepsInShortcut=_numStepsInShortcut;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000058c17
- (unsigned long long)hash;	// IMP=0x0000000000058bed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058b5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058af9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000058ad5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000058aaa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000058a9d
- (id)dictionaryRepresentation;	// IMP=0x0000000000058824
- (id)description;	// IMP=0x0000000000058775
@property(nonatomic) _Bool hasNumStepsInShortcut;

@end

