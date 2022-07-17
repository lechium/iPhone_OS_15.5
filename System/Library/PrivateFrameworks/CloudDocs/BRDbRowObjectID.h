//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BRDbRowObjectID
{
    unsigned long long _rowId;	// 8 = 0x8
    unsigned char _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000069e63
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069ee7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000069e6b
- (_Bool)isFpfsItem;	// IMP=0x0000000000069e3a
- (unsigned char)type;	// IMP=0x0000000000069e29
- (id)documentID;	// IMP=0x0000000000069de4
- (id)folderID;	// IMP=0x0000000000069d9f
- (unsigned long long)rawID;	// IMP=0x0000000000069d8e
- (id)asString;	// IMP=0x0000000000069cf6
- (id)description;	// IMP=0x0000000000069c8a
- (id)initWithRowID:(unsigned long long)arg1 type:(unsigned char)arg2;	// IMP=0x0000000000069c34

@end
