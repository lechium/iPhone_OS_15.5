//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFont : NSObject
{
}

+ (id)edFontFromXmlFontElement:(struct _xmlNode *)arg1 inConditionalFormat:(_Bool)arg2 returnDefaultIfEmpty:(_Bool)arg3 state:(id)arg4;	// IMP=0x00000000003bba36
+ (id)vertAlignEnumMap;	// IMP=0x00000000003bb982
+ (id)underlineEnumMap;	// IMP=0x00000000003bb8ce
+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg1;	// IMP=0x00000000001bd1ed
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg1;	// IMP=0x00000000001bd2de

@end

