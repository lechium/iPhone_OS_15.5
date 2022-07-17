//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject
{
}

+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;	// IMP=0x0000000000027bc2
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00000000002ffc5a
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x0000000000028257
+ (id)readLineEndFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00000000002ffa08
+ (id)presetDashEnumMap;	// IMP=0x0000000000028339
+ (id)lineEndLengthEnumMap;	// IMP=0x00000000001dbcda
+ (id)lineEndWidthEnumMap;	// IMP=0x00000000001dbcaa
+ (id)lineEndTypeEnumMap;	// IMP=0x00000000001dbc7a
+ (id)penAlignmentEnumMap;	// IMP=0x0000000000028227
+ (id)lineCapEnumMap;	// IMP=0x00000000000281c7
+ (id)compoundLineEnumMap;	// IMP=0x00000000000281f7

@end
