//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXBorders : NSObject
{
}

+ (id)edBordersFromXmlBordersElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000001bdf88
+ (id)borderStyleEnumMap;	// IMP=0x00000000003b8908
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg1;	// IMP=0x00000000001be73a
+ (int)edBorderStyleFromXmlBorderStyleString:(id)arg1;	// IMP=0x00000000001be69a
+ (id)edBorderFromXmlElement:(struct _xmlNode *)arg1 diagonalType:(int)arg2 state:(id)arg3;	// IMP=0x00000000001be4bd

@end
