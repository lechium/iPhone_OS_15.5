//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXFont : NSObject
{
}

+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;	// IMP=0x000000000039c180
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;	// IMP=0x000000000039bde4
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x000000000039bc37
+ (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode *)arg2 state:(id)arg3;	// IMP=0x000000000039b91f
+ (id)defaultEdRunCollectionWithState:(id)arg1;	// IMP=0x000000000039b7b5
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x000000000020a038
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;	// IMP=0x000000000020a4e6
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;	// IMP=0x000000000039b2ac
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;	// IMP=0x000000000020a3b9
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x000000000020a2ca

@end

