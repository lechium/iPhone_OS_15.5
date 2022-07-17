//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PRPinyinContext
{
    NSMutableArray *_modifications;	// 16 = 0x10
    NSMutableArray *_addedModifications;	// 24 = 0x18
    NSMutableArray *_removedModifications;	// 32 = 0x20
    NSMutableArray *_addedRemovedModifications;	// 40 = 0x28
    NSMutableArray *_prefixes;	// 48 = 0x30
    NSMutableArray *_guesses;	// 56 = 0x38
    NSMutableArray *_completions;	// 64 = 0x40
    NSMutableArray *_corrections;	// 72 = 0x48
    char *_buffer;	// 80 = 0x50
    char *_altBuffer;	// 88 = 0x58
    char *_altBufferScores;	// 96 = 0x60
    NSMutableArray *_geometryDataArray;	// 104 = 0x68
    unsigned long long *_syllableLengthArray;	// 112 = 0x70
    void *_connection;	// 120 = 0x78
    unsigned long long _length;	// 128 = 0x80
    unsigned long long _lengthBeforeApostrophes;	// 136 = 0x88
    unsigned long long _startingPoint;	// 144 = 0x90
    unsigned long long _lastIndexes[4];	// 152 = 0x98
    unsigned long long _nextIndexes[2];	// 184 = 0xb8
    unsigned long long _startIndex;	// 200 = 0xc8
    unsigned long long _endIndex;	// 208 = 0xd0
    unsigned long long _abbreviatedSyllableCount;	// 216 = 0xd8
    unsigned long long _previouslyAnalyzedLength;	// 224 = 0xe0
    double _validSequenceCorrectionThreshold;	// 232 = 0xe8
    _Bool _lastSyllableIsPartial;	// 240 = 0xf0
}

- (id)correction;	// IMP=0x00000000000c04a8
- (id)completions;	// IMP=0x00000000000c022d
- (id)guesses;	// IMP=0x00000000000bffa2
- (id)prefixes;	// IMP=0x00000000000bff91
- (id)removedModifications;	// IMP=0x00000000000bff6a
- (id)addedModifications;	// IMP=0x00000000000bff43
- (id)currentModifications;	// IMP=0x00000000000bfc77
- (void)reset;	// IMP=0x00000000000bf9ff
- (void)removeNumberOfInputCharacters:(unsigned long long)arg1;	// IMP=0x00000000000bf893
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;	// IMP=0x00000000000bf458
- (void)_removePrefixes;	// IMP=0x00000000000bf34e
- (void)_addPrefixes;	// IMP=0x00000000000beb7f
- (void)_filterModifications;	// IMP=0x00000000000be233
- (void)_addDeletions;	// IMP=0x00000000000bdb9d
- (void)_addInsertions;	// IMP=0x00000000000bd55a
- (void)_addValidSequenceReplacements;	// IMP=0x00000000000bcefe
- (void)_addReplacements;	// IMP=0x00000000000bc89c
- (void)_addTranspositions;	// IMP=0x00000000000bc080
- (void)_addSpecialEnglishWords;	// IMP=0x00000000000bbc83
- (void)_addEnglishWordsQuickly:(_Bool)arg1;	// IMP=0x00000000000bbbf8
- (_Bool)_addEnglishWordsEndingAtIndex:(unsigned long long)arg1 quickly:(_Bool)arg2;	// IMP=0x00000000000bb8a5
- (_Bool)_addEnglishWordForRange:(struct _NSRange)arg1 quickly:(_Bool)arg2;	// IMP=0x00000000000bb473
- (void)_advanceIndexes;	// IMP=0x00000000000bb22a
- (void)_removeModificationsAndMoveStartingPoint;	// IMP=0x00000000000babe4
- (double)validSequenceCorrectionThreshold;	// IMP=0x00000000000babd2
- (void)setValidSequenceCorrectionThreshold:(double)arg1;	// IMP=0x00000000000babc0
- (id)description;	// IMP=0x00000000000bab51
- (void)dealloc;	// IMP=0x00000000000baa57
- (id)init;	// IMP=0x00000000000ba8ac

@end
