//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKInput;

@interface TASKRequest : PBRequest
{
    TASKInput *_input;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006c374
@property(retain, nonatomic) TASKInput *input; // @synthesize input=_input;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006c2f5
- (unsigned long long)hash;	// IMP=0x001000000006c2d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006c23e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006c1c6
- (void)copyTo:(id)arg1;	// IMP=0x001000000006c1a3
- (void)writeTo:(id)arg1;	// IMP=0x001000000006c186
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006c179
- (id)dictionaryRepresentation;	// IMP=0x001000000006bf2e
- (id)description;	// IMP=0x001000000006be7f

@end
