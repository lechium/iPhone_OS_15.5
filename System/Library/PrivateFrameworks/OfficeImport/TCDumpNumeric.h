//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TCDumpEnum;

__attribute__((visibility("hidden")))
@interface TCDumpNumeric
{
    int mType;	// 16 = 0x10
    TCDumpEnum *mEnumType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002db202
- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;	// IMP=0x00000000002db1fc
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;	// IMP=0x00000000002dafe0
- (id)enumType;	// IMP=0x00000000002dafcb
- (int)type;	// IMP=0x00000000002dafbb
- (id)initWithType:(int)arg1;	// IMP=0x00000000002dafa6
- (id)initWithType:(int)arg1 enumType:(id)arg2;	// IMP=0x00000000002daf12

@end
