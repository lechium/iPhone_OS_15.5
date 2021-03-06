//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMPreferences, NSArray, NSNumber;

@interface EDAMSyncChunk
{
    NSNumber *_currentTime;	// 8 = 0x8
    NSNumber *_chunkHighUSN;	// 16 = 0x10
    NSNumber *_updateCount;	// 24 = 0x18
    NSArray *_notes;	// 32 = 0x20
    NSArray *_notebooks;	// 40 = 0x28
    NSArray *_tags;	// 48 = 0x30
    NSArray *_searches;	// 56 = 0x38
    NSArray *_resources;	// 64 = 0x40
    NSArray *_expungedNotes;	// 72 = 0x48
    NSArray *_expungedNotebooks;	// 80 = 0x50
    NSArray *_expungedTags;	// 88 = 0x58
    NSArray *_expungedSearches;	// 96 = 0x60
    NSArray *_linkedNotebooks;	// 104 = 0x68
    NSArray *_expungedLinkedNotebooks;	// 112 = 0x70
    EDAMPreferences *_preferences;	// 120 = 0x78
    NSArray *_notesNoLongerSharedWithMe;	// 128 = 0x80
    NSArray *_linkedAccounts;	// 136 = 0x88
    NSArray *_expungedLinkedAccounts;	// 144 = 0x90
}

+ (id)structFields;	// IMP=0x00000000001a54d6
+ (id)structName;	// IMP=0x00000000001a54c9
- (void).cxx_destruct;	// IMP=0x00000000001a605c
@property(retain, nonatomic) NSArray *expungedLinkedAccounts; // @synthesize expungedLinkedAccounts=_expungedLinkedAccounts;
@property(retain, nonatomic) NSArray *linkedAccounts; // @synthesize linkedAccounts=_linkedAccounts;
@property(retain, nonatomic) NSArray *notesNoLongerSharedWithMe; // @synthesize notesNoLongerSharedWithMe=_notesNoLongerSharedWithMe;
@property(retain, nonatomic) EDAMPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSArray *expungedLinkedNotebooks; // @synthesize expungedLinkedNotebooks=_expungedLinkedNotebooks;
@property(retain, nonatomic) NSArray *linkedNotebooks; // @synthesize linkedNotebooks=_linkedNotebooks;
@property(retain, nonatomic) NSArray *expungedSearches; // @synthesize expungedSearches=_expungedSearches;
@property(retain, nonatomic) NSArray *expungedTags; // @synthesize expungedTags=_expungedTags;
@property(retain, nonatomic) NSArray *expungedNotebooks; // @synthesize expungedNotebooks=_expungedNotebooks;
@property(retain, nonatomic) NSArray *expungedNotes; // @synthesize expungedNotes=_expungedNotes;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSArray *searches; // @synthesize searches=_searches;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *notebooks; // @synthesize notebooks=_notebooks;
@property(retain, nonatomic) NSArray *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *chunkHighUSN; // @synthesize chunkHighUSN=_chunkHighUSN;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;

@end

