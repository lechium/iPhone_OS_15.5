//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PHPerson;

@interface PGMergeCandidateQuestion
{
    unsigned short _type;	// 8 = 0x8
    unsigned short _displayType;	// 10 = 0xa
    unsigned short _state;	// 12 = 0xc
    unsigned short _entityType;	// 14 = 0xe
    NSString *_entityIdentifier;	// 16 = 0x10
    double _score;	// 24 = 0x18
    PHPerson *_person;	// 32 = 0x20
    NSDictionary *_additionalInfo;	// 40 = 0x28
}

+ (id)questionForPerson:(id)arg1;	// IMP=0x00000000001a88c2
- (void).cxx_destruct;	// IMP=0x00000000001a8880
- (id)additionalInfo;	// IMP=0x00000000001a886f
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (void)setScore:(double)arg1;	// IMP=0x00000000001a884c
- (double)score;	// IMP=0x00000000001a883a
- (unsigned short)state;	// IMP=0x00000000001a8829
- (id)entityIdentifier;	// IMP=0x00000000001a8818
- (_Bool)isEqualToQuestion:(id)arg1;	// IMP=0x00000000001a879e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8741
- (unsigned long long)hash;	// IMP=0x00000000001a8724
- (void)remove;	// IMP=0x00000000001a86d0
- (void)persistWithCreationDate:(id)arg1;	// IMP=0x00000000001a8665
- (unsigned short)entityType;	// IMP=0x00000000001a865a
- (unsigned short)displayType;	// IMP=0x00000000001a864f
- (unsigned short)type;	// IMP=0x00000000001a8644
- (id)initWithPerson:(id)arg1 score:(double)arg2;	// IMP=0x00000000001a857e

@end
