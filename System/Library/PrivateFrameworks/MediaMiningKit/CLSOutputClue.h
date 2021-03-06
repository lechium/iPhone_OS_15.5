//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSEvent, CLSPersonIdentity, CLSPlace, NSMutableArray;

@interface CLSOutputClue
{
    NSMutableArray *_relatedInputTimeClues;	// 96 = 0x60
    NSMutableArray *_relatedInputLocationClues;	// 104 = 0x68
    NSMutableArray *_relatedInputPeopleClues;	// 112 = 0x70
    CLSEvent *_relatedEvent;	// 120 = 0x78
    CLSPersonIdentity *_relatedPerson;	// 128 = 0x80
    CLSPlace *_relatedPlace;	// 136 = 0x88
}

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;	// IMP=0x0000000000055660
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005564e
- (void).cxx_destruct;	// IMP=0x0000000000052521
@property(retain) CLSPlace *relatedPlace; // @synthesize relatedPlace=_relatedPlace;
@property(retain) CLSPersonIdentity *relatedPerson; // @synthesize relatedPerson=_relatedPerson;
@property(retain) CLSEvent *relatedEvent; // @synthesize relatedEvent=_relatedEvent;
- (_Bool)isEqualToClue:(id)arg1;	// IMP=0x0000000000051f2d
- (id)description;	// IMP=0x0000000000051b00
- (id)relatedInputTimeClues;	// IMP=0x0000000000051adb
- (id)relatedInputPeopleClues;	// IMP=0x0000000000051ab6
- (id)relatedInputLocationClues;	// IMP=0x0000000000051a91
- (id)relatedInputClues;	// IMP=0x0000000000051a0d
- (void)addRelatedInputClues:(id)arg1;	// IMP=0x0000000000051819
- (id)init;	// IMP=0x0000000000051743

@end

