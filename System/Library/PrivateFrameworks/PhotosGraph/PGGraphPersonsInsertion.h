//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGGraphPersonsInsertion
{
    NSSet *_personLocalIdentifiers;	// 8 = 0x8
    NSSet *_persons;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000450bff
@property(readonly, nonatomic) NSSet *persons; // @synthesize persons=_persons;
@property(readonly, nonatomic) NSSet *personLocalIdentifiers; // @synthesize personLocalIdentifiers=_personLocalIdentifiers;
- (id)description;	// IMP=0x0000000000450b33
- (unsigned long long)changeCount;	// IMP=0x0000000000450b16
- (unsigned long long)type;	// IMP=0x0000000000450b0b
- (id)initWithPersons:(id)arg1;	// IMP=0x00000000004508f0
- (id)initWithPersonLocalIdentifiers:(id)arg1;	// IMP=0x0000000000450882

@end
