//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSSocketPairHandshake
{
    unsigned int _versionNumber;	// 44 = 0x2c
}

@property(readonly, nonatomic) unsigned int versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)_nonHeaderData;	// IMP=0x00000000000a6514
- (unsigned char)command;	// IMP=0x00000000000a6509
- (id)initWithVersionNumber:(unsigned int)arg1;	// IMP=0x00000000000a64c7
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;	// IMP=0x00000000000a6430

@end
