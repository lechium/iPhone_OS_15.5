//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRSetConnectionStateMessage
{
}

- (unsigned long long)encryptionType;	// IMP=0x00000000000177b3
- (unsigned long long)type;	// IMP=0x00000000000177a8
@property(readonly, nonatomic) unsigned int state;
- (id)initWithConnectionState:(unsigned int)arg1;	// IMP=0x00000000000176e2

@end

