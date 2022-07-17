//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable <NSCopying>
{
    CDStruct_95bda58d _actions;	// 8 = 0x8
    int _component;	// 32 = 0x20
    _Bool _handleLocally;	// 36 = 0x24
    struct {
        unsigned int has_component:1;
        unsigned int has_handleLocally:1;
    } _flags;	// 40 = 0x28
}

- (unsigned long long)hash;	// IMP=0x0000000000fc3eeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fc3dfd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fc3d63
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fc3cb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fc3ca6
- (id)jsonRepresentation;	// IMP=0x0000000000fc37fc
- (id)dictionaryRepresentation;	// IMP=0x0000000000fc3553
- (id)description;	// IMP=0x0000000000fc34a4
- (void)dealloc;	// IMP=0x0000000000fc3385

@end
