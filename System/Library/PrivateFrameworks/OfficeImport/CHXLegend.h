//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject
{
}

+ (id)chdLegendFromXmlLegendElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x000000000021568d
+ (int)chdLegendPositionFromXmlLegendPositionElement:(struct _xmlNode *)arg1;	// IMP=0x0000000000215ca9
+ (id)chdLegendEntryFromXmlLegendEntryElement:(struct _xmlNode *)arg1 defaultFont:(id)arg2 state:(id)arg3;	// IMP=0x00000000002213c2
+ (void)setDefaultLegendBounds:(id)arg1 legendPosition:(int)arg2;	// IMP=0x0000000000215dd0

@end

