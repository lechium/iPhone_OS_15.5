//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFill : NSObject
{
}

+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;	// IMP=0x00000000001bd662
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000001bd63b
+ (id)gradientFillTypeEnumMap;	// IMP=0x00000000003bb08c
+ (id)patternFillTypeEnumMap;	// IMP=0x00000000003bafd8
+ (id)edStopFromXmlGradientElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000003bb43e
+ (int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2;	// IMP=0x00000000003bb39e
+ (id)edGradientFillFromXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000003bb140
+ (int)edPatternTypeFromXmlPatternTypeString:(id)arg1;	// IMP=0x00000000001bdb9b
+ (id)edPatternFillFromXmlElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;	// IMP=0x00000000001bd84b

@end
