//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXReader : NSObject
{
}

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 drawingState:(id)arg3;	// IMP=0x000000000039cd83
+ (id)readFromParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00000000002052b0
+ (id)externalDataWithChartPart:(id)arg1 relationship:(id)arg2;	// IMP=0x000000000020683d
+ (id)externalDataRelationshipWithChartPart:(id)arg1 drawingState:(id)arg2;	// IMP=0x000000000039d519
+ (id)chartPartWithParentNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x000000000020662e

@end
